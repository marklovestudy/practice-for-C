#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
//#define N 3
//#define M 5

//void fun(int a[N][M],int k)
//{
//	int i,j,c,tem;
//	//移动前
//	for (j = 0; j < N; j++)
//	{
//		for (c = 0; c < M; c++)
//		{
//			printf("%d ", a[j][c]);
//		}
//		printf("\n");
//	}
//	//移动
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			for (c = 0; c < M-1; c++)
//			{
//				tem = a[j][c];
//				a[j][c] = a[j][c + 1];
//				a[j][c + 1] = tem;
//			}
//		}
//	}
//
//	//移动后
//	for (j = 0; j < N; j++)
//	{
//		for (c = 0; c < M ; c++)
//		{
//			printf("%d ",a[j][c]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a[N][M] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} };
//	int k;
//	scanf("%d", &k);
//	fun(a,k);
//	return 0;
//}

//统计存储字符串中ascii码小于97的字符
#include<string.h>

//int fun(char* s, char* t)
//{
//	int sz = strlen(s);
//	int i, count=0;
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] < 97)
//		{
//			t[count] = s[i];
//			count++;
//		}
//	}
//	t[count] = 0;
//	return count;
//}
//
//int main()
//{
//	char s[80],t[80];
//	gets(s);
//	int re = fun(s,t);
//	printf("%s   %d\n", t,re);
//	return 0;
//}

//int fun(char* s, char* t)
//{
//    int  n = 0;
//    while (*s)
//    {
//        if (*s < 97) {
//            /**********found**********/
//            *(t + n) = *s;  n++;
//        }
//        /**********found**********/
//        s++;
//    }
//    *(t + n) = 0;
//    /**********found**********/
//    return  n;
//}
//main()
//{
//    char  s[81], t[81];    int  n;
//    printf("\nEnter a string:\n");  gets(s);
//    n = fun(s, t);
//    printf("\nThere are %d letter which ASCII code is less than 97: %s\n", n, t);
//    getchar();
//}


//求数字字符累加和
//int fun(char* s)
//{
//	int sum = 0;
//	while (*s)
//	{
//		if (isdigit(*s))
//		{
//			sum += *s - '0';
//		}
//		s++;
//	}
//	return sum;
//}
//
//int main()
//{
//	char s[81];
//	printf("请输入一个字符：");
//	gets(s);
//	int re = fun(s);
//	printf("最后求和为：%d", re);
//	return 0;
//}


//统计字符串中频率最高的字符。
//fun(char* s)
//{
//	int st[26] = {0};
//	int sz = strlen(s);
//	int i,n,max=0;
//	for (i = 0; i < sz; i++)
//	{
//		if (isalpha(s[i]))
//		{
//			n = s[i] - 'a';
//			st[n] += 1;
//		}
//	}
//	for (i = 0; i < 26; i++)
//	{
//		if (max < st[i])
//		{
//			max = st[i];
//		}
//	}
//	for (i = 0; i < 26; i++)
//	{
//		if (max == st[i])
//		{
//			printf("%c    %d\n", i + 'a', max);
//		}
//	}
//}
//
//int main()
//{
//	char s[81];
//	printf("请输入一个字符：");
//	gets(s);
//	fun(s);
//	return 0;
//}

//删除字符串数组中超过长度的字符串。
#define N 8
#define M 10

int fun(char(*ss)[M], int  k)
{
	int  i, j = 0, len;
	/**********found**********/
	for (i = 0; i < N; i++)
	{
		len = strlen(ss[i]);
		/**********found**********/
		if (len <= k)
			/**********found**********/
			strcpy(ss[j++], ss[i]);
	}
	return  j;
}
main()
{
	char  x[N][M] = { "mark","weiwei","dafei","xigua","zhanglaos","lingling","chenglao","huichang" };
	int  i, f;
	printf("\nThe original string\n\n");
	for (i = 0; i < N; i++)puts(x[i]);  printf("\n");
	f = fun(x, 7);
	printf("The string witch length is less than or equal to 7 :\n");
	for (i = 0; i < f; i++)  puts(x[i]); printf("\n");
	getchar();
}

