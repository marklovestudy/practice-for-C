#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

//洗牌n次后的结果是
//void change(int* a)
//{
//	int s1[54], s2[54];
//	int i;
//	for (i = 0; i < 27; i++) { s1[i] = a[i]; s2[i] = a[i + 27]; }
//	for (i = 0; i < 27; i++) { a[2 * i] = s1[i]; a[2 * i + 1] = s2[i]; }
//}
//
//void fun(int* a, int n)
//{
//	int i;
//	for (i = 0; i < n; i++) change(a);
//}
//
//int main()
//{
//	int a[54];
//	int i, n;
//	for (i = 0; i < 54; i++) { a[i] = i + 1; printf("%d ", a[i]); }
//	printf("\n\n");
//	scanf("%d", &n);
//	fun(a, n);
//	for (i = 0; i < 54; i++) printf("%d ", a[i]);
//	return 0;
//}

//void  fun(int  a[55], int  n)
//{
//    int  i, k;
//    /**********found**********/
//    int  b[55];
//    for (i = 0; i < n; i++)
//    {
//        for (k = 1; k <= 27; k++)
//        {
//            b[2 * k - 1] = a[k];
//            /**********found**********/
//            b[2 * k] = a[k + 27];
//        }
//        for (k = 1; k <= 54; k++)
//            /**********found**********/
//            a[k] = b[k];
//    }
//}
//main()
//{
//    int  m, a[55], i;
//    for (i = 1; i < 55; i++)   a[i] = i;
//    printf("请输入洗牌次数 :    ");   scanf("%d", &m);
//    fun(a, m);
//    for (i = 1; i < 55; i++)   printf("%d,", a[i]);
//    printf("\n");
//    getchar();
//}


//求高于平均值的数的平均值。
//double fun(double *s,int sz)
//{
//	int i;
//	double sum = 0;
//	for (i = 0; i < sz; i++) { sum += s[i]; }
//	double av = sum / sz;
//	return av;
//}
//
//int main()
//{
//	double score[12] = { 50,60,70,80,90,100,55,65,75,85,95,99 };
//	int sz = sizeof(score) / sizeof(score[0]);
//	double av = fun(score, sz), sum = 0;
//	int i, n = 0;
//	for (i=0;i<sz;i++) 
//	{
//		if (score[i]>av)
//		{
//			sum += score[i];
//			n += 1;
//		}
//	}
//	printf("%-12.2f\n", sum / n);
//	return 0;
//}

//double  fun(double x[], int n)
//{
//	int i, k = 0;
//	double avg = 0.0, sum = 0.0;
//	for (i = 0; i < n; i++)
//		avg += x[i];
//	/**********************found***********************/
//	avg /= n;
//	for (i = 0; i < n; i++)
//		if (x[i] > avg)
//		{
//			/**********************found***********************/
//			sum += x[i];
//			k++;
//		}
//	/**********************found***********************/
//	return  sum / k;
//}
//main()
//{
//	double score[12] = { 50,60,70,80,90,100,55,65,75,85,95,99 };
//	double aa;
//	aa = fun(score, 12);
//	printf("%f\n", aa);
//}

//把二进制字符串转换成十进制int型

//int fun(char *s)
//{
//	int a = atoi(s);
//	printf("a===%d   ", a);
//	int sum = 0, i = 0;
//	while (s[i]!=0)
//	{
//		sum = sum*2+(s[i]-'0');
//		i++;
//	}
//	return sum;
//}
//
//int main()
//{
//	char str1[80];			//字符串是一个字符数组
//	scanf("%s", &str1);
//	int re = fun(str1);
//	printf("str1=%s,转换成int类型后re=%d\n\n", str1, re);
//	return 0;
//}

///**********************found***********************/
//int  fun(char* s)
//{
//	int  i, n = 0;
//	/**********************found***********************/
//	for (i = 0; s[i] != 0; ++i)
//		/**********************found***********************/
//		n = n * 2 + (s[i] - '0');
//	return  n;
//}
//main()
//{
//	char  num[] = "10011";    int  n;
//	n = fun(num);
//	printf("%s-->%d\n", num, n);
//}