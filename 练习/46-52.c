#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<ctype.h>


//判断是不是回文，就是正读和反读结果一样，不区分大小写，Asa是回文
//int fun(char* ss)
//{
//	int sz = strlen(ss);
//	int l,r;
//	l = 0;
//	r = sz - 1;
//	while (l<r)
//	{
//		if (toupper(*(ss + l)) != toupper(*(ss + r))) return 0;
//		l++;
//		r--;
//	}
//	return 1;
//}
//
//int main()
//{
//	char s[80];
//	scanf("%s", s);
//	int re = fun(s);
//	if (re == 1) printf("是回文。\n");
//	else printf("不是回文。\n");
//	return 0;
//}
//
//int fun(char* s)
//{
//	char* lp, * rp;
//	/**********found**********/
//	lp = s;
//	rp = s + strlen(s) - 1;
//	while ((toupper(*lp) == toupper(*rp)) && (lp < rp)) {
//		/**********found**********/
//		lp++; rp--;
//	}
//	/**********found**********/
//	if (lp < rp) return 0;
//	else   return 1;
//}
//main()
//{
//	char  s[81];
//	printf("Enter a string:  ");  scanf("%s", s);
//	if (fun(s)) printf("\n\"%s\" is a Palindrome.\n\n", s);
//	else printf("\n\"%s\" isn't a Palindrome.\n\n", s);
//	getchar();
//}

//运用函数指针计算x1*x1+x1*x2
//double f1(double x1)
//{
//	return x1 * x1;
//}
//
//double f2(double x1,double x2)
//{
//	return x1 * x2;
//}
//
//double fun(double x1, double x2)
//{
//	double (*f)(double) = f1;
//	double (*ff)(double,double) = f2;
//	return f(x1) + ff(x1, x2);
//}
//
//int main()
//{
//	double a;
//	double b;
//	scanf("%lf%lf", &a, &b);
//	double re = fun(a, b);
//	printf("x1*x1+x1*x2=%lf\n", re);
//	return 0;
//}

//求平均数，然后把大于平均数的数排前面，小于平均数的数排在后面。

//double agfun(double *x, int sz)
//{
//	double sum = 0,av;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		sum += x[i];
//	}
//	av = sum / sz;
//	return av;
//}
//
//void fun(double* x, int sz, double av)
//{
//	int i, i1 = 0, i2 = 0;
//	double x1[10];
//	double x2[10];
//	for (i = 0; i < sz; i++)
//	{
//		if (x[i] > av) 
//		{ 
//			x1[i1] = x[i]; 
//			i1++;
//		}
//		else
//		{
//			x2[i2] = x[i];
//			i2++;
//		}
//	}
//	for (i = 0; i < i2; i++)
//	{
//		x1[i1 + i] = x2[i];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", x1[i]);
//	}
//}
//
//int main()
//{
//	double  x[10] = { 46,30,32,40,6,17,45,15,48,26 };
//	int sz = sizeof(x) / sizeof(x[0]);
//	double re = agfun(x, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", x[i]);
//	}
//	printf("\n\n");
//	printf("%lf\n\n", re);
//	fun(x, sz, re);
//	return 0;
//}

//double fun(double* x)
//{
//    int  i, j;    double  s, av, y[N];
//    s = 0;
//    for (i = 0; i < N; i++)  s = s + x[i];
//    /**********found**********/
//    av = s / N;
//    for (i = j = 0; i < N; i++)
//        if (x[i] > av) {
//            /**********found**********/
//            y[j++] = x[i]; x[i] = -1;
//        }
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (x[i] != -1) y[j++] = x[i];
//    for (i = 0; i < N; i++)x[i] = y[i];
//    return  av;
//}
//main()
//{
//    int  i;     double  x[N] = { 46,30,32,40,6,17,45,15,48,26 };
//    for (i = 0; i < N; i++) printf("%4.0f ", x[i]);
//    printf("\n");
//    printf("\nThe average is: %f\n", fun(x));
//    printf("\nThe result :\n", fun(x));
//    for (i = 0; i < N; i++)  printf("%5.0f ", x[i]);
//    printf("\n");
//    getchar();
//}


//高位向低位偶数排序
//unsigned long fun(unsigned long  n)
//{
//    unsigned long  x = 0, s, i;   int  t;
//    s = n;
//    /**********found**********/
//    i = 1;
//    /**********found**********/
//    while (s)
//    {
//        t = s % 10;
//        if (t % 2 == 0) {
//            /**********found**********/
//            x = x + t * i;  i = i * 10;
//        }
//        s = s / 10;
//    }
//    return  x;
//}
//main()
//{
//    unsigned long  n = -1;
//    while (n > 99999999 || n < 0)
//    {
//        printf("Please input(0<n<100000000): ");  scanf("%ld", &n);
//    }
//    printf("\nThe result is: %ld\n", fun(n));
//    getchar();
//}

//计算    (-1)**(n+1)*(2*n+1)*(2*n-1)/(2*n*2*n)
//double fun(int  n)
//{
//    int  i, k;    double  s, t;
//    s = 0;
//    /**********found**********/
//    k = 1;
//    for (i = 1; i <= n; i++) {
//        /**********found**********/
//        t = 2 * i;
//        s = s + k * (2 * i - 1) * (2 * i + 1) / (t * t);
//        /**********found**********/
//        k = k * (-1);
//    }
//    return  s;
//}
//main()
//{
//    int  n = -1;
//    while (n < 0)
//    {
//        printf("Please input(n>0): ");  scanf("%d", &n);
//    }
//    printf("\nThe result is: %f\n", fun(n));
//    getchar();
//}
