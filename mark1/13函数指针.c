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

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//
//int main()
//{
//	char* (*p)(char*, const char*) = my_strcpy;
//	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("**   1  add        2 sub        **\n");
//	printf("**   3  mul        4 div        **\n");
//	printf("**          0 exit              **\n");
//	printf("**********************************\n");
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
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			scanf("%d%d", &x, &y);
//			printf("%d\n",add(x, y));
//			break;
//		case 2:
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("**   1  add        2 sub        **\n");
//	printf("**   3  mul        4 div        **\n");
//	printf("**   5  xor        0 exit       **\n");
//	printf("**********************************\n");
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
//int xor (int x, int y)
//{
//	return x ^ y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfarr[6])(int, int) = { 0,add,sub,mul,div,xor };			//����ָ������--��;--ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("�������������\n");
//			scanf("%d%d", &x, &y);
//			int re = pfarr[input](x,y);
//			printf("�����%d\n", re);
//		}
//		else if (input==0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("**   1  add        2 sub        **\n");
//	printf("**   3  mul        4 div        **\n");
//	printf("**          0 exit              **\n");
//	printf("**********************************\n");
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
//
////�ص�������ͨ������ַ���������øú����лص�������
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������һ����λ��\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//ָ����ָ�������ָ��

//int main()
//{
//	int arr[10] = { 0 };	//����
//	//int * arr1[3]={&a,&b,&c};		//ָ������
//	int(*p)[10] = &arr;		//����ָ��
//	int (*pf)(int, int);	//����ָ��
//	int (*pfarr[4])(int, int);	//����ָ������
//	int(*(*ppfarr)[4])(int, int) = &pfarr;		//ppfarrָ����ָ�������ָ��
//	//ppfarr��һ������ָ�룬ָ����������ĸ�Ԫ�أ�ÿ��Ԫ�ص�����Ϊint(*)(int,int)
//	return 0;
//
//}

//�ص�������ʹ�á�
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void (*p)(char*))
//{
//	p("mark");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

