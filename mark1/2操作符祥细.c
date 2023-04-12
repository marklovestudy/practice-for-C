#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));		//2，不管是多少放入短整型都按短整型大小存放
//	printf("%d\n", s);						//sizeof（）里面的内容不会真实运算
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
//	//~按位取反
//	//11111111111111111111111111111111		补码
//	//11111111111111111111111111111110		反码
//	//00000000000000000000000000000001		原码
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
//	//printf("%d\n", ++a);		//前置++:先++再使用。。。和后置++：先使用后++
//	printf("%d\n", a++);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;		//强制转成int类3
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

//关系运算  > < >= <= == !=

//逻辑运算  &&与   ||或

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
//	i = a++ && ++b && d++;			//为假时，后面的不运行了。打印出1234.
//	printf("%d  %d  %d  %d \n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;			//为真时，后面的不运行了。打印出2234.
//	printf("%d  %d  %d  %d \n", a, b, c, d);
//	return 0;
//}

//条件操作符		exp1? exp2:exp3   条件exp1为真，执行结果为exp2,为假，执行结果为exp3.
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
//	max = (a > b ? a : b);		//三目操作符求最大值。
//	printf("%d", max);
//}

