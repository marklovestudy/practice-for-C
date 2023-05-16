#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//
//char* fun(char *strp)
//{
//	int sz = strlen(strp);
//	int i;
//	int ci = 0,ii = 0;
//	char* pc,* pi;
//	pc = (char*)malloc((sz+1) * sizeof(char));
//	pi = (char*)malloc((sz + 1) * sizeof(char));	//malloc分配内存空间，在stdlib.h头文件中。
//	for (i = 0; i < sz; i++)
//	{
//		if (('a' <= strp[i] && strp[i] <= 'z') || ('a' <= strp[i] && strp[i] <= 'z'))
//		{
//			pc[ci] = strp[i];
//			ci++;
//		}
//		else
//		{
//			pi[ii] = strp[i];
//			ii++;
//		}
//	}
//	for (i = 0; i < ii; i++)
//	{
//		pc[ci + i] = pi[i];
//	}
//	pc[ci + ii] = 0;
//	return pc;
//}
//
//int main()
//{
//	char s[80];
//	printf("请输入一个字符串：  \n");
//	scanf("%s", s);
//	char *re=fun(s);
//	printf("%s", re);
//	return 0;


//char* fun(char *strp)
//{
//	int sz = strlen(strp);
//	int i;
//	int ci = 0,ii = 0;
//	char* pc,* pi;
//	pc = (char*)malloc((sz+1) * sizeof(char));
//	pi = (char*)malloc((sz + 1) * sizeof(char));	//malloc分配内存空间，在stdlib.h头文件中。
//	for (i = 0; i < sz; i++)
//	{
//		while ('0' <= strp[i] && strp[i] <= '9')			//这是一个死循环。
//		{
//			char tem = strp[i];
//			int j = i;
//			for (j = i; j < sz-1; j++)
//			{
//				strp[j] = strp[j + 1];
//			}
//			strp[sz - 1] = tem;
//		}
//	}
//	return strp;
//}
//
//int main()
//{
//	char s[80];
//	printf("请输入一个字符串：  \n");
//	scanf("%s", s);
//	char *re=fun(s);
//	printf("%s", re);
//	return 0;
//}

#define N 10

//void fun(double x[], int y)
//{
//	double sum = 0;
//	int i;
//	double v;
//	for (i = 0; i < N; i++)
//	{
//		sum += x[i];
//	}
//	v = sum / N;
//	printf("%12.6f\n", v);
//	for (i = 0; i < N; i++)
//	{
//		if (x[i] > v)
//		{
//			printf("%.6f ",x[i]);
//		}
//	}
//}
//
//int main()
//{
//	double x[N] = { 46,30,32,40,6,17,45,15,48,26 };
//	fun(x, N);
//	return 0;
//}

//int change(char* a, int sz)
//{
//	int i;
//	int sum=0;
//	for (i = 0; i < sz; i++)
//	{
//		sum += (a[i]-'0') * pow(10, sz - 1 - i);
//	}
//	return sum;
//}
//
//int fun(char* a, char* b)
//{
//	int sza = strlen(a);
//	int szb = strlen(b);
//	int aa = change(a,sza);
//	int bb = change(b,szb);
//	return aa + bb;
//}
//
//int main()
//{
//	char a[9] = "32486";
//	char b[9] = "12345";
//	int re = fun(a, b);
//	printf("%d\n", re);
//	return 0;
//}

//#include  <stdio.h>
//#include  <string.h>
//#include  <ctype.h>
//#define  N  9
//long  ctod(char* s)
//{
//    long  d = 0;
//    while (*s)
//        if (isdigit(*s))        //isdigit是计算机语言中用于检查其参数是否为十进制数字字符,在ctype.h头文件中。 
//        {
//            /**********found**********/
//            d = d * 10 + *s - '0';
//            /**********found**********/
//            s++;
//        }
//    return  d;
//}
//long  fun(char* a, char* b)
//{
//    /**********found**********/
//    return  ctod(a) + ctod(b);
//}
//main()
//{
//    char  s1[N], s2[N];
//    do
//    {
//        printf("Input  string  s1 : "); gets(s1);
//    } while (strlen(s1) > N);
//    do
//    {
//        printf("Input  string  s2 : "); gets(s2);
//    } while (strlen(s2) > N);
//    printf("The result is:  %ld\n", fun(s1, s2));
//    getchar();
//}