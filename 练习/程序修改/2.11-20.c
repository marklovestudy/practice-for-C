#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//输入一个数，把数中的奇数取出，如输入：12345，输出：135  
//void fun(long n1,long *t)
//{
//	long tem = n1;
//	long i = 1;
//	while (tem)
//	{
//		if (tem % 2 == 1)
//		{
//			*t = tem % 10 * i + *t;
//			i *= 10;
//		}
//		tem /= 10;
//	}
//}
//
//int main()
//{
//	long a, t = 0;
//	printf("input a number");
//	scanf("%ld", &a);
//	fun(a, &t);
//	printf("%ld ... %ld", a, t);
//	return 0;
//}
//
//#include <stdio.h>
//
//void fun(long  s, long* t)
//{
//	int   d;
//	long  sl = 1;
//	/************found************/
//	*t = 0;
//	while (s > 0)
//	{
//		d = s % 10;
//		/************found************/
//		if (d % 2 == 1)
//		{
//			*t = d * sl + *t;
//			sl *= 10;
//		}
//		s /= 10;
//	}
//}
//main()
//{
//	long s, t;
//	printf("\nPlease enter s:"); scanf("%ld", &s);
//	fun(s, &t);
//	printf("The result is: %ld\n", t);
//	getchar();
//}

//连接一个字符串正反序，如输入：abcd   输出：abcddcba
//void fun(char* s, char* t)
//{
//	int i, j = 0;
//	for (i = 0; *(s + i); i++)
//		*(t + j++) = *(s + i);
//	for (i--;i>=0; i--)
//		*(t + j++) = *(s + i);
//	*(t + j) = 0;
//}
//
//int main()
//{
//	char s[100], t[100];
//	gets(s);
//	puts(s);
//	fun(s, t);
//	puts(t);
//	return 0;
//}

//void fun(char* s, char* t)
//{
//	int   i, d;
//	d = strlen(s);
//	for (i = 0; i < d; i++)  t[i] = s[i];
//	for (i = 0; i < d; i++)  t[d + i] = s[d - 1 - i];
//	/************found************/
//	t[2 * d - 1] = '\0';
//}
//
//main()
//{
//	char   s[100], t[100];
//	printf("\nPlease enter string S:"); scanf("%s", s);
//	fun(s, t);
//	printf("\nThe result is: %s\n", t);
//	getchar();
//}

//void fun(char* s, char* t)
//{
//	int   i, d;
//	d = strlen(s);
//	for (i = 0; i < d; i++)  t[i] = s[i];
//	for (i = 0; i < d; i++)  t[d + i] = s[d - 1 - i];
//	/************found************/
//	t[2 * d] = '\0';
//}
//
//main()
//{
//	char   s[100], t[100];
//	printf("\nPlease enter string S:"); scanf("%s", s);
//	fun(s, t);
//	printf("\nThe result is: %s\n", t);
//	getchar();
//}
//void fun(char* s, char* t1, char* t2)
//{
//	int sz = strlen(s);
//	int sz1 = strlen(t1);
//	int i, j, k = 0, b = -1;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		for (j = 0; j < sz1; j++)
//		{
//			if (t1[j] == s[i - sz1 + 1 + j])
//			{
//				b = 1;
//			}
//			else
//			{
//				b = -1;
//			}
//		}
//		if (b == 1)
//		{
//			k = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz1; i++)
//	{
//		s[k - sz1 + 1 + i] = t2[i];
//	}
//}
//
//int main()
//{
//	char s[100], t1[100], t2[100];
//	gets(s);
//	gets(t1);
//	gets(t2);
//	fun(s, t1, t2);
//	puts(s);
//	printf("更改后：%s\n", s);
//	return 0;
//}

//void fun(char* s, char* t1, char* t2, char* w)
//{
//    char* p, * r, * a = s;
//    strcpy(w, s);
//    /************found************/
//    while (*w)
//    {
//        p = w;   r = t1;
//        while (*r)
//            /************found************/
//            if (*r == *p)
//            {
//                r++;  p++;
//            }
//            else  break;
//        if (*r == '\0') a = w;          //a会是最后一个匹配的字符串的首元素地址。
//        w++;
//    }
//    r = t2;
//    while (*r) { *a = *r; a++; r++; }
//}
//
//main()
//{
//    char   s[100], t1[100], t2[100], w[100];
//
//    printf("\nPlease enter string S:"); scanf("%s", s);
//    printf("\nPlease enter substring t1:"); scanf("%s", t1);
//    printf("\nPlease enter substring t2:"); scanf("%s", t2);
//    if (strlen(t1) == strlen(t2))
//    {
//        fun(s, t1, t2, w);
//        printf("\nThe result is :  %s\n", w);
//    }
//    else  printf("\nError : strlen(t1) != strlen(t2)\n");
//    getchar();
//}

//void fun(char* s, char* t1, char* t2, char* w)
//{
//    char* p, * r, * a = s;
//    strcpy(w, s);
//    while (*w)
//    {
//        p = w;
//        r = t1;
//        while (*r)
//        {
//            if(*r==*p)
//            {
//                r++;
//                p++;
//            }
//            else
//            {
//                break;
//            }
//            if (*r == '\0') a = w;
//        }
//        w++;
//    }
//    while (*t2)
//    {
//        *a = *t2;
//        a++;
//        t2++;
//    }
//}
//
//int main()
//{
//    char   s[100], t1[100], t2[100], w[100];
//
//    printf("\nPlease enter string S:"); scanf("%s", s);
//    printf("\nPlease enter substring t1:"); scanf("%s", t1);
//    printf("\nPlease enter substring t2:"); scanf("%s", t2);
//    if (strlen(t1) == strlen(t2))
//    {
//        fun(s, t1, t2, w);
//        printf("\nThe result is :  %s\n", w);
//    }
//    else  printf("\nError : strlen(t1) != strlen(t2)\n");
//    getchar();
//    return 0;
//}

//找出一个三位数
//#include<stdio.h>
//void fun(int* s, int n)
//{
//	int i, j = 0;
//	for (i = 100; i <= n; i++)
//	{
//		if (i % 10 == i / 10 % 10 && i % 10 == i / 100)
//			s[j++] = i;
//	}
//}
//
//int main()
//{
//	int n, s[100] = { 0 }, i = 0;
//	scanf("%d", &n);
//	fun(s, n);
//	while (s[i])
//	{
//		printf("%d ", s[i]);
//		i++;
//	}
//	return 0;
//}

//#define    N    100
//int  fun(int* s, int  n)
//{
//    int  i, j, k, a, b, c;
//    j = 0;
//    for (i = 100; i < n; i++) {
//        /**************found**************/
//        k = i;
//        a = k % 10;  k /= 10;
//        b = k % 10;  k /= 10;
//        /**************found**************/
//        c = k % 10;
//        if (a == b && a == c) s[j++] = i;
//    }
//    return  j;
//}
//main()
//{
//    int  a[N], n, num = 0, i;
//    do
//    {
//        printf("\nEnter n( <=1000 ) :  ");  scanf("%d", &n);
//    } while (n > 1000);
//    num = fun(a, n);
//    printf("\n\nThe result :\n");
//    for (i = 0; i < num; i++)printf("%5d", a[i]);
//    printf("\n\n");
//}

//求一个数的5次方，及个十百位上的数字之和，如7，16807，15
#pragma warning (disable:4996)
//int  fun(int  n, int* value)
//{
//    int  d, s, i;
//    /**************found**************/
//    d = 1;  s = 0;
//    for (i = 1; i <= 5; i++)  d = d * n;
//    *value = d;
//    for (i = 1; i <= 3; i++)
//    {
//        s = s + d % 10;
//        /**************found**************/
//        d = d / 10;
//    }
//    return  s;
//}
//main()
//{
//    int  n, sum, v;
//    do
//    {
//        printf("\nEnter n( 2<n<8):  "); scanf("%d", &n);
//    } while (n <= 2 || n >= 8);
//    sum = fun(n, &v);
//    printf("\n\nThe result:\n  value=%d  sum=%d\n\n", v, sum);
//}

//求累加和，如n=20项，第一项是3，8，13。。。98.共20项，每项相差5.
//把从第一项到20项的累加和写入数组中。把除以4余2的数加入到另一个数组中。

//void creatlist(int* s, int* t, int n)
//{
//	int i;
//	t[0] = 3;
//	s[0] = 3;
//	for (i = 1; i < n; i++)
//	{
//		s[i] = i * 5 + 3;
//		t[i] = t[i - 1] + s[i];
//	}
//}
//
//int main()
//{
//	int i = 0, j = 0, n, s[100] = { 0 }, t[100] = { 0 }, m[100] = { 0 };
//	scanf("%d", &n);
//	creatlist(s,t,n);
//	while (t[i])
//	{
//		if (t[i] % 4 == 2)
//			m[j++] = t[i];
//		i++;
//	}
//	i = 0;
//	while (s[i])
//	{
//		printf("%d ", s[i++]);
//	}
//	printf("\n\n");
//	i = 0;
//	while (s[i])
//	{
//		printf("%d ", t[i++]);
//	}
//	printf("\n\n");
//	j = 0;
//	while (m[j])
//	{
//		printf("%d ", m[j]);
//		j++;
//	}
//	return 0;
//}

//求一个无符号整数各位上的0的个数，和最大数字。

//void fun(unsigned int n)
//{
//	int i, max;
//	i = max = 0;
//	while (n)
//	{
//		if (n % 10 == 0) i++;
//		if (n % 10 > max) max = n % 10;
//		n /= 10;
//	}
//	printf("一共有%d个0\n\n", i);
//	printf("各位上数字最大的数字是：%d\n\n", max);
//}
//
//int main()
//{
//	unsigned int n;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}

//int  fun(unsigned  n, int* zero)
//{
//    int  count = 0, max = 0, t;
//    do
//    {
//        t = n % 10;
//        /**************found**************/
//        if (t == 0)
//            count++;
//        if (max < t)  max = t;
//        n = n / 10;
//    } while (n);
//    /**************found**************/
//    *zero = count;
//    return  max;
//}
//main()
//{
//    unsigned  n;    int  zero, max;
//    printf("\nInput n(unsigned):  ");  scanf("%d", &n);
//    max = fun(n, &zero);
//    printf("\nThe result:  max=%d    zero=%d\n", max, zero);
//}

//把方阵最后一位调到最前，其它后移一位的方式输出

//void creatlist(int* s, int n)
//{
//	int i,x;
//	for (i = 0; i < n; i++) scanf("%d", &s[i]);
//}
//
//void fun(int* s, int n)
//{
//	int i,j,k;
//	for (i = n - 1; i >= 0; i--)
//	{
//		for (j = i, k = 0; k < n; k++)
//		{
//			printf("%d ",s[(j + k) % n]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int s[100] = { 0 }, n;
//	scanf("%d", &n);
//	creatlist(s, n);
//	fun(s, n);
//	return 0;
//}

//#define    M    4
///**************found**************/
//void fun(int* a)
//{
//    int  i, j, k, m;
//    printf("Enter 4 number :  ");
//    for (i = 0; i < M; i++)  scanf("%d", &a[i]);
//    printf("\n\nThe result  :\n\n");
//    for (i = M; i > 0; i--)
//    {
//        k = a[M - 1];
//        for (j = M - 1; j > 0; j--)
//            /**************found**************/
//            a[j] = a[j - 1];
//        a[0] = k;
//        for (m = 0; m < M; m++)  printf("%d  ", a[m]);
//        printf("\n");
//    }
//    getchar();
//}
//main()
//{
//    int  a[M];
//    fun(a); printf("\n\n");
//    getchar();
//}

//求红白黑球的组合数，红3，白5，黑6，中选8个，必须要有红白球。
//int main()
//{
//	int i, j, k,c=0;
//	for (i=1;i<=3;i++)
//		for (j=1;j<=5;j++)
//			for (k = 0; k <= 6; k++)
//			{
//				if (i + j + k == 8) 
//				{ 
//					c++;
//					printf("第%d组：红=%d  ，白=%d  ，黑=%d  。\n", c, i, j, k);
//				}
//			}
//	return 0;
//}
//
//int  fun()
//{
//	int  i, j, k, sum = 0;
//	printf("\nThe result  :\n\n");
//	/**************found**************/
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			k = 8 - i - j;
//			/**************found**************/
//			if (k >= 0 && k <= 6)
//			{
//				sum = sum + 1;
//				printf("red:%4d white:%4d black:%4d\n", i, j, k);
//			}
//		}
//	}
//	return  sum;
//}
//main()
//{
//	int  sum;
//	sum = fun();
//	printf("sum =%4d\n\n", sum);
//	getchar();
//}


//求x的y次方的后三位的值。如5的6次方：15625，低3位为：625

int fun(int x,int y)
{
	int s = pow(x, y);
	return s % 1000;
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int re=fun(x, y);
	printf("%d", re);
	return 0;
}