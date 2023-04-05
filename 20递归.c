#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//递归：自调，把大问题层层化小，到某一点返回的算法。
//stack overflow盏溢出。就是栈里面的内存空间被使用完了，而每次运形都需要申请一部分栈内存

//基本结构体
//int main()
//{
//	printf("递归");
//	main();
//	return 0;
//}

//pp(int n)
//{
//	if (n > 9)
//	{
//		int m = 0;
//		m = n / 10;
//		n = n % 10;
//		printf("%d", n);
//		pp(m);
//	}
//}

//void pp(int n)
//{
//	if (n > 9)
//	{
//		pp(n / 10);
//	}
//	printf("%d", n % 10);
//}

//void pp(int n)
//{
//	if (n < 9)
//	{
//		printf("%d",n);
//	}
//	else
//	{
//		printf("%d", n % 10);
//		pp(n / 10);
//	}
//	
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	pp(num);
//	return 0;
//}

//用递归求字符串长度

//#include<string.h>
//
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}



//返回字符串的长度，不可以有临时变量。
//int my_strlen(char* str)
//{
//	printf("%d\n", str);
//	if (*str != '\0')
//		return 1 + my_strlen(++str);	//str+1和++str可以。得不能是str++
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);	//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址。
//	printf("len=%d\n", len);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char str1[] = {0};
//	scanf("%s", str1);
//	printf("%s", str1);		//周围的栈被破坏
//	return 0;
//}

//int main()
//{
//	char arr[] = "asbfdsffdfdds";
//	scanf("%s", &arr);
//	printf("%s", arr);		//传递后栈被破坏。必需不大于原字符串的长度才不会溢出。
//	return 0;
//}

//求阶乘
//int jc(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * jc(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=jc(n);
//	printf("%d", ret);
//	return 0;
//}

//求斐波那契数列第n个数

//int fbnq(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fbnq(n - 1) + fbnq(n - 2);
//}
// 
//int fbnq(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n >= 3)
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	else
//	{
//		return 1;
//	}
//}

//int fbnq(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fbnq(n);
//	printf("%d", ret);
//	return 0;
//}

//汉诺塔

//void hrt(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c-->%c--%d\n", A, C, n);
//	else
//	{
//		hrt(n - 1, A, C, B);
//		printf("%c-->%c--%d\n", A, C, n);
//		hrt(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	char A = 'A';
//	char B = 'B';
//	char C = 'C';
//	scanf("%d", &n);
//	hrt(n, A, B, C);
//	return 0;
//}

//青蛙跳街有多少种方法

//int qwtj(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n ==2)
//	{
//		return 2;
//	}
//	else
//	{
//		return qwtj(n - 1) + qwtj(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=qwtj(n);
//	printf("%d街有%d种跳法", n, ret);
//	return 0;
//}