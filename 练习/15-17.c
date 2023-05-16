#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define    N    5

//typedef struct student
//{
//	int sno;
//	char name[20];
//	int score[3];
//}STU;
//
//void fun(char *filename)
//{
//	FILE* fp;
//	fp = fopen(filename,"rb+");
//	STU ss[N];
//	fread(ss, sizeof(STU), N, fp);
//	int i;
//	printf("排序前：\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("sno=%d,name=%s,score:", ss[i].sno, ss[i].name);
//		int j;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", ss[i].score[j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//	//排序
//	for (i = 0; i < N-1; i++)
//	{
//		int j;
//		for (j = 0; j < N - i - 1; j++)
//		{
//			if (ss[j].sno > ss[j + 1].sno)
//			{
//				STU tem = ss[j];
//				ss[j] = ss[j + 1];
//				ss[j + 1] = tem;
//			}
//		}
//	}
//
//	printf("排序后：\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("sno=%d,name=%s,score:", ss[i].sno, ss[i].name);
//		int j;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", ss[i].score[j]);
//		}
//		printf("\n");
//	}
//	fseek(fp, 0, 0);
//	fwrite(ss, sizeof(STU), N, fp);
//}
//
//int main()
//{
//	STU s[N] = { {10003,"mark",45,66,78},
//	{10002,"weiwei",75,66,78},
//	{10001,"dafei",57,86,88},
//	{10005,"xigua",65,96,98},
//	{10004,"mrtc",66,76,88}, };
//	FILE* fp;
//	fp = fopen("tt.dat", "wb");
//	fwrite(s, sizeof(STU), N, fp);
//	fclose(fp);
//	fun("tt.dat");
//	return 0;
//}

//void fun(int n)
//{
//	int text = n;
//	int sum = 0;
//	while (text)
//	{
//		sum += text % 10;
//		text /= 10;
//	}
//	if (sum == 15)
//	{
//		printf("%d ", n);
//	}
//}
//
//int main()
//{
//	int x;
//	do
//	{
//		int re;
//		printf("请输入一个100-999之间的整数:\n");
//		scanf("%d", &x);
//		if (100 < x && x <= 999)
//		{
//			int i;
//			for (i = 159; i <= x; i++)
//			{
//				fun(i);
//			}
//			printf("\n");
//		}
//		else
//		{
//			printf("输出错误");
//		}
//	} while (x);
//	return 0;
//}

//int fun(int n)
//{
//	int sum = 0,i;
//	int nn = 0;
//	for (i=100;i<=999;i++)
//	{
//		sum = 0;
//		int text = i;
//		while (text)
//		{
//			sum += text % 10;
//			text /= 10;
//		}
//		if (sum == n)
//		{
//			printf("%d ", i);
//			nn += 1;
//		}
//	}
//	return nn;
//}
//
//int main()
//{
//	int x;
//	do
//	{
//		int re;
//		printf("请输入一个1-27之间的整数:\n");
//		scanf("%d", &x);
//		if (1 <= x && x <= 27)
//		{
//			re=fun(x);
//			printf("\n一共有%d个\n",re);
//		}
//		else
//		{
//			printf("输出错误");
//		}
//	} while (x);
//	return 0;
//}

//char fun(char s[])
//{
//	int i=0;
//	int sz = sizeof(s);
//	while (s[i]!="\0")
//	{
//		if ('0' <= s[i] && s[i] <= '9')
//		{
//			//把i+1到sizeof(s)-1后的所有数前进1，把最后一位换成s[i]
//			int sem = s[i];
//			int j = i+1;
//			for (j; j <= sz - 1; j++)
//			{
//				s[j - 1] = s[j];
//			}
//			s[sz - 1] = s[i];
//		}
//		i++;
//	}
//	return s;
//}
//
//int main()
//{
//	char str1[] = "asd123fgh543df";
//	char str2 = fun(str1);
//	printf("str1=%s,str2=%s\n", str1, str2);
//}

int main()
{
	char s[80];
	scanf("%s", s);
	printf("%s\n", s);
	return 0;
}