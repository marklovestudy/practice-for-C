#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 4
#define M 3

//void fun(int(*a)[M], int k)
//{
//	int b;
//	int j;
//	for (j = 0; j < M; j++)
//	{
//		b = a[0][j];
//		a[0][j] = a[k][j];
//		a[k][j] = b;
//	}
//}
//
//int main()
//{
//	int a[N][M] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
//	int k,i,j;
//	scanf("%d", &k);
//	fun(a, k);
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int fun(int(*a)[4])
//{
//	int i, j;
//	int mi, mj;
//	for (i = 0; i < 3; i++)
//	{
//		int max = a[i][0]; 
//		mi = i;
//		mj = 0;
//		for (j = 0; j < 4; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				mi = i;
//				mj = j;
//			}
//		}
//		int b = 1;
//		for (j = 0; j < 3; j++)
//		{
//			if (mi != j)
//			{
//				if (a[mi][mj] > a[j][mj])
//				{
//					b = -1;
//					break;
//				}
//			}
//		}
//		if (b == 1)
//		{
//			return a[mi][mj];
//		}
//	}
//}
//
//int main()
//{
//	int a[3][4] = { {1,2,13,4},{7,8,10,6},{3,5,9,7} };
//	int min = fun(a);		//找出行最大，列最小的数
//	printf("%d", min);
//	return 0;
//}

//void fun(int(*a)[N])
//{
//	int  i = 0, j, find = 0, rmax, c, k;
//	while ((i < M) && (!find))
//	{
//		rmax = a[i][0];  c = 0;
//		for (j = 1; j < N; j++)
//			if (rmax < a[i][j]) {
//				/**********found**********/
//				rmax = a[i][j]; c = j;
//			}
//		find = 1; k = 0;
//		while (k < M && find) {
//			/**********found**********/
//			if (k != i && a[k][c] <= rmax)  find = 0;
//			k++;
//		}
//		if (find) printf("find: a[%d][%d]=%d\n", i, c, a[i][c]);
//		/**********found**********/
//		i++;
//	}
//	if (!find) printf("not found!\n");
//}
//main()
//{
//	int  x[M][N], i, j;
//	printf("Enter number for array:\n");
//	for (i = 0; i < M; i++)
//		for (j = 0; j < N; j++) scanf("%d", &x[i][j]);
//	printf("The array:\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++) printf("%3d", x[i][j]);
//		printf("\n\n");
//	}
//	fun(x);
//	getchar();
//}


#include<string.h>
void fun(char *s, char *t, int n)
{
	int sz = strlen(s),i,k=0;
	if (sz < n)
	{
		strcmp(t, s);
	}
	else
	{
		for (i = sz - n; i < sz; i++)
		{
			t[k] = s[i];
			k++;
		}
		t[k] = 0;
	}
}

int main()
{
	char s[80], t[80];
	int n;
	gets(s);
	scanf("%d", &n);
	fun(s, t, n);
	printf("%s\n", t);
	return 0;
}