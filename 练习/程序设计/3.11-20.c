#define _CRT_SECURE_NO_WARNINGS 1


//求数组二个数的平均值的平方根之和
//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable:4996)
//double fun(double  x[9])
//{
//	int i;
//	double sum = 0.0;
//	for (i = 0; i < 8; i++)
//	{
//		sum += sqrt((x[i] + x[i + 1]) / 2);
//	}
//	return sum;
//}
//main()
//{
//	double  s, a[9] = { 12.0,34.0,4.0,23.0,34.0,45.0,18.0,3.0,11.0 };
//	void NONO();
//	int  i;
//	printf("\nThe original data is :\n");
//	for (i = 0; i < 9; i++)printf("%6.1f", a[i]);  printf("\n\n");
//	s = fun(a);
//	printf("s=%f\n\n", s);
//	NONO();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int i, j; double s, a[9];
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 9; j++) fscanf(rf, "%lf", &a[j]);
//		s = fun(a);
//		fprintf(wf, "%lf\n", s);
//	}
//	fclose(rf); fclose(wf);
//}

//12求s=1-1/2+...+1.0/(2*i-1)-1.0/(2*i);
//#include <stdio.h>
//#pragma warning (disable:4996)
//double fun(int  n)
//{
//	double re = 0.0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		re += 1.0 / (2 * i - 1) - 1.0 / (2 * i);
//	}
//	return re;
//}
//main()
//{
//	int  n;    double  s;
//	void NONO();
//	printf("\nInput n:  ");  scanf("%d", &n);
//	s = fun(n);
//	printf("\ns=%f\n", s);
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

//13求n内所有能被5或9整除的自然数的倒数之和
//#include <stdio.h>
//#pragma warning (disable:4996)
//double fun(int  n)
//{
//	double s = 0.0;
//	int i;
//	for (i = 5; i <= n; i++)
//	{
//		if (i % 5 == 0 || i % 9 == 0)
//		{
//			s += 1.0 / i;
//		}
//	}
//	return s;
//}
//main()
//{
//	int  n;    double  s;
//	void NONO();
//	printf("\nInput n:  ");  scanf("%d", &n);
//	s = fun(n);
//	printf("\n\ns=%f\n", s);
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

//求和sum=1+0.5x/1+(0.5x/1)*x*(0,5-2+1)/2+...+an*x*(0.5-n+1)/n;
//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable:4996)
//double fun(double  x)
//{
//	double an = 1.0, sum = 1.0;
//	int n = 1;
//	while (fabs(an) >= 0.000001)
//	{
//		an = an * x * (0.5 - n + 1) / n;
//		sum += an;
//		n++;
//	}
//	return sum;
//	/*int n=1;
//	double sn=1;
//	double xn=1,xn1=0;
//	while(fabs(xn-xn1)>=0.000001)
//	{
//		xn=xn*x*(0.5-n+1)/n;
//		n+=1;
//		sn+=xn;
//	}
//	return(sn);*/
//}
//main()
//{
//	double  x, s;
//	void NONO();
//	printf("Input x:  ");  scanf("%lf", &x);
//	s = fun(x);
//	printf("s=%f\n", s);
//	NONO();
//}

//15  x1是这十个数的平均数,求每个数与平均数的差的平方和的平方均数的平方根。   s+=(x-x1)*(x-x1)/10   求s的平方根。
//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable:4996)
//double fun(double  x[10])
//{
//	double x1 = 0.0, s = 0.0;
//	int i;
//	for (i = 0; i < 10; i++) x1 += x[i];
//	x1 /= 10;
//	for (i = 0; i < 10; i++) s += (x[i] - x1) * (x[i] - x1);
//	s /= 10;
//	s = sqrt(s);
//	return s;
//}
//main()
//{
//	double s, x[10] = { 95.0,89.0,76.0,65.0,88.0,72.0,85.0,81.0,90.0,56.0 };
//	void NONO();
//	int  i;
//	printf("\nThe original data is :\n");
//	for (i = 0; i < 10; i++)printf("%6.1f", x[i]);  printf("\n\n");
//	s = fun(x);
//	printf("s=%f\n\n", s);
//	NONO();
//}
//void NONO()
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
//	FILE* rf, * wf; int i, j; double s, x[10];
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 10; j++) fscanf(rf, "%lf", &x[j]);
//		s = fun(x);
//		fprintf(wf, "%lf\n", s);
//	}
//	fclose(rf); fclose(wf);
//}

//求3到n间所有素数的平方根之和。
//#include <math.h>
//#include <stdio.h>
//#pragma warning (disable:4996)
//double fun(int  n)
//{
//	int i, j;
//	double s = 0.0;
//	for (i = 3; i <= n; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0) break;
//		}
//		if (j == i)
//		{
//			s += sqrt(i);
//		}
//	}
//	return s;
//}
//main()
//{
//	int  n;    double  sum;
//	void NONO();
//	printf("\n\nInput n:  ");  scanf("%d", &n);
//	sum = fun(n);
//	printf("\n\nsum=%f\n\n", sum);
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

//a1=1,a2=1+2^0.5,...an=a(n-1)+n^0.5,求Sn,输入20，输出：534.188884
//#include <math.h>
//#include <stdio.h>
//#pragma warning (disable:4996)
//double fun(int  n)
//{
//	int i;
//	double s = 1.0, an = 1.0;
//	for (i = 2; i <= n; i++)
//	{
//		an = an + sqrt(i);
//		s += an;
//	}
//	return s;
//}
//main()
//{
//	int  n;    double  s;
//	void NONO();
//	printf("\n\nInput n:  ");  scanf("%d", &n);
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

void fun(int array[3][3])
{
	int i, j, an[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			an[j][i] = array[i][j];
		}
	}
	int i, j, an[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			array[i][j] = an[i][j];
		}
	}
}

main()
{
	int i, j;
	int array[3][3] = { {100,200,300},
					{400,500,600},
					{700,800,900} };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%7d", array[i][j]);
		printf("\n");
	}
	fun(array);
	printf("Converted array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%7d", array[i][j]);
		printf("\n");
	}
	getchar();
}
