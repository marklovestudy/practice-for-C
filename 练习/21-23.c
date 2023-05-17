#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int fun(char *str1)
//{
//	int sz = strlen(str1);
//	int i,count=1;
//	for (i = 0; i < sz; i++)
//	{
//		if (str1[i] == ' ')
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	char s[80] = "This is a C language program";
//	int re=fun(s);
//	printf("%d\n", re);
//	return 0;
//}

//int main()
//{
//	int sz = strlen("asdf");
//	printf("%d", sz);
//	return 0;
//}

//#include  <stdio.h>
//int fun(char* s)
//{
//    int  n = 0, flag = 0;
//    while (*s != '\0')
//    {
//        if (*s != ' ' && flag == 0) {
//            /**********found**********/
//            n++;  flag = 1;
//        }
//        /**********found**********/
//        if (*s == ' ')  flag = 0;
//        /**********found**********/
//        s++;
//    }
//    return  n;
//}
//main()
//{
//    char  str[81];    int  n;
//    printf("\nEnter a line text:\n");  gets(str);
//    n = fun(str);
//    printf("\nThere are %d words in this text.\n\n", n);
//    getchar();
//}

#define N 5
#define M 8
//
//void fun(char *s[])
//{
//	int i;
//	for (i = 0; i < N-1; i++)
//	{
//		int j = i + 1;
//		for (j; j < N; j++)
//		{
//			if (strlen(s[i]) < strlen(s[j]))
//			{
//				int tem = s[i];
//				s[i] = s[j];
//				s[j] = tem;
//			} 
//		}
//	}
//}
//
//int main()
//{
//	char s1[M] = "mark";
//	char s2[M] = "weiwei";
//	char s3[M] = "dafei";
//	char s4[M] = "xigua33";
//	char s5[M] = "cheng222";
//	char *ss[N] = { s1,s2,s3,s4,s5 };
//	int ssz = sizeof(ss) / sizeof(ss[0]);
//	fun(ss);
//	printf("%d", ssz);
//	return 0;
//}

//int main()
//{
//	char  ch[N][M] = { "red","green","blue","yellow","black" };
//	int  i;
//	printf("\nThe original string\n\n");
//	for (i = 0; i < N; i++)puts(ch[i]);  printf("\n");
//}

//void fun(char(*ss)[M])
//{
//    char* ps[N], * tp;    int  i, j, k;
//    for (i = 0; i < N; i++) ps[i] = ss[i];
//    for (i = 0; i < N - 1; i++) {
//        /**********found**********/
//        k = i;
//        for (j = i + 1; j < N; j++)
//            /**********found**********/
//            if (strlen(ps[k]) < strlen(ps[j])) k = j;
//        /**********found**********/
//        tp = ps[i];  ps[i] = ps[k]; ps[k] = tp;
//    }
//    printf("\nThe string after sorting by length:\n\n");
//    for (i = 0; i < N; i++)  puts(ps[i]);
//}
//main()
//{
//    char  ch[N][M] = { "red","green","blue","yellow","black" };
//    int  i;
//    printf("\nThe original string\n\n");
//    for (i = 0; i < N; i++)puts(ch[i]);  printf("\n");
//    fun(ch);
//    getchar();
//}

//int fun(char(*s)[M], char a[M])
//{
//    int i,re=-1;
//    for (i = 0; i < N; i++)
//    {
//        if (!strcmp(s[i],a))
//        {
//            return i;
//        }
//    }
//    return re;
//}
//
//main()
//{
//    char  ch[N][M] = { "red","green","blue","yellow","black" };
//    int  i;
//    char arr[M];
//    scanf("%s", arr);
//    printf("\nThe original string\n\n");
//    for (i = 0; i < N; i++)puts(ch[i]);  printf("\n");
//    int index=fun(ch,arr);
//    printf("ÄãÒªÕÒµÄ%sÔÚ%d\n", arr, index);
//    getchar();
//}

//int fun(char(*ss)[M], char* t)
//{
//    int  i;
//    /**********found**********/
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (strcmp(ss[i], t) == 0) return  i;
//    return -1;
//}
//main()
//{
//    char  ch[N][M] = { "if","while","switch","int","for" }, t[M];
//    int  n, i;
//    printf("\nThe original string\n\n");
//    for (i = 0; i < N; i++)puts(ch[i]);  printf("\n");
//    printf("\nEnter a string for search:  ");  gets(t);
//    n = fun(ch, t);
//    /**********found**********/
//    if (n == -1)  printf("\nDon't found!\n");
//    else   printf("\nThe position is  %d .\n", n);
//    getchar();
//}
