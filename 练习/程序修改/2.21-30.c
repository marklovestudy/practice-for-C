#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//
//把一个偶数分成二个素数相加
//void fun(int n, int* x, int* y)
//{
//	int i, j, s[100], zs, k = 2;
//	s[0] = 1;
//	s[1] = 2;
//	for (i = 3; i < n; i++)
//	{
//		zs = 1;
//		for (j = 2; j < i; j++)
//			if (i % j == 0)
//			{
//				zs = 0;
//				break;
//			}		//zs=0代表i合数否则代表质数。
//		if (zs == 1)
//		{
//			s[k++] = i;
//		}
//	}
//	for (i=0;i<k;i++)
//		for (j = 0; j < k; j++)
//		{
//			if (s[i] + s[j] == n)
//			{
//				*x = s[i];
//				*y = s[j];
//			}
//		}
//}

//int main()
//{
//	int n,x,y;
//	scanf("%d", &n);
//	fun(n, &x, &y);
//	printf("%d=%d+%d", n, x, y);
//	return 0;
//}

//void  fun(int  a, int* b, int* c)
//{
//	int  i, j, d, y;
//	for (i = 3; i <= a / 2; i = i + 2) {
//		/**************found**************/
//		y = 1;
//		for (j = 2; j <= sqrt((double)i); j++)
//			if (i % j == 0)  y = 0;
//		if (y == 1) {
//			/**************found**************/
//			d = a - i;
//			for (j = 2; j <= sqrt((double)d); j++)
//				if (d % j == 0)  y = 0;
//			if (y == 1)
//			{
//				*b = i;  *c = d;  return;
//			}
//		}
//	}
//}
//main()
//{
//	int  a, b, c;
//	do
//	{
//		printf("\nInput a:  ");  scanf("%d", &a);
//	} while (a % 2);
//	fun(a, &b, &c);
//	printf("\n\n%d = %d + %d\n", a, b, c);
//}


//判断三角形的类型
//int fun(int a, int b, int c)
//{
//	if (a + b > c && abs(a - b) < c)
//	{
//		if (a == b && b == c)
//		{
//			return 3;
//		}
//		else if (a==b || b==c || a==c)
//		{
//			return 2;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int re = fun(a, b, c);
//	printf("他是一个这样的三角形：%d", re);
//	return 0;
//}

//#pragma warning (disable:4996)
///**************found**************/
//int fun(int  a, int  b, int  c)
//{
//    if (a + b > c && b + c > a && a + c > b) {
//        if (a == b && b == c)
//            return  3;
//        else if (a == b || b == c || a == c)
//            return  2;
//        /**************found**************/
//        else  return  1;
//    }
//    else  return  0;
//}
//main()
//{
//    int  a, b, c, shape;
//    printf("\nInput a,b,c:  ");  scanf("%d%d%d", &a, &b, &c);
//    printf("\na=%d,  b=%d,  c=%d\n", a, b, c);
//    shape = fun(a, b, c);
//    printf("\n\nThe shape  :  %d\n", shape);
//}

//把a-u后推5，把v-z前推21

//void fun(char* c)
//{
//	if ('A' <= *c && *c <= 'Z')
//	{
//		*c = *c - 'A' + 'a';
//	}
//	if ('a' <= *c && *c <= 'u') *c = *c + 5;
//	else if ('v' <= *c && *c <= 'z') *c = *c - 21;
//}
//
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	fun(&ch);
//	printf("%c", ch);
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//#pragma warning (disable:4996)
//char  fun(char c)
//{
//    if (c >= 'A' && c <= 'Z')
//        /**************found**************/
//        c = c + 32;
//    if (c >= 'a' && c <= 'u')
//        /**************found**************/
//        c = c + 5;
//    else if (c >= 'v' && c <= 'z')
//        c = c - 21;
//    return  c;
//}
//main()
//{
//    char  c1, c2;
//    printf("\nEnter a letter(A-Z):  "); c1 = getchar();
//    if (isupper(c1))
//    {
//        c2 = fun(c1);
//        printf("\n\nThe letter \'%c\' change to \'%c\'\n", c1, c2);
//    }
//    else  printf("\nEnter (A-Z)!\n");
//}

//求对角线元素之和
//void fun()
//{
//    int a[3][3], sum;
//    int i, j;
//    /*********found**********/
//    sum = 0;
//    printf("Input data:");
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//            /*********found**********/
//            scanf("%d", &a[i][j]);
//    }
//    for (i = 0; i < 3; i++)
//        sum = sum + a[i][i];
//    printf("Sum=%d\n", sum);
//}
//
//main()
//{
//    fun();
//    getchar();
//}

//void fun(char* s, char *t)
//{
//	int i=0,j=0;
//	while (*(s+i))
//	{
//		if (*(s + i) % 2 == 0 || i % 2 == 0)
//		{
//			t[j++] = *(s + i);
//		}
//		i++;
//	}
//	t[j] = 0;
//}
//
//int main()
//{
//	char s[100], t[100];
//	gets(s);
//	fun(s, t);
//	printf("%s", t);
//	return 0;
//}

//#define   N     80
//void fun(char* s, char t[])
//{
//    int  i, j = 0;
//    for (i = 0; i < (int)strlen(s); i++)
//        /***********found**********/
//        if (i % 2 || s[i] % 2 == 0)
//            t[j++] = s[i];
//    /***********found**********/
//    t[j] = '\0';
//}
//main()
//{
//    char  s[N], t[N];
//    printf("\nPlease enter string s : "); gets(s);
//    fun(s, t);
//    printf("\nThe result is : %s\n", t);
//    getchar();
//}

//把字符从小到大排列
//#include <stdio.h>
//#include <string.h>
//#define    N   80
//void  insert(char* aa)
//{
//    int  i, j, n;     char  ch;
//    /**********found**********/
//    n = strlen(aa);
//    for (i = 1; i < n; i++) {
//        /**********found**********/
//        ch = aa[i];
//        j = i - 1;
//        while ((j >= 0) && (ch < aa[j]))
//        {
//            aa[j + 1] = aa[j];
//            j--;
//        }
//        aa[j + 1] = ch;
//    }
//}
//main()
//{
//    char  a[N] = "QWERTYUIOPASDFGHJKLMNBVCXZ";
//    printf("The original string :       %s\n", a);
//    insert(a);
//    printf("The string after sorting :  %s\n\n", a);
//    getchar();
//}

//int fun(int n)
//{
//	int i = 10,k=n,sum=0;
//	while (i)
//	{
//		if (n % 13 == 0 || n % 17 == 0) 
//		{ 
//			sum += n;
//			i--;
//		}
//		n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int sum=fun(k);
//	printf("%d", sum);
//	return 0;
//}

//int fun(int  k)
//{
//    int m = 0, mc = 0;
//    while ((k >= 2) && (mc < 10))
//    {
//        /************found************/
//        if ((k % 13 == 0) || (k % 17 == 0))
//        {
//            m = m + k;  mc++;
//        }
//        /************found************/
//        k--;
//    }
//    return m;
//    /************found************/
//}
//
//main()
//{
//    printf("%d\n", fun(500));
//    getchar();
//}

//int fun(int n)
//{
//	int k=n,i,b;
//	do
//	{
//		k++;
//		b = 1;
//		for (i=2;i<=sqrt(k);i++)
//		{
//			if (k % i != 0)
//			{
//				b = 0;
//			}
//			else
//			{
//				break;
//			}
//		}
//	} while (b);
//	return k;
//}
//
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int n=fun(k);
//	printf("%d", n);
//	return 0;
//}

//int fun(int m)
//{
//    int i, k;
//    for (i = m + 1; ; i++) {
//        for (k = 2; k < i; k++)
//            /**************found**************/
//            if (i % k == 0)
//                break;
//        /**************found**************/
//        if (k == i)
//            return(i);
//    }
//}
//
//void main()
//{
//    int n;
//    n = fun(20);
//    printf("n=%d\n", n);
//    getchar();
//}
//
//int fun(int n)
//{
//	int k=n,i,b;
//	do
//	{
//		k++;
//		b = 1;
//		for (i=2;i<=sqrt(k)+1;i++)
//		{
//			if (k % i == 0)
//			{
//				b = 1;
//				break;
//			}
//			b = 0;
//		}
//	} while (b);
//	return k;
//}
//
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int n=fun(k);
//	printf("%d", n);
//	return 0;
//}

//计算1-1/(2*2)-1/(3*3)-...-1/(m*m)
//double fun(int m)
//{
//    double   y = 1.0;
//    int  i;
//    /**************found**************/
//    for (i = 2; i <= m; i++)
//        /**************found**************/
//        y -= 1.0 / (i * i);
//    return(y);
//}
//
//main()
//{
//    int n = 5;
//
//    printf("\nThe result is %lf\n", fun(n));
//    getchar();
//}

//统计元音个数
//void fun(char* s, int   num[5])
//{
//    int  k, i = 5;
//    for (k = 0; k < i; k++)
//        /**********found**********/
//        num[k] = 0;
//    for (; *s; s++)
//    {
//        i = -1;
//        /**********found**********/
//        switch (*s)
//        {
//        case 'a': case 'A': {i = 0; break; }
//        case 'e': case 'E': {i = 1; break; }
//        case 'i': case 'I': {i = 2; break; }
//        case 'o': case 'O': {i = 3; break; }
//        case 'u': case 'U': {i = 4; break; }
//        }
//        if (i >= 0)
//            num[i]++;
//    }
//}
//
//main()
//{
//    char  s1[81];    int  num1[5], i;
//    printf("\nPlease enter a string: ");  gets(s1);
//    fun(s1, num1);
//    for (i = 0; i < 5; i++) printf("%d ", num1[i]); printf("\n");
//    getchar();
//}
