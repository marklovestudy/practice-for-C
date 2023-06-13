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