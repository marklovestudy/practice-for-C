#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//求一个数被分成连续几个数之和
//void fun(int n)
//{
//	int i = 1, j, sum, k;
//	while (i <= n / 2)
//	{
//		sum = 0;
//		j = i;
//		while (sum<n)
//		{
//			sum += j;
//			j++;
//		}
//		if (sum == n)
//		{
//			printf("%d=", n);
//			for (k = i; k < j; k++)
//			{
//				printf("%d+", k);
//			}
//			printf("\n\n");
//		}
//		i++;
//	}
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}
//
//void fun(int  n)
//{
//	int  j, b, c, m, flag = 0;
//	for (b = 1; b <= n / 2; b++) {
//		/**********found**********/
//		m = n;
//		c = b;
//		while (m != 0 && m >= c) {
//			/**********found**********/
//			m = m - c;    c++;
//		}
//		/**********found**********/
//		if (m == 0)
//		{
//			printf("%d=", n);
//			for (j = b; j < c - 1; j++)   printf("%d+", j);
//			printf("%d\n", j);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		printf("不能分解\n");
//}
//main()
//{
//	int  n;
//	printf("请输入一个整数 :   ");   scanf("%d", &n);
//	fun(n);
//	getchar();
//}

//void fun(char* s1, char* s2, char* s3)
//{
//	int sz1 = strlen(s1);
//	int sz2 = strlen(s2);
//	int k, i, j;
//	i = j = k = 0;
//	while (i < sz1 || j < sz2)
//	{
//		if (i < sz1) s3[k++] = s1[i++];
//		if (j < sz2) s3[k++] = s2[j++];
//	}
//	s3[k] = 0;
//}
//int main()
//{
//	char s1[100], s2[100], s3[200];
//	gets(s1);
//	gets(s2);
//	fun(s1, s2, s3);
//	printf("%s", s3);
//	return 0;
//}
//

//奇数次调用。把所有字符改成大写。偶数调用逆序输出。 
//#pragma warning (disable:4996)
//void fun(char* s1, char* s2, char* s3)
//{
//	int i, j;
//	/**********************found***********************/
//	for (i = 0, j = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++, j = j + 2)
//	{
//		s3[j] = s1[i];
//		s3[j + 1] = s2[i];
//	}
//	if (s2[i] != '\0')
//	{
//		for (; s2[i] != '\0'; i++, j++)
//			/**********************found***********************/
//			s3[j] = s2[i];
//	}
//	else if (s1[i] != '\0')
//	{
//		for (; s1[i] != '\0'; i++, j++)
//			s3[j] = s1[i];
//	}
//	/**********************found***********************/
//	s3[j] = '\0';
//}
//void main()
//{
//	char s1[128], s2[128], s3[255];
//	printf("Please input string1:");
//	gets(s1);
//	printf("Please input string2:");
//	gets(s2);
//	fun(s1, s2, s3);
//	printf("string:%s\n", s3);
//}

//#include   <stdio.h>
//#include   <string.h>
//#include   <ctype.h>
//#pragma warning (disable:4996)
//void fun(char* s)
//{
//    int  i;
//    /**********************found***********************/
//    static  int  n = 1;
//    if (n++ % 2)
//        /**********************found***********************/
//        for (i = 0; i < strlen(s); i++)
//            printf("%c", islower(s[i]) ? toupper(s[i]) : s[i]);
//    else
//        /**********************found***********************/
//        for (i = strlen(s) - 1; i >= 0; i--)
//            printf("%c", s[i]);
//}
//main()
//{
//    int  i;
//    char s[] = "Hello, C Programmer";
//    for (i = 0; i < 5; i++) { fun(s);    printf("\n"); }
//}

//大写字符输出*，小字字符输出#，其它输入？
//int fun(char a)
//{
//	if (isupper(a)) return 1;
//	else if (islower(a)) return -1;
//	else return 0;
//}
//
//void a(char* s)
//{
//	int sz = strlen(s);
//	int i, re;
//	for (i = 0; i < sz; i++)
//	{
//		re = fun(s[i]);
//		if (re == 1) printf("*");
//		else if (re == -1) printf("#");
//		else if (re == 0) printf("?");
//	}
//}
//
//int main()
//{
//	char s[100];
//	gets(s);
//	a(s);
//	return 0;
//}
//
//int my_isalpha(char c)
//{
//	if (c >= 'A' && c <= 'Z') return 1;
//	else if (c >= 'a' && c <= 'z') return -1;
//	else  return 0;
//}
//void a()
//{
//	char ch;
//	int sort;
//	printf("本程序判断你从键盘上键入字符的种类,请输入字符（串）：\n");
//	do
//	{
//		ch = getchar();
//		if (ch != '\n')
//		{
//			sort = my_isalpha(ch);
//			/**********************found***********************/
//			switch (sort)
//			{
//			case 1: printf("%c", '*'); break;
//				/**********************found***********************/
//			case -1: printf("%c", '#'); break;
//			case 0: printf("%c", '?');
//			}
//		}
//		/**********************found***********************/
//	} while (ch != '\n');
//	printf("%c", '\n');
//}
//void main()
//{
//	a();
//}


//返回长整形数据中0和1的个数。
//void fun(long n,int *c0,int *c1)
//{
//	long m;
//	m = n;
//	*c0 = *c1 = 0;
//	while (m)
//	{
//		if (m % 10 == 0) (*c0)++;
//		if (m % 10 == 1) (*c1)++;
//		m /= 10;
//	}
//}
//
//int main()
//{
//	long n;  int c0, c1;
//	printf("input n:");
//	scanf("%ld", &n);
//	fun(n, &c0, &c1);
//	printf("c0=%d,c1=%d\n", c0, c1);
//}
//
//void fun(long n, int* c0, int* c1)
//{
//	int k;
//	/**********************found***********************/
//	*c0 = *c1 = 0;
//	do
//	{
//		/**********************found***********************/
//		k = n % 10;
//		if (k == 0) (*c0)++;
//		if (k == 1) (*c1)++;
//		/**********************found***********************/
//		n = n / 10;
//	} while (n);
//}
//main()
//{
//	long n;  int c0, c1;
//	printf("input n:");
//	scanf("%ld", &n);
//	fun(n, &c0, &c1);
//	printf("c0=%d,c1=%d\n", c0, c1);
//}
// 
// 把dt0数组中等于x的数据删除，返回元素的个数
//void fun(int* dt0, int* n0, int x)
//{
//	int i, a[10], j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (dt0[i] != x) a[j++] = dt0[i];
//	}
//	*n0 = j;
//	for (i = 0; i < j; i++) dt0[i] = a[i];
//}
//
//int main()
//{
//	int d[10] = { 2,5,6,7,2,4,5,2,2,6 }, n = 10, i;
//	fun(d, &n, 2);
//	for (i = 0; i < n; i++)
//		printf("%d ", d[i]);
//	printf("\n");
//}
//
//void fun(int* dt0, int* n0, int x)
//{
//	int i, j;
//	/**********************found***********************/
//	i = 0; j = 0;
//	do
//	{
//		/**********************found***********************/
//		if (dt0[i] != x)
//		{
//			dt0[j] = dt0[i];
//			j++;
//		}
//		i++;
//	} while (i < *n0);
//	/**********************found***********************/
//	*n0 = j;
//}
//main()
//{
//	int d[10] = { 2,5,6,7,2,4,5,2,2,6 }, n = 10, i;
//	fun(d, &n, 2);
//	for (i = 0; i < n; i++)
//		printf("%d ", d[i]);
//	printf("\n");
//}

//三位数各位数字的立方和等他本身，把这样的三位数存放在数组之中。
//int fun(int* a)
//{
//	int i, sz = 0, ge, shi, bai, k = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		ge = i % 10;
//		shi = i / 10 % 10;
//		bai = i / 100;
//		if (i == pow(ge, 3) + pow(shi, 3) + pow(bai, 3)) a[k++] = i;
//	}
//	return k;
//}
//
//int main()
//{
//	int a[100], i;
//	int sz = fun(a);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//
//int  cube(int  n) { return n * n * n; }
//int  fun(int* n)
//{
//	int  a, b, c, i, k = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		/*****************found*****************/
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		/*****************found*****************/
//		if (cube(a) + cube(b) + cube(c) == i)
//		{
//			n[k] = i; 	  k++;
//		}
//	}
//	/*****************found*****************/
//	return  k;
//}
//main()
//{
//	int  n[100], k, i;
//	k = fun(n);
//	for (i = 0; i < k; i++)printf("%d ", n[i]);
//	printf("\n");
//}

//输出奇数或偶数位上的数。如输入12345678,输出1357
//void fun(long s, long* t)
//{
//    long sl = 10;
//    s /= 10;
//    /**********found**********/
//    *t = s % 10;
//    while (s > 0) {
//        s = s / 100;
//        /**********found**********/
//        *t = s % 10 * sl + *t;
//        /**********found**********/
//        sl *= 10;
//    }
//}
//
//main()
//{
//    long s, t;
//    printf("\nPlease enter long number:");
//    scanf("%ld", &s); fun(s, &t);
//    printf("The result is: %ld\n", t);
//}
//

//输出字符串中大写和小写字符的个数
//void fun(char* str, int* c0, int* c1) {
//	int k;
//	/**********found**********/
//	*c0 = *c1 = 0;
//	/**********found**********/
//	for (k = 0; k < strlen(str); k++) {
//		/**********found**********/
//		if ((str[k] >= 'A') && (str[k] <= 'Z')) (*c0)++;
//		if ((str[k] >= 'a') && (str[k] <= 'z')) (*c1)++;
//	}
//}
//
//main()
//{
//	char str[100]; int c0, c1;
//	printf("input string:");
//	scanf("%s", str);
//	fun(str, &c0, &c1);
//	printf("c0=%d,c1=%d\n", c0, c1);
//}

//把s1正序，s2反序，得到一个s3的交叉字符串。
//void fun(char* s1, char* s2, char* s3)
//{
//	int i, j, k;
//	i = k = 0;
//	j = strlen(s2)-1;
//	while (i<strlen(s1) || j>=0)
//	{
//		if (i<strlen(s1)) s3[k++] = s1[i++];
//		if (j>=0) s3[k++] = s2[j--];
//	}
//	s3[k] = 0;
//}
//
//void main()
//{
//	char s1[128], s2[128], s3[255];
//	printf("Please input string1:");
//	gets(s1);
//	printf("Please input string2:");
//	gets(s2);
//	fun(s1, s2, s3);
//	printf("string %s\n", s3);
//}
//
//void fun(char* s1, char* s2, char* s3)
//{
//	int i, j, L2;
//	L2 = strlen(s2);
//	for (i = 0, j = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++, j = j + 2)
//	{
//		s3[j] = s1[i];
//		/***********found**********/
//		s3[j + 1] = s2[L2 - i - 1];
//	}
//	/***********found**********/
//	if (s1[i] != '\0')
//		for (; s1[i] != '\0'; i++, j += 1)
//			s3[j] = s1[i];
//	else if (s2[i] != '\0')
//		for (; s2[i] != '\0'; i++, j++)
//			s3[j] = s2[L2 - 1 - i];
//	/***********found**********/
//	s3[j] = '\0';
//}
//void main()
//{
//	char s1[128], s2[128], s3[255];
//	printf("Please input string1:");
//	gets(s1);
//	printf("Please input string2:");
//	gets(s2);
//	fun(s1, s2, s3);
//	printf("string %s\n", s3);
//}

