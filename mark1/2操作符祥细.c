#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));		//2�������Ƕ��ٷ�������Ͷ��������ʹ�С���
//	printf("%d\n", s);						//sizeof������������ݲ�����ʵ����
//	return 0;
//}

//int main()
//{
//	//int a = 9;
//	//a = a | (1<<2);				
//	//printf("%d\n", a);
//	//a = a & (~(1<<2));
//	//printf("%d\n", a);
//	
//	
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//1<<2;
//	//00000000000000000000000000000001
//
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001011
//
//
//	//int a = 0;
//	//~��λȡ��
//	//11111111111111111111111111111111		����
//	//11111111111111111111111111111110		����
//	//00000000000000000000000000000001		ԭ��
//	//printf("%d\n", ~a);	
//	return 0;
//}

//int main()
//{
//	int a= 9;
//	int b = 0;
//	scanf("%d", &b);
//	a = a | b;
//	a=a&(~b);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", ++a);		//ǰ��++:��++��ʹ�á������ͺ���++����ʹ�ú�++
//	printf("%d\n", a++);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;		//ǿ��ת��int��3
//	printf("%d", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//��ϵ����  > < >= <= == !=

//�߼�����  &&��   ||��

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	int d = a || b;
//	printf("%d   %d", c,d);
//	return 0;
//}



//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;			//Ϊ��ʱ������Ĳ������ˡ���ӡ��1234.
//	printf("%d  %d  %d  %d \n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;			//Ϊ��ʱ������Ĳ������ˡ���ӡ��2234.
//	printf("%d  %d  %d  %d \n", a, b, c, d);
//	return 0;
//}

//����������		exp1? exp2:exp3   ����exp1Ϊ�棬ִ�н��Ϊexp2,Ϊ�٣�ִ�н��Ϊexp3.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//	printf("%d\n", b);
//	b = (a > 5 ? 4 : 66);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);		//��Ŀ�����������ֵ��
//	printf("%d", max);
//}

