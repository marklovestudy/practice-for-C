#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//struct MyStruct
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//����  MyStruct�ṹ���һ������
//	struct MyStruct aa = { "mark",30,"20040914323" };
//	/*printf("%s\n", aa.name);
//	printf("%d\n", aa.age);
//	printf("%s\n", aa.id);*/
//	struct MyStruct* ps = &aa;
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//
//	//ָ��ָ���������
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	return 0;
//}

//��ʽ����ת��

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	//00000011
//	//01111111
//	//10000010
//	//����ת������λ������λ
//	//0000000000000000000000000000011
//	//0000000000000000000000001111111
//	//0000000000000000000000010000010
//	//
//	//10000010����ת������λ������λ   ��������
//	//1111111111111111111111110000010		����
//	//1111111111111111111111110000001		����
//	//1000000000000000000000001111110		ԭ��-126
//	printf("%d\n", c);
//	return 0;
//}

//��������+c
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%d", sizeof(c));
//	printf("%d", sizeof(+c));		//��������   ��������λ��32
//	printf("%d", sizeof(!c));
//	return 0;
//}

//����ת��
//int main()
//{
//	float a = 3.14;
//	int b = a;
//	printf("%d", b);
//	return 0;
//}

//���ӱ��ʽ��ֵ������Ӱ�����ء�
//1.�����������ȼ�
//2.�������Ľ����
//3.�Ƿ������ֵ˳��

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//	printf("%d", c);
//	return 0;
//}

//�Ƿ����ʽ1��2
//a*b+c*d+e*f    ������ʽ�����ȼ�����ȷ����Ϊa,b,c,d,e,f�����Ǳ��ʽ����һ���Ǳ�����
//c + --c	ͬ�ϣ������������ȼ�ֻ�ܾ����Լ�-��������+������ǰ�棬�������ǲ�û�а취��֪��
//			+����������������Ļ�ȡ���Ҳ�����֮ǰ����֮����ֵ�����Խ���ǲ���Ԥ��ģ���������ġ�


//int main()
//{
//	int a = 2;
//	int b = a + --a;	//�ȼ���a=1    1+1=2
//	printf("%d", b);
//	return 0;
//}

//�Ƿ����ʽ3
//i=i-- - --i*(i=-3)*i++ + ++i;ÿ���������Ľ����һ����

//�Ƿ����ʽ4
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	return 0;
//}

//�Ƿ����ʽ5
int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d", a);
	return 0;

}

//���ʽ��Ҫ��Ψһ˳����ʽ����ȻΪ�Ƿ����ʽ��