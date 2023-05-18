#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//求累加(2 * i - 1)*(2 * i + 1) / ((2 * i) * (2 * i)) 当其值小于0.001时
//double fun(int n)
//{
//	double i;			//需要数据一致才能计算。否则结果为0
//	double sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += (2 * i - 1)*(2 * i + 1) / ((2 * i) * (2 * i));
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double re = fun(n);
//	printf("%lf",re);
//	return 0;
//}

//double fun(double e)
//{
//	int n=1;
//	double sum = 0;
//	while (sqrt((2.0*n+1)/((2.0*n)*(2.0*n)))>e)
//	{
//		sum += pow(-1, n - 1) * (2.0 * n + 1) / ((2.0 * n) * (2.0 * n));
//		n++;
//	}
//	return sum;
//}
//
//int main()
//{
//	double e = 1e-3;		//表示1乘10的-3次方
//	double re = fun(e);
//	printf("%lf", re);
//	return 0;
//}

//数字前排。
//void fun(char *s)
//{
//	int sz = strlen(s);
//	printf("%d\n", sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		if (!('0' <= s[i] && s[i] <= '9'))
//		{
//			int j;
//			for (j = i + 1; j < sz; j++)
//			{
//				if ('0' <= s[j] && s[j] <= '9')
//				{
//					char tem = s[i];
//					s[i] = s[j];
//					s[j] = tem;
//					break;
//				}
//			}
//		}
//	}
//	printf("%s\n", s);
//}
//
//int main()
//{
//	char s[80];
//	gets(s);
//	printf("%s\n", s);
//	fun(s);
//	return 0;
//}