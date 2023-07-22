#define _CRT_SECURE_NO_WARNINGS 1

//把数组的值的前几个排到尾部
//#include <stdio.h>
//#define    N    80
//void  fun(int* w, int  p, int  n)
//{
//	int i, tem, j;
//	for (i = 0; i <= p; i++)
//	{
//		tem = w[0];
//		for (j = 0; j < n - 1; j++)
//		{
//			w[j] = w[j + 1];
//		}
//		w[j] = tem;
//	}
//}
//main()
//{
//	int  a[N] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int  i, p, n = 15; void NONO();
//	printf("The original data:\n");
//	for (i = 0; i < n; i++)printf("%3d", a[i]);
//	printf("\n\nEnter  p:  "); scanf("%d", &p);
//	fun(a, p, n);
//	printf("\nThe data after moving:\n");
//	for (i = 0; i < n; i++)printf("%3d", a[i]);
//	printf("\n\n");
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int a[N], i, j, p, n;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 5; i++) {
//		fscanf(rf, "%d %d", &n, &p);
//		for (j = 0; j < n; j++) fscanf(rf, "%d", &a[j]);
//		fun(a, p, n);
//		for (j = 0; j < n; j++) fprintf(wf, "%3d", a[j]); fprintf(wf, "\n");
//	}
//	fclose(rf); fclose(wf);
//}
//

//移动字符串前面的M个到尾部
//#include <stdio.h>
//#include <string.h>
//#define    N    80
//void fun1(char* w)  /* 本函数的功能是将字符串中字符循环左移一个位置 */
//{
//	int i; char t;
//	t = w[0];
//	for (i = 0; i < (int)strlen(w) - 1; i++)
//		w[i] = w[i + 1];
//	w[strlen(w) - 1] = t;
//}
//
//void  fun(char* w, int  m)  /* 可调用fun1函数左移字符 */
//{
//	int i, j, tem;
//	int sz = strlen(w);
//	for (i = 0; i < m; i++)
//	{
//		tem = w[0];
//		for (j = 1; j < sz; j++)
//		{
//			w[j - 1] = w[j];
//		}
//		w[j - 1] = tem;
//	}
//}
//main()
//{
//	char  a[N] = "ABCDEFGHIJK";
//	int  m; void NONO();
//	printf("The original string:\n"); puts(a);
//	printf("\n\nEnter  m:  "); scanf("%d", &m);
//	fun(a, m);
//	printf("\nThe string after moving:\n"); puts(a);
//	printf("\n\n");
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; char a[N]; int m, i;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%d %s", &m, a);
//		fun(a, m);
//		fprintf(wf, "%s\n", a);
//	}
//	fclose(rf); fclose(wf);
//}

//把二维数组中的字符存到一个字符串中。
//#include <stdio.h>
//#define     M   3
//#define     N   4
//void  fun(char  s[][N], char* b)
//{
//    int i, j, n = 0;
//    for (i = 0; i < N; i++)  /* 请填写相应语句完成其功能 */
//    {
//        for (j = 0; j < M; j++)
//        {
//            b[n++] = s[j][i];
//        }
//    }
//    b[n] = '\0';
//}
//main()
//{
//    char  a[100], w[M][N] = { {'W','W','W','W'},{'S','S','S','S'},{'H','H','H','H'} };
//    int  i, j; void NONO();
//    printf("The matrix:\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)printf("%3c", w[i][j]);
//        printf("\n");
//    }
//    fun(w, a);
//    printf("The A string:\n"); puts(a);
//    printf("\n\n");
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//    FILE* rf, * wf; int i, j, k;
//    char a[100], w[M][N], b;
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (k = 0; k < 10; k++) {
//        for (i = 0; i < M; i++) {
//            for (j = 0; j < N; j++) fscanf(rf, "%c", &w[i][j]);
//            fscanf(rf, "%c", &b);
//        }
//        fun(w, a);
//        fprintf(wf, "%s\n", a);
//    }
//    fclose(rf); fclose(wf);
//}

//除重数组
//#include <stdio.h>
//#define    N    80
//int  fun(int  a[], int  n)
//{
//	int i, k = 0, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			if (a[j] == a[i])
//				break;
//		}
//		if (j == k) a[k++] = a[i];
//	}
//	return k;
//}
//main()
//{
//	int  a[N] = { 2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10 }, i, n = 20;
//	printf("The original data :\n");
//	for (i = 0; i < n; i++)printf("%3d", a[i]);
//	fun(a, n);
//	printf("\n\nThe data after deleted :\n");
//	for (i = 0; i < n; i++)printf("%3d", a[i]); printf("\n\n");
//
//	getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int a[N], n, i, j;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 5; i++) {
//		fscanf(rf, "%d", &n);
//		for (j = 0; j < n; j++) fscanf(rf, "%d", &a[j]);
//		n = fun(a, n);
//		for (j = 0; j < n; j++) fprintf(wf, "%4d", a[j]);
//		fprintf(wf, "\n");
//	}
//	fclose(rf); fclose(wf);
//}

//#include <stdio.h>
//#define    N    80
//int  fun(int  a[], int  n)
//{
//    int i, j, x;
//    for (i = 0; i < n - 1; i++)
//        for (j = i + 1; j < n; j++)
//            if (a[j] == a[i])
//            {
//                for (x = j + 1; x < n; x++)
//                    a[x - 1] = a[x];
//                n--;
//                j--;
//            }
//    return(n);
//}
//main()
//{
//    int  a[N] = { 2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10 }, i, n = 20; void NONO();
//    printf("The original data :\n");
//    for (i = 0; i < n; i++)printf("%3d", a[i]);
//    n = fun(a, n);
//    printf("\n\nThe data after deleted :\n");
//    for (i = 0; i < n; i++)printf("%3d", a[i]); printf("\n\n");
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//    FILE* rf, * wf; int a[N], n, i, j;
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 5; i++) {
//        fscanf(rf, "%d", &n);
//        for (j = 0; j < n; j++) fscanf(rf, "%d", &a[j]);
//        n = fun(a, n);
//        for (j = 0; j < n; j++) fprintf(wf, "%4d", a[j]);
//        fprintf(wf, "\n");
//    }
//    fclose(rf); fclose(wf);
//}


//统计年龄
//#include <stdio.h>
//#define   N   50
//#define   M   11
//void  fun(int* a, int* b)
//{
//	int i, k = 0, index;
//	for (i = 0; i < M; i++) b[i] = 0;
//	for (i = 0; i < N; i++)
//	{
//		index = a[i] / 10;
//		if (index > 10) index = 10;
//		b[index]++;
//	}
//}
//double  rnd()
//{
//	static  t = 29, c = 217, m = 1024, r = 0;
//	r = (r * t + c) % m;  return((double)r / m);
//}
//main()
//{
//	int  age[N], i, d[M]; void NONO(int d[M]);
//	for (i = 0; i < N; i++)age[i] = (int)(115 * rnd());
//	printf("The original data :\n");
//	for (i = 0; i < N; i++) printf((i + 1) % 10 == 0 ? "%4d\n" : "%4d", age[i]);
//	printf("\n\n");
//	fun(age, d);
//	for (i = 0; i < 10; i++)printf("%4d---%4d  :  %4d\n", i * 10, i * 10 + 9, d[i]);
//	printf("  Over  100  :  %4d\n", d[10]);
//	NONO(d);
//	getchar();
//}
//void NONO(int d[M])
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* wf; int i;
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) fprintf(wf, "%4d---%4d  :  %4d\n", i * 10, i * 10 + 9, d[i]);
//	fprintf(wf, "  Over  100  :  %4d\n", d[10]);
//	fclose(wf);
//}


//统计字符串中的单词数量
//#include <stdio.h>
//#include <string.h>
//#define    N   80
//int  fun(char* s)
//{
//	int c = 0, i = 0, f = 0;
//	while (*(s + i))
//	{
//		if (*(s + i) && f == 0)
//		{
//			f = 1;
//			c++;
//		}
//		if (*(s + i) == ' ' && f == 1) f = 0;
//		i++;
//	}
//	return c;
//}
//main()
//{
//	char  line[N];    int  num = 0; void NONO();
//	printf("Enter a string :\n"); gets(line);
//	num = fun(line);
//	printf("The number of word is  :  %d\n\n", num);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int i, num; char line[N], * p;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fgets(line, N, rf);
//		p = strchr(line, '\n');
//		if (p != NULL) *p = 0;
//		num = fun(line);
//		fprintf(wf, "%d\n", num);
//	}
//	fclose(rf); fclose(wf);
//}

//求一个数的因子之和不包含1和本身
//#include <stdio.h>
//#pragma warning (disable:4996)
//int fun(int  n)
//{
//	int i, sum = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0) sum += i;
//	}
//	return sum;
//}
//main()
//{
//	int  n, sum;
//	void NONO();
//	printf("Input n:  ");  scanf("%d", &n);  getchar();
//	sum = fun(n);
//	printf("sum=%d\n", sum);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int i, n, sum;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%d", &n);
//		sum = fun(n);
//		fprintf(wf, "%d=%d\n", n, sum);
//	}
//	fclose(rf); fclose(wf);
//}

//公式求值：s=1+1/1!+1/2!+...+1/n!
//#include <stdio.h>
//#pragma warning (disable:4996)
//double  fun(int  n)
//{
//	double s = 1.0, an = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		an *= 1.0 / i;
//		s += an;
//	}
//	return s;
//}
//main()
//{
//	int  n;     double  s;
//	void NONO();
//	printf("Input n:  ");  scanf("%d", &n); getchar();
//	s = fun(n);
//	printf("s=%f\n", s);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int n, i; double s;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%d", &n);
//		s = fun(n);
//		fprintf(wf, "%lf\n", s);
//	}
//	fclose(rf); fclose(wf);
//}

//s=1/1!+1/2!+...+1/n!
//#include <stdio.h>
//#pragma warning (disable:4996)
//double fun(int  n)
//{
//	double s = 0.0, an = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		an *= 1.0 / i;
//		s += an;
//	}
//	return s;
//
//}
//main()
//{
//	int  n;    double  s;
//	void NONO();
//	printf("\nInput n:  ");  scanf("%d", &n);
//	s = fun(n);
//	printf("\n\ns=%f\n\n", s);
//	NONO();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int n, i; double s;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%d", &n);
//		s = fun(n);
//		fprintf(wf, "%lf\n", s);
//	}
//	fclose(rf); fclose(wf);
//}
//

//
#include <stdio.h>
void fun(int a, int b, long* c)
{
	int g, s, b, q;
	g = a / 10;
	s = b % 10;
	b = a % 10;
	q = q / 10;
	*c = q * 1000 + b * 100 + s * 10 + g;
}
main()
{
	int a, b; long c;
	printf("Input a b:");
	scanf("%d%d", &a, &b);
	fun(a, b, &c);
	printf("The result is: %ld\n", c);

	getchar();
}
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
