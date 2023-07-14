#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

//1运用公式法用pi    pi/2=1+1/3+(1*2*...*n)/(3*5*...*(2*n+1))
//double  fun(double  eps)
//{
//	double re = 1.0;
//	double n = 1.0, an = n / (2 * n + 1);
//	while (an > eps)
//	{
//		re += an;
//		n++;
//		an *= n / (2 * n + 1);
//	}
//	return 2 * re;
//}
//
//main()
//{
//	double  x; void NONO();
//	printf("Input eps:");
//	scanf("%lf", &x); printf("\neps = %lf, PI=%lf\n", x, fun(x));
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* fp, * wf;
//	int i;
//	double x;
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(fp, "%lf", &x);
//		fprintf(wf, "%lf\n", fun(x));
//	}
//	fclose(fp);
//	fclose(wf);
//}

//2输入一个数n,把这个数保这n个*
//void fun(char* s, int n)
//{
//	int i, flag = 0, k;
//	for (i = 0; i < n; i++)
//	{
//		if (s[i] != '*') flag = 1;
//	}
//	if (flag)
//	{}
//	else
//	{
//		k = n;
//		while (s[n]=='*')
//		{
//			n++;
//		}
//		while (s[k++]=s[n++]);
//	}
//}
//
//int main()
//{
//	char s[21] = "******A*BC*DEF*G****";
//	int n;
//	puts(s);
//	scanf("%d", &n);
//	fun(s, n);
//	puts(s);
//	return 0;
//}

//选择排序结构体数据分值
//typedef  struct
//{
//	char  num[10];
//	int   s;
//} STREC;
//void  fun(STREC  a[])
//{
//	STREC tmp;
//	int i, j;
//	for (i = 0; i < N; i++)
//		for (j = i + 1; j < N; j++)
//		{   /* 请按题目要求完成以下代码 */
//			if (a[i].s < a[j].s)
//			{
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//			}
//		}
//}
//
//main()
//{
//	STREC  s[N] = { {"GA005",85},{"GA003",76},{"GA002",69},{"GA004",85},
//	   {"GA001",91},{"GA007",72},{"GA008",64},{"GA006",87},
//	   {"GA015",85},{"GA013",91},{"GA012",64},{"GA014",91},
//	   {"GA011",66},{"GA017",64},{"GA018",64},{"GA016",72} };
//	int  i; FILE* out;
//	fun(s);
//	printf("The data after sorted :\n");
//	for (i = 0; i < N; i++)
//	{
//		if ((i) % 4 == 0)printf("\n");
//		printf("%s  %4d  ", s[i].num, s[i].s);
//	}
//	printf("\n");
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < N; i++)
//	{
//		if ((i) % 4 == 0 && i) fprintf(out, "\n");
//		fprintf(out, "%4d  ", s[i].s);
//	}
//	fprintf(out, "\n");
//	fclose(out);
//	getchar();
//}

//void fun(int a, int b, long* c)
//{
//	int ge, shi, bai, qian;
//	bai = a / 10;
//	ge = a % 10;
//	shi = b / 10;
//	qian = b % 10;
//	*c = qian * 1000 + bai * 100 + shi * 10 + ge;
//}
//main()
//{
//	int   a, b; long   c; void NONO();
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

//void fun(char* s)
//{
//	printf("%s", s);
//}
//
//int main()
//{
//	char a[10];
//	gets(a);
//	fun(a);
//	return 0;
//}

//结构体数据查询
//#define   N   16
//typedef  struct
//{
//	char  num[10];
//	int   s;
//} STREC;
//STREC  fun(STREC* a, char* b)
//{
//	int i;
//	STREC t = { '\0', -1 };
//	for (i = 0; i < N; i++)
//	{
//		if (strcmp(a[i].num, b) == 0)
//			return a[i];
//	}
//}
//
//main()
//{
//	STREC  s[N] = { {"GA005",85},{"GA003",76},{"GA002",69},{"GA004",85},
//	   {"GA001",91},{"GA007",72},{"GA008",64},{"GA006",87},
//	   {"GA015",85},{"GA013",91},{"GA012",64},{"GA014",91},
//	   {"GA011",77},{"GA017",64},{"GA018",64},{"GA016",72} };
//	STREC  h;
//	char  m[10];
//	int  i; FILE* out;
//	printf("The original data:\n");
//	for (i = 0; i < N; i++)
//	{
//		if (i % 4 == 0) printf("\n");
//		printf("%s %3d  ", s[i].num, s[i].s);
//	}
//	printf("\n\nEnter the number:  "); gets(m);
//	h = fun(s, m);
//	printf("The data :  ");
//	printf("\n%s  %4d\n", h.num, h.s);
//	printf("\n");
//	out = fopen("..\\..\\out.dat", "w");
//	h = fun(s, "GA013");
//	fprintf(out, "%s  %4d\n", h.num, h.s);
//	fclose(out);
//	getchar();
//}

//结构体数据平均数
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable:4996)
//#define   N   8
//struct  slist
//{
//	double   s;
//	struct slist* next;
//};
//typedef  struct slist  STREC;
//double  fun(STREC* h)
//{
//	STREC* p;
//	double av;
//	p = h->next;
//	av = 0.0;
//	while (p)
//	{
//		av += p->s;
//		p = p->next;
//	}
//	av /= N;
//	return av;
//}
//
//STREC* creat(double* s)
//{
//	STREC* h, * p, * q;   int  i = 0;
//	h = p = (STREC*)malloc(sizeof(STREC)); p->s = 0;
//	while (i < N)
//	{
//		q = (STREC*)malloc(sizeof(STREC));
//		q->s = s[i]; i++;  p->next = q; p = q;
//	}
//	p->next = 0;
//	return  h;
//}
//outlist(STREC* h)
//{
//	STREC* p;
//	p = h->next; printf("head");
//	do
//	{
//		printf("->%4.1f", p->s); p = p->next;
//	} while (p != 0);
//	printf("\n\n");
//}
//main()
//{
//	double  s[N] = { 85,76,69,85,91,72,64,87 }, ave;
//	STREC* h;
//	h = creat(s);   outlist(h);
//	ave = fun(h);
//	printf("ave= %6.3f\n", ave);
//	getchar();
//}
//
//#include <stdio.h>
////找数组中的最大值和其下标
//void fun(int* s, int t, int* k)
//{
//	int i, max;
//	*k = 0;
//	max = s[*k];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < s[i])
//		{
//			*k = i;
//			max = s[*k];
//		}
//	}
//}
//
//main()
//{
//	int a[10] = { 876,675,896,101,301,401,980,431,451,777 }, k; void NONO();
//
//	fun(a, 10, &k);
//	printf("%d, %d\n", k, a[k]);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
//	int a[10], i, k, j;
//	FILE* rf, * wf;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) fscanf(rf, "%d", &a[j]);
//		fun(a, 10, &k);
//		fprintf(wf, "%d,%d\n", k, a[k]);
//	}
//	fclose(rf);
//	fclose(wf);
//}

//不使用任何库函数，把一个字符串数字变量转变成一个纯数字输出
//#include <stdio.h>
//#include <string.h>
//long  fun(char* p)
//{
//    /* 以下代码仅供参考 */
//    int i, len;  /* len为串长 */
//    long x = 0;
//    len = strlen(p);
//    /* 以下完成数字字符串转换为一个数字。注意：字符'0'不是数字0 */
//    for (i = 0; i < len; i++)
//    {
//        x = x * 10 + p[i] - '0';
//    }
//    return x;
//}
//
//main()   /* 主函数 */
//{
//    char s[6]; void NONO();
//    long    n;
//    printf("Enter a string:\n");
//    gets(s);
//    n = fun(s);
//    printf("%ld\n", n);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* fp, * wf;
//    int i;
//    char s[20];
//    long n;
//
//    fp = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(fp, "%s", s);
//        n = fun(s);
//        fprintf(wf, "%ld\n", n);
//    }
//    fclose(fp);
//    fclose(wf);
//}

//#include <stdlib.h>
//#include <stdio.h>
//void fun(int  a[], int  n, int* max, int* d)
//{
//	int i;
//	*d = 0;
//	*max = a[*d];
//	for (i = 1; i < n; i++)
//	{
//		if (*max < a[i])
//		{
//			*d = i;
//			*max = a[i];
//		}
//	}
//}
//
//main()
//{
//	int i, x[20], max, index, n = 10; void NONO();
//	for (i = 0; i < n; i++) { x[i] = rand() % 50; printf("%4d", x[i]); }
//	printf("\n");
//	fun(x, n, &max, &index);
//	printf("Max =%5d ,  Index =%4d\n", max, index);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* fp, * wf;
//	int i, x[20], max, index, n = 10, j;
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < n; j++) fscanf(fp, "%d,", &x[j]);
//		fun(x, n, &max, &index);
//		fprintf(wf, "Max=%d,Index=%d\n", max, index);
//	}
//	fclose(fp);
//	fclose(wf);
//}