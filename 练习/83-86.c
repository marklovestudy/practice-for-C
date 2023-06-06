#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#define N 6

//结构体，输出大于平均数的学号，把学号存入p数组中。
typedef struct student
{
	char sno[20];
	int score;
}STU;

//int fun(STU a[N],STU p[N])
//{
//	int i,j=0;
//	double av = 0;
//	for (i=0;i<N;i++)
//	{
//		av += a[i].score;
//	}
//	av = av / N;
//	for (i = 0; i < N; i++)
//	{
//		if (a[i].score > av)
//		{
//			p[j++] = a[i];
//		}
//	}
//	return j;
//}
//
//int main()
//{
//	STU a[N] = { "z100",78,"z101",92,"z102",77,"z103",87,"z104",66,"z105",85 };
//	STU p[N];
//	int n= fun(a,p);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s:%d ", p[i].sno, p[i].score);
//	}
//	printf("\n\n%d", n);
//	return 0;
//}

//typedef struct
//{
//    char num[5];
//    double s;
//} STU;
//
//int fun(STU x[N], char p[][5])
//{
//    int n = 0, i;
//    double ave = 0.0;
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        ave += x[i].s;
//    ave /= N;
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (x[i].s > ave)
//        {
//            strcpy(p[n], x[i].num);
//            /**********found**********/
//            n++;
//        }
//    return(n);
//}
//main()
//{
//    int i, k;
//    STU a[N] = { "z100",78,"z101",92,"z102",77,"z103",87,"z104",66,"z105",85 };
//    char b[N][5];
//    k = fun(a, b);
//    for (i = 0; i < k; i++)
//        puts(b[i]);
//}

//int fun(STU *x, char (*p)[5])
//{
//    int n = 0, i;
//    double ave = 0.0;
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        ave += (x + i)->score;
//    ave /= N;
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if ((x+i)->score > ave)
//        {
//            strcpy(p[n], (x+i)->sno);
//            /**********found**********/
//            n++;
//        }
//    return(n);
//}
//main()
//{
//    int i, k;
//    STU a[N] = { "z100",78,"z101",92,"z102",77,"z103",87,"z104",66,"z105",85 };
//    char b[N][5];
//    k = fun(a, b);
//    for (i = 0; i < k; i++)
//        puts(b[i]);
//}

//计算标准差(每一次-平均数)的平方和的平均数再开方。
//double fun(double a[12], int sz)
//{
//	double av = 0;
//	int i;
//	double bav = 0;
//	for (i = 0; i < 12; i++)
//	{
//		av += a[i];
//	}
//	av /= 12;
//	for (i = 0; i < 12; i++)
//	{
//		bav += (a[i] - av) * (a[i] - av);
//	}
//	bav /= 12;
//	bav = sqrt(bav);
//	return bav;
//}
//
//int main()
//{
//	double score[12] = { 50,60,70,80,90,100,55,65,75,85,95,99 };
//	double aa;
//	aa = fun(score, 12);
//	printf("%lf", aa);
//	return 0;
//}

//求偶数和-奇数和。
//int fun(int a[], int sz)
//{
//	int i;
//	int sum_1 = 0, sum_2 = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (i % 2 == 0) sum_2 += a[i];
//		else if (i % 2 == 1) sum_1 += a[i];
//	}
//	return sum_2 - sum_1;
//}
//
//int main()
//{
//	int a[100], n, i;
//	printf("请输入整数序列的长度：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int d = fun(a,n);
//	printf("%d ", d);
//	return 0;
//}

//输入一个数，把这个数逆向输出
int fun(int n)
{
	int a = n;
	int re=0,i,j;
	if (a < 0)
	{
		while (abs(a))
		{
			re = re * 10 + abs(a) % 10;
			a /= 10;
		}
		re = -re;
	}
	else
	{
		while (abs(a))
		{
			re =re*10+a % 10;
			a /= 10;
		}
	}
	return re;
}

int main()
{
	int n;
	scanf("%d", &n);
	int re = fun(n);
	printf("输入：%d,则输出：%d", n, re);
	return 0;
}