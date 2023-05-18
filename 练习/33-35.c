#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

//数字排在前面，其它排在后面
//char* fun(char* s)
//{
//	int sz = strlen(s);
//	char s1[80];
//	char s2[80];
//	int i,t=0, k=0;
//	for (i = 0; i < sz; i++)
//	{
//		if (isdigit(s[i]))
//		{
//			s1[t]=s[i];
//			t++;
//		}
//		else
//		{
//			s2[k] = s[i];
//			k++;
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		s1[t + i] = s2[i];
//	}
//	s1[t + k] = '\0';		//给新的字符串一个结束标志。
//	return s1;
//}
//
//int main()
//{ 
//	char s[80];
//	gets(s);
//	char *re=fun(s);
//	printf("%s",re);
//	return 0;
//}

//char* fun(char* s)
//{
//	int sz = strlen(s),i,k=0,j=0;
//	char* t, * p;
//	t = (char*)malloc(sz * sizeof(char));
//	p = (char*)malloc(sz * sizeof(char));
//	for (i = 0; i < sz; i++)
//	{
//		if (isdigit(s[i]))
//		{
//			t[j] = s[i];
//			j++;
//		}
//		else
//		{
//			p[k] = s[i];
//			k++;
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		t[j + i] = p[i];
//	}
//	t[j + k] = 0;
//	return t;
//}
//
//int main()
//{ 
//	char s[80];
//	gets(s);
//	char *re=fun(s);
//	printf("%s",re);
//	return 0;
//}

//创建一个20个不相同的随机数的数组
//fun(int *a)
//{
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		int n,j;
//		aa: n = rand() % 20;
//		for (j=0;j<i;j++)
//			if (a[j]==n)
//			{
//				goto aa;
//			}
//		a[i] = n;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int a[20] = { 0 };
//	fun(&a);
//	return 0;
//}

//#define   N  20
//void  fun(int* a)
//{
//    int  i, x, n = 0;
//    x = rand() % 20;
//    /**********found**********/
//    while (n < 20)
//    {
//        for (i = 0; i < n; i++)
//            /**********found**********/
//            if (x == a[i]) break;
//        /**********found**********/
//        if (i == n) { a[n] = x; n++; }
//        x = rand() % 20;
//    }
//}
//main()
//{
//    int  x[N] = { 0 }, i;
//    fun(x);
//    printf("The result :  \n");
//    for (i = 0; i < N; i++)
//    {
//        printf("%4d", x[i]);
//        if ((i + 1) % 5 == 0)printf("\n");
//    }
//    printf("\n\n");
//    getchar();
//}

//#define N 3
//int fun(int a[N][N])
//{
//	int i, j;
//	//判断行
//	int sum = a[0][0] + a[0][1] + a[0][2];
//	for (i = 0; i < N; i++)
//	{
//		if (a[i][0]+a[i][1]+a[i][2] != sum)
//		{
//			return 0;
//		}
//	}
//	//判断列
//	for (j = 0; j < N; j++)
//	{
//		if (a[0][j] + a[1][j] + a[2][j] != sum)
//		{
//			return 0;
//		}
//	}
//	//判断对角线
//	if (a[0][0]+a[1][1]+a[2][2] != sum || a[2][0] + a[1][1] + a[0][2] != sum)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a[N][N] = { {4,9,2},{3,5,7},{8,1,6} };
//	int re=fun(a);
//	if (re == 1)
//	{
//		printf("是幻方。\n");
//	}
//	else if (re == 0)
//	{
//		printf("不是幻方。\n");
//	}
//	return 0;
//}

//int fun(int(*a)[N])
//{
//    int  i, j, m1, m2, row, colum;
//    m1 = m2 = 0;
//    for (i = 0; i < N; i++)
//    {
//        j = N - i - 1;  m1 += a[i][i];  m2 += a[i][j];
//    }
//    if (m1 != m2) return  0;
//    for (i = 0; i < N; i++) {
//        /**********found**********/
//        row = colum = 0;
//        for (j = 0; j < N; j++)
//        {
//            row += a[i][j];  colum += a[j][i];
//        }
//        /**********found**********/
//        if ((row != colum) || (row != m1)) return 0;
//    }
//    /**********found**********/
//    return  1;
//}
//main()
//{
//    int  x[N][N], i, j;
//    printf("Enter number for array:\n");
//    for (i = 0; i < N; i++)
//        for (j = 0; j < N; j++)  scanf("%d", &x[i][j]);
//    printf("Array:\n");
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)  printf("%3d", x[i][j]);
//        printf("\n");
//    }
//    if (fun(x)) printf("The Array is a magic square.\n");
//    else printf("The Array isn't a magic square.\n");
//    getchar();
//}

