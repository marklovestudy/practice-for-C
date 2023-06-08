#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//统计大于平均数的的数的个数。
//int fun(double *a, int sz)
//{
//	double av = 0.0;
//	int i,n=0;
//	for (i = 0; i < sz; i++)
//	{
//		av += a[i];
//	}
//	av /= sz;
//	printf("%lf\n", av);
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] > av) 
//		{
//			printf("%lf ", a[i]);
//			n++;
//		}
//	}
//	return n;
//}

//int main()
//{
//	double a[8] = { 193.199, 195.673, 195.757, 196.051, 196.092, 196.596, 196.579, 196.763 };
//	int n=fun(a,8);
//	printf("%d", n);
//	return 0;
//}

//int fun(double x[], int n)
//{
//    /************found************/
//    int j, c = 0; double xa = 0.0;
//    for (j = 0; j < n; j++)
//        xa += x[j] / n;
//    printf("ave =%f\n", xa);
//    for (j = 0; j < n; j++)
//        /************found************/
//        if (x[j] >= xa)
//            c++;
//    return c;
//}
//
//main()
//{
//    double x[100] = { 193.199, 195.673, 195.757, 196.051, 196.092, 196.596, 196.579, 196.763 };
//    printf("%d\n", fun(x, 8));
//    getchar();
//}

////把n转成k进制数
//int fun(int n, int k)
//{
//	//取余法反向排序。
//	double m = 0;
//	int i = 0, j;
//	while (n)
//	{
//		m = m * 0.1 + n % k;
//		n /= k;
//		i++;
//	}
//	for (j = 1; j < i; j++) m *= 10;
//	return m;
//}
//
//int main()
//{
//	while (1)
//	{
//		int n, k;
//		scanf("%d%d", &n, &k);
//		int re = fun(n, k);
//		printf("%d ", re);
//	}
//	
//	return 0;
//}

//void fun(int m, int k)
//{
//    int aa[20], i;
//    for (i = 0; m; i++)
//    {
//        /**********found**********/
//        aa[i] = m % k;
//        m /= k;
//    }
//    for (; i; i--)
//        /**********found**********/
//        printf("%d", aa[i - 1]);
//}
//
//main()
//{
//    int b, n;
//    printf("\nPlease enter a number and a base:\n");
//    scanf("%d %d", &n, &b);
//    fun(n, b);
//    printf("\n");
//    getchar();
//}

//把字符串按ascii码的升序排列

//void fun(char* str1)
//{
//	int sz = strlen(str1);
//	int i,j;
//	char tem;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			if (str1[i] > str1[j])
//			{
//				tem = str1[i];
//				str1[i] = str1[j];
//				str1[j] = tem;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char s[100];
//	gets(s);
//	fun(s);
//	printf("%s", s);
//	return 0;
//}

//void fun(char t[])
//{
//    char c;
//    int  i, j;
//    /**********found***********/
//    for (i = strlen(t) - 1; i; i--)
//        for (j = 0; j < i; j++)
//            /**********found***********/
//            if (t[j] > t[j + 1])
//            {
//                c = t[j];
//                t[j] = t[j + 1];
//                t[j + 1] = c;
//            }
//}
//
//main()
//{
//    char s[81];
//    printf("\nPlease enter a character string: ");
//    gets(s);
//    printf("\n\nBefore sorting:\n  \"%s\"", s);
//    fun(s);
//    printf("\nAfter sorting decendingly:\n  \"%s\"\n", s);
//    getchar();
//}

//统计字符串s1中包含多少个s2字符串。
//int fun(char* s1, char* sub)
//{
//	int n = 0,i,j;
//	int sz = strlen(sub);
//	int sz1 = strlen(s1);
//	for (i = 0; i < sz1; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (s1[i + j] != sub[j])
//			{}
//			else
//			{
//				break;
//			}
//			n++;
//		}
//	}
//	return n;
//}
//
//int main()
//{
//	char str1[100],sub1[20];
//	printf("str1:\n");
//	gets(str1);
//	printf("str1:\n");
//	gets(sub1);
//	int n=fun(str1, sub1);
//	printf("%d\n", n);
//	return 0;
//}

//int fun(char* str, char* substr)
//{
//    int i, j, k, num = 0;
//    /************found************/
//    for (i = 0; str[i]; i++)				
//        for (j = i, k = 0; substr[k] == str[j]; k++, j++)
//            /************found************/
//            if (substr[k + 1] == '\0')
//            {
//                num++;
//                break;
//            }
//    return num;
//}
//
//main()
//{
//    char str[80], substr[80];
//    printf("Input a string:");
//    gets(str);
//    printf("Input a substring:");
//    gets(substr);
//    printf("%d\n", fun(str, substr));
//    getchar();
//}


//删除字符串中的字符
//void fun(char* str1, char c)
//{
//	int i, j = 0;
//	for (i = 0; str1[i]; i++)
//	{
//		if (str1[i] == c) continue;
//		str1[j++] = str1[i];
//	}
//	str1[j] = 0;
//}
//
//int main()
//{
//	char s1[80], c1;
//	printf("Input a str:");
//	gets(s1);
//	printf("Input a char:");
//	scanf("%c", &c1);
//	fun(s1, c1);
//	printf("%s\n", s1);
//	getchar();
//}
//
//void  fun(char* s)
//{
//	int  i, j;
//	for (i = j = 0; s[i] != '\0'; i++)
//		if (s[i] != 'c')
//			/************found************/
//			s[j++] = s[i];
//	/************found************/
//	s[j] = '\0';
//}
//main()
//{
//	char  s[80];
//	printf("Enter a string:       "); gets(s);
//	printf("The original string:  "); puts(s);
//	fun(s);
//	printf("The string after deleted :  "); puts(s); printf("\n\n");
//	getchar();
//}

//统计字符串中的字母大小写多少。
//void fun(char* s, int* a, int* b)
//{
//	while (*s)
//	{
//		if (*s >= 'A' && *s <= 'Z')
//			/**********found**********/
//			*a = *a + 1;
//		if (*s >= 'a' && *s <= 'z')
//			/**********found**********/
//			*b = *b + 1;
//		s++;
//	}
//}
//
//main()
//{
//	char s[100];
//	int upper = 0, lower = 0;
//	printf("\n Please a string:");
//	gets(s);
//	fun(s, &upper, &lower);
//	printf("\n upper=%d lower=%d\n", upper, lower);
//	getchar();
//}

//输入一个大于3的数，求前n项的平方根之和。
//double fun(int* a, int n)
//{
//	int i;
//	a[0] = 0;
//	a[1] = 0;
//	a[2] = 1;
//	double sum = 1;
//	if (n > 2)
//	{
//		for (i = 3; i <= n; i++)
//		{
//			a[i] = a[i - 1] + a[i - 2] + a[i - 3];
//			sum += sqrt(a[i]);
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int a[100] = { 0 }, n;
//	scanf("%d", &n);
//	double re=fun(a, n-1);
//	printf("%lf", re);
//	return 0;
//}

//double fun(int n)
//{
//    double   sum, s0, s1, s2, s; int k;
//    sum = 1.0;
//    if (n <= 2) sum = 0.0;
//    s0 = 0.0; s1 = 0.0; s2 = 1.0;
//    for (k = 3; k <= n; k++)
//    {
//        s = s0 + s1 + s2;
//        sum += sqrt(s);
//        s0 = s1; s1 = s2; s2 = s;
//    }
//    /************found************/
//    return sum;
//}
//
//main()
//{
//    int n;
//    printf("Input N=");
//    scanf("%d", &n);
//    printf("%f\n", fun(n));
//    getchar();
//}

//求低于平均分的人数。
//#define  N   20
//
//int fun(float* s, int n, float* aver)
//{
//    float  ave, t = 0.0;
//    int  count = 0, k, i;
//    for (k = 0; k < n; k++)
//        /**************found**************/
//        t += s[k];
//    ave = t / n;
//    for (i = 0; i < n; i++)
//        if (s[i] < ave) count++;
//    /**************found**************/
//    *aver = ave;
//    return  count;
//}
//
//main()
//{
//    float  s[30], aver;
//    int  m, i;
//
//    printf("\n请输入学生的人数:  "); scanf("%d", &m);
//    printf("\n请输入 %d 名学生的成绩 :\n ", m);
//    for (i = 0; i < m; i++) scanf("%f", s + i);
//    printf("\n低于平均分的学生人数 : %d \n", fun(s, m, &aver));
//    printf("平均分 = %f\n", aver);
//    getchar();
//}


//7654321取出偶数位的数，形成一个新的数642。
//
///************found************/
//void fun(long  s, long* t)
//{
//    long  sl = 10;
//    s /= 10;
//    *t = s % 10;
//    /************found************/
//    while (s > 0)
//    {
//        s = s / 100;
//        *t = s % 10 * sl + *t;
//        sl = sl * 10;
//    }
//}
//
//main()
//{
//    long   s, t;
//    printf("\nPlease enter s:"); scanf("%ld", &s);
//    fun(s, &t);
//    printf("The result is: %ld\n", t);
//    getchar();
//}

//求对角线上的数的和
//#define M 5
//int fun(int sz, int (*aa)[5])
//{
//	int i, j, sum = 0;
//	for (i = 0, j = 0; i < sz; i++, j++)
//	{
//		sum += aa[i][j];
//	}
//	return sum;
//}
//
//main()
//{
//	int  aa[M][M] = { {1,2,3,4,5},{4,3,2,1,0},
//		 {6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7} };
//	printf("\nThe sum of all elements on 2 diagnals is %d.", fun(M, aa));
//	getchar();
//}
//
//#define  M   5
///************found************/
//int  fun(int  n, int  xx[][M])
//{
//	int  i, j, sum = 0;
//	printf("\nThe %d x %d matrix:\n", M, M);
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//			/************found************/
//			printf("%4d ", xx[i][j]);
//		printf("\n");
//	}
//	for (i = 0; i < n; i++)
//		sum += xx[i][i] + xx[i][n - i - 1];
//	return(sum);
//}
//
//main()
//{
//	int  aa[M][M] = { {1,2,3,4,5},{4,3,2,1,0},
//		 {6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7} };
//	printf("\nThe sum of all elements on 2 diagnals is %d.", fun(M, aa));
//	getchar();
//}
