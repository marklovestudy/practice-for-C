#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//21找出数组中最长的字符串，并返回这个字长串的地址。
//char* fun(char a[][81], int num)
//{
//    /* 以下代码仅供参考 */
//    int i, k = 0, len, maxlen;  /* k为a数组中最长串所在元素的下标，初始为0，maxlen为其串长 */
//    maxlen = strlen(a[k]);
//    for (i = 1; i < num; i++)
//    {
//        /* 以下完成查找最长串 */
//        if (maxlen < strlen(a[i]))
//        {
//            k = i;
//            maxlen = strlen(a[k]);
//        }
//    }
//    return a[k];
//}
//
//main()
//{
//    char ss[10][81], * ps; void NONO();
//    int n, i = 0;
//    printf("输入若干个字符串:");
//    gets(ss[i]);
//    puts(ss[i]);
//    while (!strcmp(ss[i], "****") == 0)
//    {
//        i++;
//        gets(ss[i]);
//        puts(ss[i]);
//    }
//    n = i;
//    ps = fun(ss, n);
//    printf("\nmax=%s\n", ps);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{
//    /* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
//       输出数据，关闭文件。 */
//    char ss[20][81], * ps;
//    int n, i = 0;
//    FILE* rf, * wf;
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    fgets(ss[i], 81, rf);
//    while (!strncmp(ss[i], "****", 4) == 0)
//    {
//        i++;
//        fgets(ss[i], 81, rf);
//    }
//    n = i;
//    ps = fun(ss, n);
//    fprintf(wf, "%s", ps);
//    fclose(rf);
//    fclose(wf);
//}


//22求数组外圈数的平均数
//#include <stdio.h>
//#include <stdlib.h>
//#define  N  5
//double fun(int w[][N])
//{
//	int i, j, c = 0;
//	double sum = 0.0, av;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
//			{
//				sum += w[i][j];
//				c++;
//			}
//		}
//	}
//	av = sum / c;
//	return av;
//}
//
//main()
//{
//	int a[N][N] = { 0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1 };
//	int i, j; void NONO();
//	double s;
//	printf("***** The array *****\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	s = fun(a);
//	printf("***** THE  RESULT *****\n");
//	printf("The sum is :  %lf\n", s);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* rf, * wf;
//	int i, j, a[5][5]; double s;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++) fscanf(rf, "%d ", &a[i][j]);
//	s = fun(a);
//	fprintf(wf, "%lf\n", s);
//	fclose(rf);
//	fclose(wf);
//}

//23连接二个字符串
//#include <stdio.h>
//#include <string.h>
//void fun(char p1[], char p2[])
//{
//    int sz1 = strlen(p1);
//    int sz2 = strlen(p2);
//    int k = 0, i;
//    k = sz1;
//    for (i = 0; i < sz2; i++)
//    {
//        p1[k++] = p2[i];
//    }
//    p1[k] = 0;
//}
//
//main()
//{
//    char s1[80], s2[40]; void NONO();
//
//    printf("Enter s1 and s2:\n");
//    scanf("%s%s", s1, s2);
//    printf("s1=%s\n", s1);
//    printf("s2=%s\n", s2);
//    printf("Invoke fun(s1,s2):\n");
//    fun(s1, s2);
//    printf("After invoking:\n");
//    printf("%s\n", s1);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
//    int i;
//    FILE* rf, * wf;
//    char s1[80], s2[40];
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(rf, "%s", s1);
//        fscanf(rf, "%s", s2);
//        fun(s1, s2);
//        fprintf(wf, "%s\n", s1);
//    }
//    fclose(rf);
//    fclose(wf);
//}

//选出数组中小于平均数的数，存入新数组中。返回小于平均数的个数。
//#include <stdio.h>
//#include <string.h>
//int fun(int score[], int m, int below[])
//{
//	int i, count = 0;
//	double av = 0.0;
//	for (i = 0; i < m; i++)
//	{
//		av += score[i];
//	}
//	av /= m;
//	for (i = 0; i < m; i++)
//	{
//		if (score[i] < av)
//		{
//			below[count++] = score[i];
//		}
//	}
//	return count;
//}
//
//main()
//{
//	int i, n, below[9]; void NONO();
//	int score[9] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
//
//	n = fun(score, 9, below);
//	printf("\nBelow the average score are: ");
//	for (i = 0; i < n; i++)  printf("%d ", below[i]);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
//	int i, j, n, below[10], score[10];
//	FILE* rf, * wf;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) fscanf(rf, "%d", &score[j]);
//		n = fun(score, 10, below);
//		for (j = 0; j < n; j++) fprintf(wf, "%d ", below[j]);
//		fprintf(wf, "\n");
//	}
//	fclose(rf);
//	fclose(wf);
//}

//组合数字
//void fun(int a, int b, long* c)
//{
//	int ge, shi, bai, qian;
//	ge = b / 10;
//	shi = a % 10;
//	bai = b % 10;
//	qian = a / 10;
//	*c = qian * 1000 + bai * 100 + shi * 10 + ge;
//}
//main()
//{
//	int  a, b; long  c; void NONO();
//	printf("Input a b:");
//	scanf("%d%d", &a, &b);
//	fun(a, b, &c);
//	printf("The result is: %ld\n", c);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* rf, * wf;
//	int i, a, b; long c;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%d,%d", &a, &b);
//		fun(a, b, &c);
//		fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c);
//	}
//	fclose(rf);
//	fclose(wf);
//}

//输入17 5   把17后面的5个素数存入数组中。
//#include <stdio.h>
//int prime(int n)
//{
//    int m;
//    for (m = 2; m < n; m++)
//        if (n % m == 0)
//            return 0;
//    return 1;
//}
//
//void fun(int m, int k, int xx[])
//{
//    /* 以下代码仅供参考 */
//    int j = 0, t = m + 1;
//    while (j < k)
//    {
//        /* 按题目要求完成以下代码 */
//        if (prime(t)) xx[j++] = t;
//        t++;
//    }
//}
//
//main()
//{
//    int m, n, zz[1000]; void NONO();
//
//    printf("\nPlease enter two integers:");
//    scanf("%d%d", &m, &n);
//    fun(m, n, zz);
//    for (m = 0; m < n; m++)
//        printf("%d ", zz[m]);
//    printf("\n");
//    NONO();
//    getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
//    int m, n, zz[1000], i;
//    FILE* rf, * wf;
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(rf, "%d %d", &m, &n);
//        fun(m, n, zz);
//        for (m = 0; m < n; m++) fprintf(wf, "%d ", zz[m]);
//        fprintf(wf, "\n");
//    }
//    fclose(rf);
//    fclose(wf);
//}

//找出结构体数据中值最小的数据，通过形参反回。
//#include <stdio.h>
//#include <string.h>
//#define  N  10
//typedef  struct  ss
//{
//    char  num[10];
//    int  s;
//} STU;
//
//void fun(STU  a[], STU* s)
//{
//    int i;
//    int min = a[0].s;
//    for (i = 1; i < N; i++)
//    {
//        if (min > a[i].s)
//        {
//            *s = a[i];
//            min = a[i].s;
//        }
//    }
//}
//
//main()
//{
//    STU  a[N] = { {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
//        {"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71}
//    }, m;
//    int   i;
//    void NONO();
//    printf("***** The original data *****\n");
//    for (i = 0; i < N; i++)printf("No = %s  Mark = %d\n", a[i].num, a[i].s);
//    fun(a, &m);
//    printf("***** THE  RESULT *****\n");
//    printf("The lowest  :  %s , %d\n", m.num, m.s);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{
//    /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* rf, * wf;
//    STU a[N], m;
//    int i;
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) fscanf(rf, "%s %d", a[i].num, &a[i].s);
//    fun(a, &m);
//    fprintf(wf, "The lowest : %s, %d\n", m.num, m.s);
//    fclose(rf);
//    fclose(wf);
//}

//void fun(char* s, char  t[])
//{
//    int i, k = 0;
//    int sz = strlen(s);
//    for (i = 0; i < sz; i++)
//    {
//        if (i % 2 == 0 && s[i] % 2 == 1) continue;
//        else t[k++] = s[i];
//        t[k] = 0;
//    }
//}
//
//main()
//{
//    char   s[100], t[100];
//    void NONO();
//    printf("\nPlease enter string S:");
//    scanf("%s", s);
//    fun(s, t);
//    printf("\nThe result is: %s\n", t);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{
//    /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    char s[100], t[100];
//    int i;
//    FILE* rf, * wf;
//    rf = fopen("in.dat", "r");
//    wf = fopen("out.dat", "w");
//    for (i = 0; i < 10; i++)
//    {
//        fscanf(rf, "%s", s);
//        fun(s, t);
//        fprintf(wf, "%s\n", t);
//    }
//    fclose(rf);
//    fclose(wf);
//}

////求p=m!/(n!*(m-n)!)
//#include <stdio.h>
//float  fun(int m, int n)
//{
//	float i, j, k;
//	float p = 1.0, fz = 1.0, fm1 = 1.0, fm2 = 1.0;
//	for (i = 1; i <= m; i++) fz *= i;
//	for (j = 1; j <= n; j++) fm1 *= j;
//	for (k = 1; k <= m - n; k++) fm2 *= k;
//	p = fz / (fm1 * fm2);
//	return p;
//}
//
//main()   /* 主函数 */
//{
//	printf("P=%f\n", fun(12, 8));
//	getchar();
//}
//
////求n以内的能同时被3，7整除的数之和的平方根。
//#include <math.h>
//#include <stdio.h>
//double  fun(int  n)
//{
//	int i;
//	double sum = 0.0;
//	for (i = 1; i < n; i++)
//	{
//		if (i % 3 == 0 && i % 7 == 0) sum += i;
//	}
//	return sqrt(sum);
//}
//
//main()   /* 主函数 */
//{
//
//	printf("s =%f\n", fun(1000));
//
//	getchar();
//}