#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//double fun(double x, int n)
//{
//	double f, t;
//	int i;
//	f = 1;
//	t = -1;
//	for (i = 1; i < n; i++)
//	{
//		t *= (-1) * x / i;
//		f += t;
//	}
//	return f;
//}
//
//int main()
//{
//	double x, y;
//	char c;
//	x = 2.5;
//	y = fun(x, 15);
//	printf("\nthe result is :\n");
//	printf("x=%-12.6f    y=%-12.6f\n", x, y);		//-左对齐  无居中，12为长度
//	c=getchar();
//	putchar(c);
//	return 0;
//}

//double fun(double x, int n)
//{
//	double f = 1;
//	double t = 1;
//	int i;
//	for (i = 1; i < n; i++)
//	{
//		t *= x / i;
//		f += t;
//	}
//	return f;
//}
//
//int main()
//{
//	double x, y;
//	char c;
//	x = 2.5;
//	y = fun(x, 12);
//	printf("\nthe result is :\n");
//	printf("x=%-12.6f    y=%-12.6f", x, y);
//	c = getchar();
//	putchar(c);
//	return 0;
//}

//double fun(double x, double m)
//{
//	double f = 1;
//	double t = 1;
//	int n = 1;
//	while (fabs(t)>=m)
//	{
//		t *= x / n;
//		f += t;
//		n++;
//	}
//	return f;
//}
//
//int main()
//{
//	double x, y;
//	char c;
//	x = 2.5;
//	y = fun(x, pow(10,-6));
//	printf("\nthe result is :\n");
//	printf("x=%-12.6f    y=%-12.6f", x, y);
//	c = getchar();
//	putchar(c);
//	return 0;
//}

//void fun(int a[], int sz)
//{
//	int l=0;
//	int r = sz - 1;
//	while (l<r)
//	{
//		int tem = a[l];
//		a[l] = a[r];
//		a[r] = tem;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	int a[9] = { 1,2,3,4,5,6,7,8,9 };
//	int i;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %4d ", a[i]);
//	}
//	printf("\n\n");
//	fun(a, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %4d ", a[i]);
//	}
//	return 0;
//}

//char fun(char c)
//{
//	char c2;
//	if ('0' <= c && c <= '9')
//	{
//		c2 = (9 - (c - '0')) + '0';
//	}
//	return c2;
//}
//
//int main()
//{
//	char c1,c2;
//	scanf("%c", &c1);
//	c2=fun(c1);
//	printf("c1=%c,   c2=%c\n",c1,c2);
//	return 0;
//}

//int fun(int n)
//{
//	int i;
//	int re = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ys = 1;
//		for (j=2;j<i;j++)
//		{
//			if (i % j == 0)
//			{
//				ys = 0;
//			}
//		}
//		re += ys;
//	}
//	return re;
//}

//int main()
//{
//	int n,re;
//	scanf("%d", &n);
//	if (n >= 2)
//	{
//		re=fun(n);
//	}
//	else
//	{
//		printf("输入错误。");
//	}
//	printf("小于等于n=%d的素数有%d个",n,re);
//	return 0;
//}

//int fun(int  n)
//{
//    int  i, j, count = 0;
//    printf("\nThe prime number between 3 to %d\n", n);
//    for (i = 3; i <= n; i++) {
//        /**********found**********/
//        for (j = 2; j < i; j++)
//            /**********found**********/
//            if (i % j == 0)
//                break;
//        /**********found**********/
//        if (j == i)
//        {
//            count++; printf(count % 15 ? "%5d" : "\n%5d", i);
//        }
//    }
//    return  count;
//}
//main()
//{
//    int  n = 20, r;
//    r = fun(n);
//    printf("\nThe number of prime is  :  %d\n", r);
//}


//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf( a? "%5d ...." : "\n%5d", 3);	//a为真输出"%5d ....",a为假输出"\n%5d"
//	return 0;
//}

int main()
{
	int n,i,a[10000];
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		a[i] = i;
	}
	for (i = 2; i <= n; i++)
	{
		int j = 0;
		for (j = i+1; j <= n; j++)
		{
			if (a[j]!=0 && a[j] % i == 0)
			{
				a[j] = 0;
			}
		}
	}
	for (i = 2; i <= n; i++)
	{
		if (a[i] != 0)
			printf("%d,",a[i]);
	}
	return 0;
}