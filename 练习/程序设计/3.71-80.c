#define _CRT_SECURE_NO_WARNINGS 1

//#include   <stdio.h>
//#include   <string.h>
//void NONO();
//long  fun(char* s)
//{
//	int sz = strlen(s);
//	int i, n;
//	long re = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		n = s[i] - '0';
//		re = re * 10 + n;
//	}
//	return re;
//}
//main()
//{
//	char  s[10];    long  r;
//	printf("������һ�����Ȳ�����9���ַ��������ַ��� :  ");  gets(s);
//	r = fun(s);
//	printf(" r = %ld\n", r);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	FILE* fp, * wf;
//	int i;  long r;
//	char s[10], * p;
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fgets(s, 10, fp);
//		p = strchr(s, '\n');
//		if (p) *p = 0;
//		r = fun(s);
//		fprintf(wf, "%ld\n", r);
//	}
//	fclose(fp);
//	fclose(wf);
//}

//����Ҷõ����s = ge * ge * ge * ge + shi * shi * shi * shi + bai * bai * bai * bai + qian * qian * qian * qian
//#include<stdio.h>
//#pragma warning (disable:4996)
//int fun(int n, int result[])
//{
//	int i, ge, shi, bai, qian, s, k = 0;
//	for (i = 1000; i <= n; i++)
//	{
//		ge = i % 10;
//		shi = i % 100 / 10;
//		bai = i / 100 % 10;
//		qian = i / 1000;
//		s = ge * ge * ge * ge + shi * shi * shi * shi + bai * bai * bai * bai + qian * qian * qian * qian;
//		if (s == i) result[k++] = i;
//	}
//	return k;
//}
//main()
//{
//	int result[10], n, i;
//	void NONO(int result[], int n);
//	n = fun(9999, result);
//	for (i = 0; i < n; i++) printf("%d\n", result[i]);
//	NONO(result, n);
//}
//
//void NONO(int result[], int n)
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	FILE* fp;
//	int i;
//
//	fp = fopen("..\\..\\out.dat", "w");
//	fprintf(fp, "%d\n", n);
//	for (i = 0; i < n; i++) fprintf(fp, "%d\n", result[i]);
//	fclose(fp);
//}


//��ֵĳ��ƣ������λ����һ������ƽ�������������λ�����ҵ����ǴӴ�С��
//#include   <stdio.h>
//#include   <stdlib.h>
//#pragma warning (disable:4996)
//struct BITS { int  m3, m2, m1, m0; };
//struct BITS  fun(int  n)
//{
//	struct BITS  res;
//	/* �����ｫ�������벹������ */
//	res.m0 = n % 10;
//	res.m1 = n % 100 / 10;
//	res.m2 = n / 100 % 10;
//	res.m3 = n / 1000;
//	return res;
//}
//main()
//{
//	struct  BITS  a;
//	void NONO();
//	int  i = 0, n = 0;
//	for (i = 32; i < 100; i++)
//	{
//		n = i * i;
//		a = fun(n);
//		if (a.m3 < a.m2 && a.m2 < a.m1 && a.m1 < a.m0)
//			printf("No. is %d\n", n);
//	}
//	NONO();
//}
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	struct  BITS  a;
//	FILE* fp;
//	int  i = 0, n = 0;
//
//	fp = fopen("..\\..\\out.dat", "w");
//	for (i = 32; i < 100; i++)
//	{
//		n = i * i;
//		a = fun(n);
//		if (a.m3 < a.m2 && a.m2 < a.m1 && a.m1 < a.m0)
//			fprintf(fp, "No. is %d\n", n);
//	}
//	fclose(fp);
//}

//ͳ���ַ�����"ea","ou","iu"�ĸ�����
//#include <stdio.h> 
//#include <string.h>
//#pragma warning (disable:4996)
//void fun(char* sp, int* ct)
//{
//	int p = 0;
//	ct[0] = ct[1] = ct[2] = 0;
//	while (sp[p])
//	{
//		if (sp[p] == 'e' && sp[p + 1] == 'a') ct[0]++;
//		if (sp[p] == 'o' && sp[p + 1] == 'u') ct[1]++;
//		if (sp[p] == 'i' && sp[p + 1] == 'u') ct[2]++;
//		p++;
//	}
//}
//main()
//{
//	void NONO();
//	char txt[200] = "abeaeafeeaoukgdoouuoiouifwieeotiu";
//	int c[3];
//	fun(txt, c);
//	printf("%d,%d,%d\n", c[0], c[1], c[2]);
//	NONO();
//}
//void NONO()
//{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������������ݣ��ر��ļ��� */
//	FILE* rf, * wf;
//	int i, c[3];
//	char txt[200], * p;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fgets(txt, 200, rf);
//		p = strchr(txt, '\n');
//		if (p != NULL) *p = 0;
//		fun(txt, c);
//		fprintf(wf, "%d,%d,%d\n", c[0], c[1], c[2]);
//	}
//	fclose(rf); fclose(wf);
//}

//��������ż���ĸ��������أ���ż����ƽ���������β��С�
//#include <stdio.h>
//#pragma warning (disable:4996)
//#define N 8
//int fun(int x[], double* ave)
//{
//	double av=0;
//	int c = 0, i;
//	for (i = 0; i < N; i++)
//	{
//		if (x[i] % 2 == 0)
//		{
//			c++;
//			av += x[i];
//		}
//	}
//	*ave = av / c;
//	return c;
//}
//
//main()
//{
//	int x[N] = { 12,5,9,8,23,4,7,21 }, n;
//	double ave;
//	void NONO();
//	n = fun(x, &ave);
//	printf("n=%d,ave=%lf\n", n, ave);
//	NONO();
//}
//void NONO()
//{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������������ݣ��ر��ļ��� */
//	FILE* in, * out;
//	int i, j, x[N], n;
//	double ave;
//	in = fopen("..\\..\\in.dat", "r");
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < N; j++) fscanf(in, "%d,", &x[j]);
//		n = fun(x, &ave);
//		fprintf(out, "n=%d,ave=%lf\n", n, ave);
//	}
//	fclose(in);
//	fclose(out);
//}

//��ṹ�������������ݵĺ͡�
//#include <stdio.h>
//#pragma warning (disable:4996)
//#define N 5
//struct mpow
//{
//	double a;
//	int t;
//};
//double fun(struct mpow* x, int n)
//{
//	double sum = 0;
//	int i, an, j;
//	for (i = 0; i < n; i++)
//	{
//		an = 1;
//		for (j = 0; j < x[i].t; j++) an *= x[i].a;
//		sum += an;
//	}
//	return sum;
//}
//void main()
//{
//	void NONO();
//	struct mpow x[N] = { 12,0,9,2,23,1,7,2 };
//	double sum;
//	sum = fun(x, 4);
//	printf("sum=%lf\n", sum);
//	NONO();
//}
//void NONO()
//{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������������ݣ��ر��ļ��� */
//	FILE* in, * out;
//	struct mpow x[N];
//	int i, j;
//	double sum;
//	in = fopen("..\\..\\in.dat", "r");
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 4; j++) fscanf(in, "%lf,%d,", &x[j].a, &x[j].t);
//		sum = fun(x, 4);
//		fprintf(out, "sum=%lf\n", sum);
//	}
//	fclose(in);
//	fclose(out);
//}

//����˫���ȸ�������������С������
//#include  <stdio.h>
//#pragma warning (disable:4996)
//void  fun(double  aa, int* x, double* y)
//{
//    *x = (int)(aa);
//    *y = aa - *x;
//
//}
//main()
//{
//    void NONO();
//    double  aa, b;  int  a;
//    printf("������һ��˫������:  "); scanf("%lf", &aa);
//    fun(aa, &a, &b);
//    printf("%f������������: %d   С��������%f\n", aa, a, b);
//    NONO();
//}
//void NONO()
//{
//    FILE* in, * out;
//    double  aa, b;  int  a;
//    int i;
//    in = fopen("..\\..\\in.dat", "r");
//    out = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(in, "%lf", &aa);
//        fun(aa, &a, &b);
//        fprintf(out, "%f������������: %d   С��������%f\n", aa, a, b);
//    }
//    fclose(in);
//    fclose(out);
//}
//��������ż�����������ظ�����Ĵ���*yy�������ظ������ƽ��ֵ��
//#include <stdio.h> 
//#pragma warning (disable:4996)
//#define N 11
//double fun(int xx[], int* yy)
//{
//	int i, j, o;
//	double av1 = 0, av2 = 0, av;
//	j = o = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (xx[i] % 2 == 1) { j++; av1 += xx[i]; }
//		if (xx[i] % 2 == 0) { o++; av2 += xx[i]; }
//	}
//	if (j > o)
//	{
//		*yy = j;
//		av = av1 / j;
//	}
//	else
//	{
//		*yy = o;
//		av = av2 / o;
//	}
//	return av;
//}
//
//main()
//{
//	int yy, xx[N] = { 1101,1202,1303,1404,1505,2611,2712,2813,2914,3202,4222 };
//	double pjz;
//	void NONO();
//
//	pjz = fun(xx, &yy);
//	printf("yy=%d, pjz=%.2lf\n", yy, pjz);
//	NONO();
//}
//
//void NONO()
//{
//	/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
//	   ������ݣ��ر��ļ��� */
//	int i, j, xx[N], yy;
//	double pjz;
//	FILE* rf, * wf;
//
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < N; j++) fscanf(rf, "%d ", &xx[j]);
//		pjz = fun(xx, &yy);
//		fprintf(wf, "%d, %.2lf\n", yy, pjz);
//	}
//	fclose(rf);
//	fclose(wf);
//}

//����������ܱ�e���������ĸ��������Ѳ��ܱ����������ĺʹ���sum�С�
//#include <stdio.h>
//#pragma warning (disable:4996)
//#define N 10
//int fun(int x[], int e, int* sum)
//{
//	int n = 0, i;
//	*sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (x[i] % e == 0) n++;
//		else
//		{
//			*sum += x[i];
//		}
//	}
//	return n;
//}
//main()
//{
//	void NONO();
//	int x[N] = { 1, 7, 8, 6, 10, 15, 11, 13, 29, 31 }, e = 3, n, sum;
//	n = fun(x, e, &sum);
//	printf("n=%d,sum=%d\n", n, sum);
//	NONO();
//}

//��һ�����ֳɶ���������ˣ�������ַܷ���0���ַܷ���1��
//#include<stdio.h>
//#include<math.h>
//int prime(int m)
//{
//	int k, flag = 1;
//	for (k = 2; k < (int)sqrt((double)m); k++)
//		if (m % k == 0)
//			flag = 0;
//	return flag;
//}
//int fun(int n, int* x, int* y)
//{
//	int k, flag = 0;
//	for (k = 2; k < n; k++)
//	{
//		*x = k;
//		*y = n / k;
//		if (prime(*x) && prime(*y) && (*x) * (*y) == n)
//		{
//			if (*x > *y) { *x = n / k; *y = k; }
//			flag = 1;
//			break;
//		}
//	}
//	return flag;
//}
//main()
//{
//	int a, b; FILE* out;
//	out = fopen("..\\..\\out.dat", "w");
//	if (fun(111, &a, &b)) {
//		printf("111=%d*%d\n", a, b);
//		fprintf(out, "111=%d*%d\n", a, b);
//	}
//	if (fun(11111, &a, &b)) {
//		printf("11111=%d*%d\n", a, b);
//		fprintf(out, "11111=%d*%d\n", a, b);
//	}
//	if (fun(1111111, &a, &b)) {
//		printf("1111111=%d*%d\n", a, b);
//		fprintf(out, "1111111=%d*%d\n", a, b);
//	}
//	fclose(out);
//	getchar();
//
//}