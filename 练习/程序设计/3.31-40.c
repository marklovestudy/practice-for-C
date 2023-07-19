#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include<math.h>
// 
//删除字符串中ASCII码为偶数的字符，存入t数组中。
//void  fun(char* s, char  t[])
//{
//	int sz = strlen(s);
//	int i, k = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] % 2 == 0) t[k++] = s[i];
//	}
//	t[k] = 0;
//}
//
//main()
//{
//	char   s[100], t[100]; void NONO();
//	printf("\nPlease enter string S:"); scanf("%s", s);
//	fun(s, t);
//	printf("\nThe result is: %s\n", t);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	char s[100], t[100];
//	FILE* rf, * wf;
//	int i;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%s", s);
//		fun(s, t);
//		fprintf(wf, "%s\n", t);
//	}
//	fclose(rf);
//	fclose(wf);
//}

//只保留ascii码字符为奇数和下标为奇数的字符，存入t中。
//#include <stdio.h>
//#include <string.h>
//
//void fun(char* s, char t[])
//{
//	int i, k = 0;
//	int sz = strlen(s);
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] % 2 == 1 && i % 2 == 1) t[k++] = s[i];
//	}
//	t[k] = 0;
//}
//
//main()
//{
//	char   s[100], t[100]; void NONO();
//	printf("\nPlease enter string S:"); scanf("%s", s);
//	fun(s, t);
//	printf("\nThe result is: %s\n", t);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	char s[100], t[100];
//	FILE* rf, * wf;
//	int i;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%s", s);
//		fun(s, t);
//		fprintf(wf, "%s\n", t);
//	}
//	fclose(rf);
//	fclose(wf);
//}

//保留二位小数
//double fun(double f, int n)
//{
//	return (int)(f * pow(10, n) + 0.5) / 100.0;
//}
//
//int main()
//{
//	double f;
//	scanf("%lf", &f);
//	double f1 = fun(f,2);
//	printf("%.2lf", f1);
//	return 0;
//}

//把一个数的能被整除的数且是奇数的数存入数组中
//#include <stdio.h>
//void  fun(int x, int  pp[], int* n)
//{
//	int i, k = 0;
//	for (i = 1; i <= x; i += 2)
//	{
//		if (x % i == 0) pp[k++] = i;
//	}
//	*n = k;
//}
//
//main()
//{
//	int  x, aa[1000], n, i; void NONO();
//	printf("\nPlease enter an integer number:\n"); scanf("%d", &x);
//	fun(x, aa, &n);
//	for (i = 0; i < n; i++)
//		printf("%d ", aa[i]);
//	printf("\n");
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
//	int x, aa[1000], n, i, j;
//	FILE* fp;
//	fp = fopen("..\\..\\out.dat", "w");
//	for (j = 0; j < 10; j++) {
//		x = 30 + j;
//		fun(x, aa, &n);
//		for (i = 0; i < n; i++) fprintf(fp, "%d ", aa[i]);
//		fprintf(fp, "\n");
//	}
//	fclose(fp);
//}

////求二维数组中的值
//#include <stdio.h>
//#define M 4
//int fun(int a[][M])
//{
//	int max, i, j;
//	max = a[0][0];
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < M; j++)
//		{
//			if (max < a[i][j]) max = a[i][j];
//		}
//	return max;
//}
//
//main()
//{
//	int arr[2][M] = { 5,8,3,45,76,-4,12,82 }; 
//	printf("max =%d\n", fun(arr));
//	getchar();
//}

//把字符串中下标为奇数的字母改成大写。
//#include <stdio.h>
//#include <string.h>
//void fun(char* ss)
//{
//    int i, n = 0;
//    char* p;
//    p = ss;
//    while (*p++ != '\0')
//        n++;
//    for (i = 1; i < n; i += 2)
//        if (ss[i] >= 'a' && ss[i] <= 'z')
//            ss[i] = ss[i] - 'a' + 'A';
//}
//
//void main(void)
//{
//    char tt[51]; void NONO();
//    printf("\nPlease enter an character string within 50 characters:\n");
//    gets(tt);
//    printf("\n\nAfter changing, the string\n  \"%s\"", tt);
//    fun(tt);
//    printf("\nbecomes\n  \"%s\"", tt);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{
//    /* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
//       输出数据，关闭文件。 */
//    char tt[51], ch;
//    FILE* rf, * wf;
//    int len, i = 0;
//
//    rf = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    while (i < 10) {
//        fgets(tt, 50, rf);
//        len = strlen(tt) - 1;
//        ch = tt[len];
//        if (ch == '\n' || ch == 0x1a) tt[len] = 0;
//        fun(tt);
//        fprintf(wf, "%s\n", tt);
//        i++;
//    }
//    fclose(rf);
//    fclose(wf);
//}

////求公式值   s=1/(1*2)+...+1/(n*(n+1))
//#include <stdio.h>
//double  fun(int  n)
//{
//	double s = 0.0;
//	int i;
//	for (i = 1; i <= n; i++) s += 1.0 / (i * (i + 1));
//	return s;
//}
//main()   /* 主函数 */
//{
//	printf("%f\n", fun(10));
//	getchar();
//}

//求公式值s=1+x+x^2/2!+...+x^n/n!

//#include <stdio.h>
//#include <math.h>
//double fun(double x, int  n)
//{
//	double s = 1.0, an = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		an *= x / i;
//		s += an;
//	}
//	return s;
//}
//
//main()
//{
//	void NONO();
//	printf("%f\n", fun(0.3, 10));
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* fp, * wf;
//	int i, n;
//	double s, x;
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(fp, "%lf,%d", &x, &n);
//		s = fun(x, n);
//		fprintf(wf, "%f\n", s);
//	}
//	fclose(fp);
//	fclose(wf);
//}
//
////不使用C语言函数删除字符串尾的*，如***s***fds**bhgf*************   输出：***s***fds**bhgf
//#include <stdio.h>
//void  fun(char* a)
//{
//	char* s;
//	s = a;
//	while (*s) s++;
//	s--;
//	while (*s == '*') s--;
//	*(++s) = 0;
//}
//
//main()
//{
//	char  s[81]; void NONO();
//	printf("Enter a string:\n"); gets(s);
//	fun(s);
//	printf("The string after deleted:\n"); puts(s);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* in, * out;
//	int i; char s[81];
//	in = fopen("..\\..\\in.dat", "r");
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(in, "%s", s);
//		fun(s);
//		fprintf(out, "%s\n", s);
//	}
//	fclose(in);
//	fclose(out);
//}

////删除字符串中和串尾的*号
//#include <stdio.h>
//void  fun(char* a)
//{
//	/* 以下代码仅供参考 */
//	int i = 0, k;
//	while (a[i] == '*') i++;
//	k = i;
//	while (a[i] != '\0')  /* 以下程序段实现非*字符前移 */
//	{
//		if (a[i] != '*')
//		{
//			a[k++] = a[i];
//		}
//		i++;
//	}
//	a[k] = '\0';
//}
//
//main()
//{
//	char  s[81]; void NONO();
//	printf("Enter a string:\n"); gets(s);
//	fun(s);
//	printf("The string after deleted:\n"); puts(s);
//	NONO();
//	getchar();
//}
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* in, * out;
//	int i; char s[81];
//	in = fopen("..\\..\\in.dat", "r");
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(in, "%s", s);
//		fun(s);
//		fprintf(out, "%s\n", s);
//	}
//	fclose(in);
//	fclose(out);
//}

