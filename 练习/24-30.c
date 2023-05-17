#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define  N  5
#include<math.h>

//把结构体数据写入另一个结构体数据中，并修改其学号和名字。
//typedef struct student
//{
//	int sno;
//	char name[20];
//	int score[3];
//}STU;
//
//void fun(STU a, STU b)
//{
//	b = a;
//	b.sno = 1002;
//	//strcpy(b.name,"weiwei");		//修改字符串
//	scanf("%s", b.name);			//修改字符串
//	printf("sno=%d  name=%s  score:", b.sno, b.name);
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", b.score[i]);
//	}
//}
//
//int main()
//{
//	STU a = { 1001,"mark",56,77,88 };
//	STU b = {0,"fd",55,55,55};
//	fun(a,b);
//	return 0;
//}

//struct student {
//	long  sno;
//	char  name[10];
//	float  score[3];
//};
//void fun(struct  student  a)
//{
//	struct student  b;    int  i;
//	/**********found**********/
//	b = a;
//	b.sno = 10002;
//	/**********found**********/
//	strcpy(b.name, "LiSi");
//	printf("\nThe data after modified :\n");
//	printf("\nNo: %ld  Name: %s\nScores:  ", b.sno, b.name);
//	/**********found**********/
//	for (i = 0; i < 3; i++)  printf("%6.2f ", b.score[i]);
//	printf("\n");
//}
//main()
//{
//	struct student  s = { 10001,"ZhangSan", 95, 80, 88 };
//	int  i;
//	printf("\n\nThe original data :\n");
//	printf("\nNo: %ld  Name: %s\nScores:  ", s.sno, s.name);
//	for (i = 0; i < 3; i++)  printf("%6.2f ", s.score[i]);
//	printf("\n");
//	fun(s);
//	getchar();
//}
//
// 
// 把目标学号的同学各科分数+3
//typedef struct student
//{
//	int sno;
//	char name[20];
//	int score[3];
//}STU;
//
//void fun(char *c,STU ss[N],int no1)
//{
//	FILE* fp;
//	fp = fopen(c, "rb");
//	fread(ss, sizeof(STU), N, fp);
//	fclose(fp);
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		if (no1 == ss[i].sno)
//		{
//			int j;
//			for (j = 0; j < 3; j++)
//			{
//				ss[i].score[j] += 3;
//			}
//		}
//	}
//	fp = fopen(c, "wb");
//	fwrite(ss, sizeof(STU), N, fp);
//	fclose(fp);
//	fp = fopen(c, "rb");
//	for (i = 0; i < N; i++)
//	{
//		printf("sno=%d  name=%s  score:", ss[i].sno, ss[i].name);
//		int j;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", ss[i].score[j]);
//		}
//		printf("\n\n");
//	}
//}
//
//int main()
//{
//	STU  t[N] = { {10001,"MaChao", 91, 92, 77}, {10002,"CaoKai", 75, 60, 88},
//			 {10003,"LiSi", 85, 70, 78},  {10004,"FangFang", 90, 82, 87},
//			 {10005,"ZhangSan", 95, 80, 88} }, ss[N];
//	FILE* fp;
//	int sno1;
//	fp = fopen("student.dat", "wb");
//	fwrite(t, sizeof(STU), N, fp);
//	fclose(fp);
//	scanf("%d", &sno1);
//	fun("student.dat",ss,sno1);
//	return 0;
//}

//#include  <stdio.h>
//#define    N  5
//typedef struct  student {
//    long  sno;
//    char  name[10];
//    float  score[3];
//} STU;
//void fun(char* filename, long  sno)
//{
//    FILE* fp;
//    STU  n;      int  i;
//    fp = fopen(filename, "rb+");
//    /**********found**********/
//    while (!feof(fp))
//    {
//        fread(&n, sizeof(STU), 1, fp);
//        /**********found**********/
//        if (n.sno == sno)  break;
//    }
//    if (!feof(fp))
//    {
//        for (i = 0; i < 3; i++)  n.score[i] += 3;
//        /**********found**********/
//        fseek(fp, -(long)sizeof(STU), SEEK_CUR);
//        fwrite(&n, sizeof(STU), 1, fp);
//    }
//    fclose(fp);
//}
//main()
//{
//    STU  t[N] = { {10001,"MaChao", 91, 92, 77}, {10002,"CaoKai", 75, 60, 88},
//              {10003,"LiSi", 85, 70, 78},  {10004,"FangFang", 90, 82, 87},
//              {10005,"ZhangSan", 95, 80, 88} }, ss[N];
//    int  i, j;      FILE* fp;
//    fp = fopen("student.dat", "wb");
//    fwrite(t, sizeof(STU), N, fp);
//    fclose(fp);
//    printf("\nThe original data :\n");
//    fp = fopen("student.dat", "rb");
//    fread(ss, sizeof(STU), N, fp);
//    fclose(fp);
//    for (j = 0; j < N; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
//        for (i = 0; i < 3; i++) printf("%6.2f ", ss[j].score[i]);
//        printf("\n");
//    }
//    fun("student.dat", 10003);
//    fp = fopen("student.dat", "rb");
//    fread(ss, sizeof(STU), N, fp);
//    fclose(fp);
//    printf("\nThe data after modifing :\n");
//    for (j = 0; j < N; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", ss[j].score[i]);
//        printf("\n");
//    }
//    getchar();
//}

//long fun(long* n)
//{
//	int x = *n,t=0,i=0;
//	while (x)
//	{
//		if(x%10%2==1)
//		{
//			t = t  + x % 10*pow(10,i);
//			i++;
//		}
//		x /= 10;
//	}
//	*n = t;
//	return *n;
//}
//
//int main()
//{
//	long x;
//	scanf("%d", &x);
//	long re = fun(&x);
//	printf("%ld", re);
//	return 0;
//}
//
// 输出一个整数的所有奇数位，从高到位排列
//#include  <stdio.h>
//void fun(unsigned long* n)
//{
//	unsigned long  x = 0, i;    int  t;
//	i = 1;
//	while (*n)
//		/**********found**********/
//	{
//		t = *n % 10;
//		/**********found**********/
//		if (t % 2 != 0)
//		{
//			x = x + t * i;  i = i * 10;
//		}
//		*n = *n / 10;
//	}
//	/**********found**********/
//	*n = x;
//}
//main()
//{
//	unsigned long  n = -1;
//	while (n > 99999999 || n < 0)
//	{
//		printf("Please input(0<n<100000000): "); scanf("%ld", &n);
//	}
//	fun(&n);
//	printf("\nThe result is: %ld\n", n);
//	getchar();
//}


//求平均值，并输出小于平均值的最小项
//int fun(int s[10],double *v)
//{
//	int sz = 10;
//	printf("%d", sz);
//	int i,k=0;
//	double sum = 0;
//	for (i = 0; i < sz; i++)
//	{
//		sum += s[i];
//	}
//	*v = sum / sz;
//	double min = *v ;
//	for (i=0;i<sz;i++)
//	{
//		if (((*v - s[i]) < min) && s[i] < *v)
//		{
//			min = *v - s[i];
//			k = i;
//		}
//	}
//	return s[k];
//}
//
//int main()
//{
//	int s[10] = { 46,30,32,40,6,17,45,15,48,26 };
//	double av = 0.0;
//	double* v=&av;
//	int re = fun(s,v);
//	printf("小于且最接近%.2f的数是%d", *v, re);
//}


//把二维数组中的每列最大数放入一维数组中。
//void fun(int a[N][N], int b[N])
//{
//	int i, j;
//	for (j = 0; j < N; j++)
//	{
//		int max = a[0][j];
//		for (i=0;i<N;i++)
//		{
//			if (a[i][j]>max)
//			{
//				max = a[i][j];
//			}
//		}
//		b[j] = max;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}
//
//int main()
//{
//	int a[N][N] = { {1,2,3,4,5},{6,7,8,9,10},{21,32,4,5,6},{11,22,33,44,5},{7,6,5,4,8} };
//	int b[N] = { 0 };
//	fun(a, b);
//	return 0;
//}


//输出一个NN的二维数组，从外向内数，写出每个位置的层数。
//fun(int a[N][N])
//{
//	int r, c;
//	int n = N/2;
//	int nn=0;
//	while (n+1)
//	{
//		for (r = nn; r < N-nn; r++)
//		{
//			for (c = nn; c < N-nn; c++)
//			{
//				a[r][c] += 1;
//			}
//		}
//		n--;
//		nn++;
//	}
//	for (r = 0; r < N; r++)
//	{
//		for (c = 0; c < N; c++)
//		{
//			printf("%d ", a[r][c]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a[N][N] = { 0 };
//	fun(a);
//	return 0;
//}

//#include  <stdio.h>
//#define   N   7
///**********found**********/
//void fun(int(*a)[N])
//{
//    int  i, j, k, m;
//    if (N % 2 == 0) m = N / 2;
//    else       m = N / 2 + 1;
//    for (i = 0; i < m; i++) {
//        /**********found**********/
//        for (j = i; j < N - i; j++)
//            a[i][j] = a[N - i - 1][j] = i + 1;
//        for (k = i + 1; k < N - i; k++)
//            /**********found**********/
//            a[k][i] = a[k][N - i - 1] = i + 1;
//    }
//}
//main()
//{
//    int  x[N][N] = { 0 }, i, j;
//    fun(x);
//    printf("\nThe result is:\n");
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)  printf("%3d", x[i][j]);
//        printf("\n");
//    }
//    getchar();
//}

//unsigned long fun(unsigned long n)
//{
//	long tem = n;
//	long re = 0;
//	while (tem)
//	{
//		if (tem % 10 % 2 == 0)
//		{
//			re = re * 10 + tem % 10;
//		}
//		tem /= 10;
//	}
//	return re;
//}
//
//int main()
//{
//	unsigned long a;
//	scanf("%ld", &a);
//	unsigned long re = fun(a);
//	printf("%ld", re);
//	return 0;
//}
//
//#include  <stdio.h>
//unsigned long fun(unsigned long  n)
//{
//	unsigned long  x = 0;    int  t;
//	while (n)
//	{
//		t = n % 10;
//		/**********found**********/
//		if (t % 2 == 0)
//			/**********found**********/
//			x = x * 10 + t;
//		/**********found**********/
//		n = n / 10;
//	}
//	return  x;
//}
//main()
//{
//	unsigned long  n = -1;
//	while (n > 99999999 || n < 0)
//	{
//		printf("Please input(0<n<100000000): ");  scanf("%ld", &n);
//	}
//	printf("\nThe result is: %ld\n", fun(n));
//	getchar();
//}
