#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//把最大的字符放在字符串首位置
//void fun(char *s)
//{
//	int k=0,i=0;
//	char tem;
//	while (*(s+i))
//	{
//		if (*(s + i) > *(s + k))
//		{
//			k = i;
//		}
//		i++;
//	}
//	tem = *(s + k);
//	for (i = k - 1; i >= 0; i--)
//	{
//		*(s + i + 1) = *(s + i);
//	}
//	*s = tem;
//}
//
//int main()
//{
//	char s[100];
//	gets(s);
//	fun(s);
//	printf("%s\n", s);
//	return 0;
//}

//void fun(char* p)
//{
//    char   max, * q;   int   i = 0;
//    max = p[i];
//    q = p;
//    while (p[i] != 0)
//    {
//        if (max < p[i])
//        {
//            max = p[i];
//            /**********found**********/
//            q = p + i;
//        }
//        i++;
//    }
//    /**********found**********/
//    while (q > p)
//    {
//        *q = *(q - 1);
//        q--;
//    }
//    p[0] = max;
//}
//main()
//{
//    char   str[80];
//    printf("Enter a string:  "); gets(str);
//    printf("\nThe original string:      ");  puts(str);
//    fun(str);
//    printf("\nThe string after moving:  ");  puts(str); printf("\n\n");
//    getchar();
//}

//把b字符串逆顺排列，把a字符串和b字符组合放入c中，如a="abcdef",b="1234",c="a4b3c2d1ef"
//void reverse(char* b)
//{
//	char tem;
//	int l, r;
//	l = 0;
//	r = strlen(b) - 1;
//	for (; l < r; l++, r--)
//	{
//		tem = b[l];
//		b[l] = b[r];
//		b[r] = tem;
//	}
//}
//
//void fun(char* a, char* b, char* c)
//{
//	reverse(b);
//	int i, j, k;
//	i=j=k=0;
//	while (*(a+i) || *(b+j))
//	{
//		if (*(a + i)) c[k++] = a[i++];
//		if (*(b + j)) c[k++] = b[j++];
//	}
//	c[k] = 0;
//}
//
//int main()
//{
//	char a[100], b[100], c[200];
//	gets(a);
//	gets(b);
//	fun(a, b, c);
//	printf("%s\n", c);
//	return 0;
//}

//void fun(char* s1, char* s2)
//{
//	int i, j;
//	i = j = 0;
//	while (s1[i])
//	{
//		if ((j + 1) % 4 == 0)
//		{
//			s2[j++] = ' ';
//		}
//		else
//		{
//			s2[j++] = s1[i++];
//		}
//	}
//	s2[j] = 0;
//}
//
//int main()
//{
//	char s1[100], s2[135];
//	gets(s1);
//	fun(s1, s2);
//	printf("%s\n", s2);
//	return 0;
//}


// 求最小公倍数
//int fun(int a, int b, int c)
//{
//	for (int i = a;; i += a)
//	{
//		if (i % a == 0 && i % b == 0 && i % c == 0)
//		{
//			return i;
//		}
//	}
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int ans=fun(a, b, c);
//	printf("%d", ans);
//	return 0;
//}
//
//int fun(int  x, int y, int z)
//{
//	int  j, t, n, m;
//	j = 1;
//	t = j % x;
//	m = j % y;
//	n = j % z;
//	while (t != 0 || m != 0 || n != 0)
//	{
//		j = j + 1;
//		t = j % x;
//		m = j % y;
//		n = j % z;
//	}
//	/************found************/
//	return j;
//}
//main()
//{
//	int   x1, x2, x3, j;
//	printf("Input x1  x2  x3:  ");  scanf("%d%d%d", &x1, &x2, &x3);
//	printf("x1=%d, x2=%d, x3=%d \n", x1, x2, x3);
//	j = fun(x1, x2, x3);
//	printf("The minimal common multiple is : %d\n", j);
//	getchar();
//}

//把8进制字符串数字，转换为10进制数字

//int fun(char* s)
//{
//	int oi=atoi(s);
//	int re = 0,i=1,tem,n=1;
//	while (oi)
//	{
//		tem = (oi % 10) * pow(8, n - 1);
//		re += tem;
//		i *= 10;
//		oi /= 10;
//		n++;
//	}
//	return re;
//}
//
//int main()
//{
//	char s[100];
//	gets(s);
//	int ans=fun(s);
//	printf("%s转换为int:%d", s, ans);
//	return 0;
//}

//int  fun(char* p)
//{
//    int   n;
//    /**********found**********/
//    n = *p - '0';
//    p++;
//    while (*p != 0) {
//        /**********found**********/
//        n = n * 8 + *p - '0';
//        p++;
//    }
//    return  n;
//}
//main()
//{
//    char   s[6];     int  i;   int   n;
//    printf("Enter a string (Ocatal digits):  "); gets(s);
//    if (strlen(s) > 5) { printf("Error: String too longer !\n\n"); exit(0); }
//    for (i = 0; s[i]; i++)
//        if (s[i] < '0' || s[i]>'7')
//        {
//            printf("Error: %c not is ocatal digits!\n\n", s[i]); exit(0);
//        }
//    printf("The original string:  "); puts(s);
//    n = fun(s);
//    printf("\n%s is convered to integer number: %d\n\n", s, n);
//    getchar();
//}

//int fun(n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return fun(n - 1) * n;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int re = fun(n);
//	printf("%d", re);
//	return 0;
//}

//void fun(int a[9][9], int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			a[i - 1][j - 1] = i * j;
//		}
//	}
//}
//
//int main()
//{
//	int i, j, m, a[9][9];
//	scanf("%d", &m);
//	fun(a,m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <conio.h>
//#include <stdio.h>
//#define  M 10
//int  a[M][M] = { 0 };
//
///**************found**************/
//void fun(int a[M][M], int m)
//{
//    int j, k;
//    for (j = 0; j < m; j++)
//        for (k = 0; k < m; k++)
//            /**************found**************/
//            a[j][k] = (k + 1) * (j + 1);
//}
//
//main()
//{
//    int  i, j, n;
//
//    printf(" Enter n : ");  scanf("%d", &n);
//    fun(a, n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("%4d", a[i][j]);
//        printf("\n");
//    }
//    getchar();
//}

//求最长字符。
//char* fun(char(* s)[10])
//{
//	int i,k=0;
//	int sz = strlen(s[0]);
//	for (i = 1; i < 10; i++)
//	{
//		if (sz < strlen(s[i]))
//		{
//			k = i;
//			sz = strlen(s[i]);
//		}
//	}
//	return &s[k];
//}
//
//int main()
//{
//	char s[10][10];
//	int i;
//	for (i = 0; i < 10; i++) scanf("%s", s[i]);
//	char* pstr = fun(s);
//	puts(pstr);
//	return 0;
//}


//s *= ((2 * i) * (2 * i)) / ((2 * i - 1) * (2 * i + 1));求积
//double fun(int k)
//{
//	double s = 1.0;
//	double i;
//	for (i = 1; i <= k; i++)
//	{
//		s *= ((2 * i) * (2 * i)) / ((2 * i - 1) * (2 * i + 1));
//	}
//	return s;
//}
//
//int main()
//{
//	double s=fun(10);
//	printf("%lf", s);
//	return 0;
//}

//double fun(int  k)
//{
//    int n; double s, w, p, q;
//    n = 1;
//    s = 1.0;
//    /************found************/
//    while (n <= k)
//    {
//        w = 2.0 * n;
//        p = w - 1.0;
//        q = w + 1.0;
//        s = s * w * w / p / q;
//        n++;
//    }
//    /************found************/
//    return  s;
//}
//
//main()
//{
//    printf("%f\n", fun(10));
//    getchar();
//}


//递归求迭代平方根   x1=(x0+1/x0)/2    x0=1;
//double fun(int a)
//{
//	double x1, x0;
//	x0 = (1 + a) / 2;
//	x1 = (x0 + a / x0) / 2;
//	while (fabs(x1-x0)>1e-10)
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	}
//	return x1;
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	double re = fun(a);
//	printf("%lf", re);
//	return 0;
//}
//
//double fun(double a, double x0)
//{
//	double   x1, y;
//	x1 = (x0 + a / x0) / 2.0;
//	/**********found**********/
//	if (fabs(x1 - x0) > 0.00001)
//		y = fun(a, x1);
//	else  y = x1;
//	return  y;
//}
//main()
//{
//	double  x;
//	printf("Enter x: "); scanf("%lf", &x);
//	printf("The square root of %lf is %lf\n", x, fun(x, 1.0));
//	getchar();
//}


