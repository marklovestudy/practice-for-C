//#define _CRT_SECURE_NO_WARNINGS 1
//
//求1234组成的不重合的数，存入数组xxx中。
//#include <stdio.h>
//#define max 100
//
//int fun(int xxx[])
//{
//	int bai, shi, ge, k = 0;
//	for (bai = 1; bai < 5; bai++)
//	{
//		for (shi = 1; shi < 5; shi++)
//		{
//			if (shi == bai) continue;
//			for (ge = 1; ge < 5; ge++)
//			{
//				if (ge == shi || ge == bai) continue;
//				xxx[k++] = bai * 100 + shi * 10 + ge;
//			}
//		}
//
//	}
//	return k;
//}
//int main()
//{
//	int xx[max], cnt;
//	void NONO(int xx[], int cnt);
//
//	cnt = fun(xx);
//	printf("符合条件的个数=%d\n", cnt);
//	NONO(xx, cnt);
//	return 0;
//}
//
//void NONO(int xx[], int cnt)
//{
//	int i;
//	FILE* fp;
//
//	fp = fopen("..\\..\\out.dat", "w");
//	fprintf(fp, "%d\n", cnt);
//	for (i = 0; i < cnt; i++)
//		fprintf(fp, "%d\n", xx[i]);
//	fclose(fp);
//}
//
//找最小值时返回0，最大值时返回1，并把他们与首元素交换
//#include <stdio.h>
//#include <stdlib.h>
//#define N 10
//#pragma warning (disable:4996)
//void NONO(FILE* fp, int pd[], int n);
//
//void fun(int* dp, int n, int upordown)
//{
//	int i, dorx;
//	dorx = 0;
//	if (upordown == 0)
//	{
//		for (i = 1; i < n; i++)
//			if (dp[dorx] > dp[i]) dorx = i;
//	}
//	else
//	{
//		for (i = 1; i < n; i++)
//			if (dp[dorx] < dp[i]) dorx = i;
//	}
//
//	i = dp[0];
//	dp[0] = dp[dorx];
//	dp[dorx] = i;
//
//
//}
//
//void display(int pd[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%4d", pd[i]);
//	printf("\n");
//}
//void main()
//{
//	int data[N], i, n = N;
//	FILE* out;
//
//	out = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < N; i++)
//		data[i] = rand() % 90 + 10;
//	for (i = 0; i < N - 1; i++)
//		fun(data + i, n - i, 0);
//	display(data, n);
//	NONO(out, data, n);
//	for (i = 0; i < N; i++)
//		data[i] = rand() % 90 + 10;
//	for (i = 0; i < N - 1; i++)
//		fun(data + i, n - i, 1);
//	display(data, n);
//	NONO(out, data, n);
//	fclose(out);
//}
//void NONO(FILE* fp, int pd[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		fprintf(fp, "%4d", pd[i]);
//	fprintf(fp, "\n");
//
//}
//
//主对角钱*2，副对角钱*3，存入数组中。
//#include <stdio.h>
//#define N  3
//#pragma warning(disable:4996)
//void NONO( );
//
//void fun( int a[N][N],int *p)
//{
//    int i;
//    for(i=0;i<N;i++){
//        p[i]=a[i][i]*2;
//        p[N+i]=a[i][N-1-i]*3;
//    }
//}
//main()
// {   int a[N][N]={ 1,5,7,2,6,8,3,4,9};
//     int b[2*N],i;
//     fun(a,b);
//     for(i=0;i<2*N;i++)
//            printf("%d,",b[i]);
//     NONO();
//}
//
//void NONO( )
//{   int a[N][N];
//     int b[2*N],i,j,k;
//     FILE *rf, *wf;
//
//     rf = fopen("..\\..\\in.dat","r") ;
//     wf = fopen("..\\..\\out.dat","w") ;
//     for(k=0; k<9;k++) {
//           for(i=0;i<N;i++)
//                for(j=0;j<N;j++)
//                     fscanf(rf,"%d,",&a[i][j]);
//         fun(a,b);
//         for(i=0;i<2*N;i++)
//              fprintf(wf, "%d,",b[i]);
//         fprintf(wf, "\n");
//     }
//     fclose(rf);
//     fclose(wf);
//}
//
//把一个偶数刚好可以被分成二个素数的和，刚好可以分10次不重复的偶数存入数组
//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
//
//int prime(int n)
//{
//	int k, flag = 1;
//	for (k = 2; k <= (int)sqrt((double)n); k++)
//		if (n % k == 0)
//			flag = 0;
//	return flag;
//}
//int fun(int m, int a[])
//{
//	int k, s, count, i = 0;
//	for (k = 6; k <= m; k += 2)
//	{
//		count = 0;
//		/* 请在此处填写代码 */
//
//
//
//		if (count == 10) {
//			printf("%d\n", k);
//			a[i++] = k;
//		}
//	}
//	return i;
//}
//main()
//{
//	int count, a[100];
//	void NONO(int count, int a[]);
//	count = fun(999, a);
//	NONO(count, a);
//}
//
//void NONO(int count, int a[])
//{
//	FILE* fp;
//	int i;
//	fp = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < count; i++)
//		fprintf(fp, "%d\n", a[i]);
//	fclose(fp);
//}
//
//被e整除的数整除主函数返回，元素个数num返回。
//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int fun(int x[], int n, int e, int* num)
//{
//	int i, s = 0;
//	*num = 0;
//	for (i = 0; i < n; i++)
//		if (x[i] % e == 0)
//		{
//			s += x[i]; (*num)++;
//		}
//	return s;
//}
//
//
//int main()
//{
//	void NONO();
//	int x[] = { 1, 9, 8, 6, 12 }, num = 0, sum;
//	sum = fun(x, 5, 3, &num);
//	printf("sum=%d,num=%d\n", sum, num);
//	NONO();
//	return 0;
//}
//
//void NONO()
//{
//	int x[100] = { 1, 9, 8, 6, 12 }, num, sum, i, j, count, e;
//	FILE* rf, * wf;
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		num = 0;
//		sum = 0;
//		fscanf(rf, "%d,", &count);
//		for (j = 0; j < count; j++)
//			fscanf(rf, "%d,", &x[j]);
//		fscanf(rf, "%d,", &e);
//		sum = fun(x, count, e, &num);
//		fprintf(wf, "sum=%d,num=%d\n", sum, num);
//	}
//	fclose(rf);
//	fclose(wf);
//}
//
//求1000以内的完全平方数，这个数+100和+268开方后都是整数。
//#include <stdio.h>
//#include <math.h>
//
//int fun(long n)
//{
//	float y1, y2 = 0;//用于计算
//	y1 = sqrt(n + 100);//获取n+100后开方的值
//	y2 = sqrt(n + 268);//获取n+268后开方的值
//	if ((int)y1 == y1 && (int)y2 == y2)//判断y1,y2是否为整数
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	long i;
//	FILE* fp = fopen("..\\..\\out.dat", "w");
//
//	for (i = 1; i < 10000; i++)
//	{
//		if (fun(i))
//		{
//			printf("%ld\n", i);
//			fprintf(fp, "%ld\n", i);
//		}
//	}
//	return 0;
//}
//
//把s0中的字符1 4 ..存入s1,2,5...存入s2,3,6...存入s3中
//#include <stdio.h>
//#include <string.h>
//void fun(char* s0, char* s1, char* s2, char* s3)
//{
//	int i;
//	for (i = 0; *(s0 + i); i++)
//	{
//		if (i % 3 == 0) *s1++ = *(s0 + i);
//		if (i % 3 == 1) *s2++ = *(s0 + i);
//		if (i % 3 == 2) *s3++ = *(s0 + i);
//	}
//	*s1 = *s2 = *s3 = 0;
//}
//void main()
//{
//	void NONO();
//	char  s0[100], s1[40], s2[40], s3[40];
//	printf("请输入一行字符串\n");
//	gets(s0);
//	fun(s0, s1, s2, s3);
//	puts(s1);
//	puts(s2);
//	puts(s3);
//	NONO();
//}
//void NONO()
//{
//	FILE* fp = fopen("..\\..\\out.dat", "w");
//	char s0[10][100] = { "1234567890qazwsx","abcdefghij","0987654321plmokn","fsdjfsdlrj564342dsf",
//	"gfdklgjdsfl4754398","zxcvbnmasdfg","asdfghjkl123","qwertyuiop456","qweasdzxc789",
//	"poiuytrewqwsxqaz" };
//	char s1[40], s2[40], s3[40];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		fun(s0[i], s1, s2, s3);
//		fprintf(fp, "s1=%s,s2=%s,s3=%s\n", s1, s2, s3);
//	}
//	fclose(fp);
//}
//


//把数组中的偶数用'.'连接。
//#include <stdio.h>
//#include <string.h>
//
///* 函数int_to_str的功能是将参数n中的整数转换成字符串，存入s指内存中 */
//void int_to_str(int n, char* s)
//{
//	*s = n + '0';
//}
//
//char* fun(int x[], int n)
//{
//	static char str[200], s[10];
//	int i,j;
//	/* 请在这里填入你编写的代码*/
//	char* str1 = str;
//	for (i = 0; i < n; i++)
//	{
//		if (x[i] % 2 == 0)
//		{
//			int tem = x[i],n=0;
//			char s[10];
//			char* p;
//			p = s;
//			while (tem)
//			{
//				int t = tem % 10;
//				int_to_str(t, p);
//				p++;
//				n++;
//				tem /= 10;
//			}
//			for (j =n; j >= 0; j--)
//			{
//				*str1 = s[j];
//				str1++;
//			}
//			*str1 = '.';
//			str1++;
//		}
//	}
//	return str;
//}
//
//int main()
//{
//	//void NONO();
//	int x[] = { 1,4,19,82,61,2 };
//	printf("str=%s\n", fun(x, 6));
//	//NONO();
//	return 0;
//}

//void NONO()
//{
//	int i;
//	int x[10][20] = { {11,5,6,8,9,18,54},{1,4,19,82,61,2},
//	{87,78,54,32},{9,1,2,3,4,67,8,12},
//	{91,12,33,55,66},{9,7,8,5,6,4,3,2,1,12},
//	{12,13,14,15,11,16,17,18},{21,23,22,24,25,26,27,28,29},
//	{33,32,31,41,42,43,51,42,53,54,66},{71,72,81,82,91,92} };
//	int y[10] = { 7,6,4,8,5,10,8,9,11,6 };
//	FILE* fp;
//
//	fp = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++)
//		fprintf(fp, "str=%s\n", fun(x[i], y[i]));
//	fclose(fp);
//
//}

//把二维数据上三角和下三角更换位置。
//#include<stdio.h>
//#define N 7
//void change(int p[][N], int n)
//{
//	int i, j,tem;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i+1; j < n; j++)
//		{
//			if (i != j)
//			{tem = p[i][j];
//			p[i][j] = p[j][i];
//			p[j][i] = tem;}
//			
//		}
//	}
//}
//main()
//{
//	//void NONO();
//	int i, j;
//	int a[N][N] = {
//	{11,12,13,14,15,16,17},
//	{21,22,23,24,25,26,27},
//	{31,32,33,34,35,36,37},
//	{41,42,43,44,45,46,47},
//	{51,52,53,54,55,56,57},
//	{61,62,63,64,65,66,67},
//	{71,72,73,74,75,76,77}
//	};
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%4d", a[i][j]);
//		printf("\n");
//	}
//	change(a, N);
//	printf("对调后的二维数组:\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%4d", a[i][j]);
//		printf("\n");
//	}
//	//NONO();
//}
//void NONO()
//{
//	FILE* fpin, * fpout;
//	int i, j;
//	int a[N][N];
//	fpin = fopen("..\\in.dat", "r");
//	fpout = fopen("..\\out.dat", "w");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			fscanf(fpin, "%d", &a[i][j]);
//	change(a, N);
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			fprintf(fpout, "%d ", a[i][j]);
//		fprintf(fpout, "\n");
//	}
//	fclose(fpout);
//	fclose(fpin);
//}