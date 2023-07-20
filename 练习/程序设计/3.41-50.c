#define _CRT_SECURE_NO_WARNINGS 1

//删除字符串前后的*号
//#include <stdio.h>
//void  fun(char* a, int n, int h, int e)
//{
//    char* s;
//    int p, k = 0;
//    s = a;
//    for (p = h; p < n - e; p++) a[k++] = s[p];
//    a[k] = 0;
//}
//
//main()
//{
//    char  s[81], * t, * f;  int m = 0, tn = 0, fn = 0; void NONO();
//    printf("Enter a string:\n"); gets(s);
//    t = f = s;
//    while (*t) { t++; m++; }
//    t--;
//    while (*t == '*') { t--; tn++; }
//    while (*f == '*') { f++; fn++; }
//    fun(s, m, fn, tn);
//    printf("The string after deleted:\n"); puts(s);
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* in, * out;
//    int i; char s[81], * t, * f;
//    int m = 0, tn = 0, fn = 0;
//    in = fopen("..\\..\\in.dat", "r");
//    out = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(in, "%s", s);
//        t = f = s;
//        m = 0; tn = 0; fn = 0;
//        while (*t) { t++; m++; }
//        t--;
//        while (*t == '*') { t--; tn++; }
//        while (*f == '*') { f++; fn++; }
//        fun(s, m, fn, tn);
//        fprintf(out, "%s\n", s);
//    }
//    fclose(in);
//    fclose(out);
//}

//把字符串中的*号移到后面
//#include <stdio.h>
//void  fun(char* a)
//{
//    /* 以下代码仅供参考 */
//    char* p, * q;
//    int n = 0;
//    p = a;
//    while (*p == '*')  /* 统计串头'*'个数n */
//    {
//        n++; p++;
//    }
//    q = a;
//    /* 向前复制字符串，请填写相应的语句完成其功能 */
//    while (*p)
//    {
//        *q = *p;
//        q++;
//        p++;
//    }
//    for (; n > 0; n--)  /* 在串尾补n个'*' */
//        *q++ = '*';
//    *q = '\0';
//}
//
//main()
//{
//    char  s[81];  int  n = 0; void NONO();
//    printf("Enter a string:\n"); gets(s);
//    fun(s);
//    printf("The string after moveing:\n"); puts(s);
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* in, * out;
//    int i; char s[81];
//    in = fopen("..\\..\\in.dat", "r");
//    out = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(in, "%s", s);
//        fun(s);
//        fprintf(out, "%s\n", s);
//    }
//    fclose(in);
//    fclose(out);
//}

//把二个数组合成一个数
//#include <stdio.h>
//void fun(int  a, int  b, long* c)
//{
//    int a_up, a_low, b_up, b_low;
//    a_up = a / 10;
//    a_low = a % 10;
//    b_up = b / 10;
//    b_low = b % 10;
//    *c = a_low * 1000 + b_low * 100 + a_up * 10 + b_up;
//}
//main()
//{
//    int  a, b; long  c; void NONO();
//    printf("Input a b:");
//    scanf("%d%d", &a, &b);
//    fun(a, b, &c);
//    printf("The result is: %ld\n", c);
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* rf, * wf;
//    int i, a, b; long c;
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(rf, "%d,%d", &a, &b);
//        fun(a, b, &c);
//        fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c);
//    }
//    fclose(rf);
//    fclose(wf);
//}


//把二个数组合成一个数
//#include <stdio.h>
//void fun(int a, int b, long* c)
//{
//    int a_up, a_low, b_up, b_low;
//    a_up = a / 10;
//    a_low = a % 10;
//    b_up = b / 10;
//    b_low = b % 10;
//    *c = a_low + b_low * 10 + a_up * 100 + b_up * 1000;
//}
//main()   /* 主函数 */
//{
//    int a, b; long c; void NONO();
//    printf("Input a b:");
//    scanf("%d%d", &a, &b);
//    fun(a, b, &c);
//    printf("The result is: %ld\n", c);
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* rf, * wf;
//    int i, a, b; long c;
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(rf, "%d,%d", &a, &b);
//        fun(a, b, &c);
//        fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c);
//    }
//    fclose(rf);
//    fclose(wf);
//}


//找出结构体中最大值
//#include <stdio.h>
//#include <stdlib.h>
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
//	double max;
//	p = h->next;
//	max = p->s;
//	p = p->next;
//	while (p)
//	{
//		if (max < p->s) max = p->s;
//		p = p->next;
//	}
//	return max;
//}
//
//STREC* creat(double* s)
//{
//	STREC* h, * p, * q;   int  i = 0;
//	h = p = (STREC*)malloc(sizeof(STREC)); p->s = 0;
//	while (i < N)
//	{
//		q = (STREC*)malloc(sizeof(STREC));
//		q->s = s[i]; i++; p->next = q; p = q;
//	}
//	p->next = 0;
//	return  h;
//}
//outlist(STREC* h)
//{
//	STREC* p;
//	p = h->next;   printf("head");
//	do
//	{
//		printf("->%2.0f", p->s); p = p->next;
//	} while (p != 0);
//	printf("\n\n");
//}
//main()
//{
//	double  s[N] = { 85,76,69,85,91,72,64,87 }, max; void NONO();
//	STREC* h;
//	h = creat(s);   outlist(h);
//	max = fun(h);
//	printf("max=%6.1f\n", max);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* in, * out;
//	int i, j; double  s[N], max;
//	STREC* h;
//	in = fopen("..\\..\\in.dat", "r");
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < N; j++) fscanf(in, "%lf,", &s[j]);
//		h = creat(s);
//		max = fun(h);
//		fprintf(out, "%6.1lf\n", max);
//	}
//	fclose(in);
//	fclose(out);
//}

//把二维数组中所有的值*2
//#include <stdio.h>
//#include <stdlib.h>
//#define  N  5
//void fun(int a[][N], int m)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//		{
//			a[i][j] *= m;
//		}
//}
//
//main()
//{
//	int  a[N][N], m, i, j;
//	printf("***** The array *****\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			a[i][j] = rand() % 20; printf("%4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	do m = rand() % 10; while (m >= 3);
//	printf("m = %4d\n", m);
//	fun(a, m);
//	printf("THE  RESULT\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++) printf("%4d", a[i][j]);
//		printf("\n");
//	}
//	getchar();
//}
////把二维数组中右上三角的值*2
//void fun(int a[][N], int m)
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//		for (j = i; j < N; j++)
//		{
//			a[i][j] *= m;
//		}
//}
//
//main()
//{
//	int  a[N][N], m, i, j; void NONO();
//	printf("***** The array *****\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			a[i][j] = rand() % 20; printf("%4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	do m = rand() % 10; while (m >= 3);
//	printf("m = %4d\n", m);
//	fun(a, m);
//	printf("THE  RESULT\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++) printf("%4d", a[i][j]);
//		printf("\n");
//	}
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* rf, * wf;
//	int i, j, n, a[5][5];
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			fscanf(rf, "%d ", &a[i][j]);
//	fscanf(rf, "%d", &n);
//	fun(a, n);
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) fprintf(wf, "%4d", a[i][j]);
//		fprintf(wf, "\n");
//	}
//	fclose(rf);
//	fclose(wf);
//}

//删除字符串中的空格字符。
//#include <stdio.h>
//#include <string.h>
//
//void fun(char* str)
//{
//	int i, sz = strlen(str), k = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (str[i] != ' ') str[k++] = str[i];
//	}
//	str[k] = 0;
//}
//
//main()
//{
//	char str[81]; void NONO();
//
//	printf("Input a string:");
//	gets(str);
//	puts(str);
//	fun(str);
//	printf("*** str: %s\n", str);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{
//	/* 请在此函数内打开文件，输入调试数据，调用 fun 函数，
//	   输出数据，关闭文件。 */
//	char str[81];
//	int n = 0;
//	FILE* rf, * wf;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	while (n < 10) {
//		fgets(str, 80, rf);
//		fun(str);
//		fprintf(wf, "%s", str);
//		n++;
//	}
//	fclose(rf);
//	fclose(wf);
//}

//#include <stdio.h>
//void  fun(int(*s)[10], int* b, int* n, int mm, int nn)
//{
//    int x, y;
//    for (x = 0; x < nn; x++)
//        for (y = 0; y < mm; y++)
//        {
//            b[y * nn + x] = *(s[y] + x);
//            (*n)++;
//        }
//}
//main()
//{
//    int w[10][10] = { {33,33,33,33},{44,44,44,44},{55,55,55,55} }, i, j;
//    int a[100] = { 0 }, n = 0; void NONO();
//    printf("The matrix:\n");
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++) printf("%3d", w[i][j]);
//        printf("\n");
//    }
//    fun(w, a, &n, 3, 4);
//    printf("The A array:\n");
//    for (i = 0; i < n; i++) printf("%3d", a[i]); printf("\n\n");
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。*/
//    FILE* rf, * wf; int i, j, k;
//    int w[10][10], a[100], n = 0, mm, nn;
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (k = 0; k < 5; k++) {
//        fscanf(rf, "%d %d", &mm, &nn);
//        for (i = 0; i < mm; i++)
//            for (j = 0; j < nn; j++) fscanf(rf, "%d", &w[i][j]);
//        fun(w, a, &n, mm, nn);
//        for (i = 0; i < n; i++) fprintf(wf, "%3d", a[i]); fprintf(wf, "\n");
//    }
//    fclose(rf); fclose(wf);
//}

//把二维数组的数据存在一维数据中，
//void  fun(int s[][10], int  b[], int* n, int mm, int nn)
//{
//    /* 以下代码仅供参考 */
//    int i, j, np = 0;   /* np用作b数组下标 */
//    for (i = 0; i < nn; i++)
//        for (j = 0; j < mm; j++)
//        {
//            b[np++] = s[j][i];
//        }
//    *n = np;
//}
//main()
//{
//    int  w[10][10] = { {33,33,33,33},{44,44,44,44},{55,55,55,55} }, i, j;
//    int  a[100] = { 0 }, n = 0; void NONO();
//    printf("The matrix:\n");
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++)printf("%3d", w[i][j]);
//        printf("\n");
//    }
//    fun(w, a, &n, 3, 4);
//    printf("The A array:\n");
//    for (i = 0; i < n; i++)printf("%3d", a[i]); printf("\n\n");
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//    FILE* rf, * wf; int i, j, k;
//    int w[10][10], a[100], n = 0, mm, nn;
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (k = 0; k < 5; k++) {
//        fscanf(rf, "%d %d", &mm, &nn);
//        for (i = 0; i < mm; i++)
//            for (j = 0; j < nn; j++) fscanf(rf, "%d", &w[i][j]);
//        fun(w, a, &n, mm, nn);
//        for (i = 0; i < n; i++) fprintf(wf, "%3d", a[i]); fprintf(wf, "\n");
//    }
//    fclose(rf); fclose(wf);
//}

//把一个字符串接在另一个字符串尾部
//#include <stdio.h>
//#include <string.h>
//#define   M   3
//#define   N   20
//void  fun(char  a[M][N], char* b)
//{
//    /* 以下代码仅供参考 */
//    int i; *b = 0;
//    for (i = 0; i < M; i++)
//    {
//        strcat(b, a[i]);
//    }
//}
//main()
//{
//    char  w[M][N] = { "AAAA","BBBBBBB","CC" }, a[100];
//    int i; void NONO();
//    printf("The string:\n");
//    for (i = 0; i < M; i++)puts(w[i]);
//    printf("\n");
//    fun(w, a);
//    printf("The A string:\n");
//    printf("%s", a); printf("\n\n");
//    NONO();
//    getchar();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//    FILE* rf, * wf;
//    char w[M][N], a[100]; int i;
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(rf, "%s %s %s", w[0], w[1], w[2]);
//        fun(w, a);
//        fprintf(wf, "%s\n", a);
//    }
//    fclose(rf); fclose(wf);
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char s[100] = "asd", t[100] = "bbb";
//	strcat(s, t);
//	printf("%s", s);
//	return 0;
//}

