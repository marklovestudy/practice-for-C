#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 5
#define M 15


//在指定字符串数组中找字符串的位置。
//int fun(char ss[N][M], char substr[M])
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		if (strstr(ss[i],substr)!=NULL)
//			return i;
//	}
//	return 0;
//}
//
//int main()
//{
//	char a[N][M] = { "BASIC","C langwage","Java","QBASIC","Access" };
//	char b[M];
//	gets(b);
//	int re=fun(a, b);
//	if (re == 0) printf("没有\n");
//	else printf("有，在%d的位置\n", re);
//	return 0;
//}

//void fun(char(*ss)[M], char* substr)
//{
//    int  i, find = 0;
//    /**********found**********/
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (strstr(ss[i], substr) != NULL)
//        {
//            find = 1;  puts(ss[i]);  printf("\n");
//        }
//    /**********found**********/
//    if (find == 0) printf("\nDon't found!\n");
//}
//main()
//{
//    char  x[N][M] = { "BASIC","C langwage","Java","QBASIC","Access" }, str[M];
//    int  i;
//    printf("\nThe original string\n\n");
//    for (i = 0; i < N; i++)puts(x[i]);  printf("\n");
//    printf("\nEnter a string for search :  ");  gets(str);
//    fun(x, str);
//    getchar();
//}

//删除字符串数组中元素大于k的长度部分。

//void fun(char(*ss)[M], int k)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		if (strlen(ss[i]) > k)
//		{
//			ss[i][k] = 0;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%s ", ss[i]);
//	}
//}
//
//int main()
//{
//	char a[N][M]= { "Create","Modify","Sort","skip","Delete" };
//	int k;
//	scanf("%d", &k);
//	fun(a, k);
//	return 0;
//}

//void fun(char(*ss)[M], int  k)
//{
//    int  i = 0;
//    /**********found**********/
//    while (i < N) {
//        /**********found**********/
//        ss[i][k] = 0;  i++;
//    }
//}
//main()
//{
//    char  x[N][M] = { "Create","Modify","Sort","skip","Delete" };
//    int  i;
//    printf("\nThe original string\n\n");
//    for (i = 0; i < N; i++)puts(x[i]);  printf("\n");
//    fun(x, 4);
//    printf("\nThe string after deleted :\n\n");
//    for (i = 0; i < N; i++)  puts(x[i]);  printf("\n");
//    getchar();
//}


//按姓名的字典序排列结构体数据
//typedef struct student
//{
//	int sno;
//	char name[20];
//	int score[3];
//}STU;
//
//void fun(STU s[4])
//{
//	int i, j;
//	for (i = 0; i < 4-1; i++)
//	{
//		for (j = 0;j<4-i-1;j++)
//		if (s[j].name[0] > s[j + 1].name[0])
//		{
//			STU tem = s[j];
//			s[j] = s[j+ 1];
//			s[j + 1] = tem;
//		}
//	}
//}
//
//int main()
//{
//	STU s[4] = { {10001,"ZhangSan", 95, 80, 88},{10002,"LiSi", 85, 70, 78},
//					{10003,"CaoKai", 75, 60, 88}, {10004,"FangFang", 90, 82, 87} };
//	printf("排序前：\n");
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("sno:%d    name:%s    score:", s[i].sno, s[i].name);
//		int j;
//		for (j = 0; j < 3; j++) printf("%d ", s[i].score[j]);
//		printf("\n");
//	}
//	fun(s);
//	printf("排序后：\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("sno:%d    name:%s    score:", s[i].sno, s[i].name);
//		int j;
//		for (j = 0; j < 3; j++) printf("%d ", s[i].score[j]);
//		printf("\n");
//	}
//	return 0;
//}

//void fun(struct student  a[], int  n)
//{
//    /**********found**********/
//    struct student t;
//    int  i, j;
//    /**********found**********/
//    for (i = 0; i < n - 1; i++)
//        for (j = i + 1; j < n; j++)
//            /**********found**********/
//            if (strcmp(a[i].name, a[j].name) > 0)  //每次把最小值放在当前排的位置：选择排序
//            {
//                t = a[i];   a[i] = a[j];  a[j] = t;
//            }
//}
//main()
//{
//    struct student  s[4] = { {10001,"ZhangSan", 95, 80, 88},{10002,"LiSi", 85, 70, 78},
//                     {10003,"CaoKai", 75, 60, 88}, {10004,"FangFang", 90, 82, 87} };
//    int  i, j;
//    printf("\n\nThe original data :\n\n");
//    for (j = 0; j < 4; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", s[j].sno, s[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", s[j].score[i]);
//        printf("\n");
//    }
//    fun(s, 4);
//    printf("\n\nThe data after sorting :\n\n");
//    for (j = 0; j < 4; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", s[j].sno, s[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", s[j].score[i]);
//        printf("\n");
//    }
//    getchar();
//}