#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//(*(void (*)())0)();   ��0ǿ������ת����void ��*������,���ǰ�0ת���ɺ����ĵ�ַ��Ȼ�����0��ַ�ĺ�����

//		������ ����   ����ָ��						
//void(*signal(int,void(*)(int)))(int)
//void(*   )(int)		�������ͣ�����ָ��
// signal��һ����������
// �����ж�����1int,2����ָ�루����һ��������int������������void��
// signal�����ķ�������Ҳ��һ������ָ�룬����Ϊint,����������void
//�������Ľ���Ϊ��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	int (*p)(int, int) = add;//sub mul div
//	//��Ҫһ�����Դ���ĸ�����ָ�������
//	int(*parr[4])(int, int) = { add, sub, mul, div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 4));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{

}

int main()
{
	char* (*p)(char*, const char*) = my_strcpy;
	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
	return 0;
}