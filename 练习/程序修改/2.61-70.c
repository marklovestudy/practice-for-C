#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


//输入一个100的倍数的整数如:2000，返回1/(100*100)+1/(200*200)+...+1/(2000*2000),输出0.000160.
//double fun(int n)
//{
//	double re = 0.0;
//	int i = 100;
//	while (i<=n)
//	{
//		re += 1.0 / (i * i);
//		i += 100;
//	}
//	return re;
//}
//
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	double y = fun(m);
//	printf("%lf", y);
//	return 0;
//}

///************found************/
//double fun(int   m)
//{
//    double y = 0, d;
//    int    i;
//    /************found************/
//    for (i = 100; i <= m; i += 100)
//    {
//        d = (double)i * (double)i;
//        y += 1.0 / d;
//    }
//    return(y);
//}
//
//main()
//{
//    int  n = 2000;
//    printf("\nThe result is %lf\n", fun(n));
//    getchar();
//}

//x1 = (x0 + a/ x0)/2; x0=a/2 

//根据公式An=1/(1+A(n-1)),A1=1,A2=1/(1+A1)  n=10    输出0.617977

//double fun(int n)
//{
//	if (n == 1) return 1.0;
//	else return 1.0 / (1 + fun(n - 1));
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double re = fun(n);
//	printf("%lf", re);
//	return 0;
//}
//
///************found************/
//float  fun(int n)
//{
//	float  A = 1; int i;
//	/************found************/
//	for (i = 2; i <= n; i++)
//		A = 1 / (1 + A);
//	return A;
//}
//
//main()
//{
//	int  n;
//
//	printf("\nPlease enter n: ");
//	scanf("%d", &n);
//	printf("A%d=%f\n", n, fun(n));
//	getchar();
//}

//删除数组中小于10的元素，并在主函数中输出删除后的数组
//int fun(int* s,int sz)
//{
//	int re = sz, i, ss[10], j = 0,sz1;
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] >= 10) ss[j++] = s[i];
//	}
//	for (i = 0; i < j; i++) s[i] = ss[i];
//	return j;
//}
//
//int main()
//{
//	int a[10], i;
//	for (i = 0; i < 10; i++) a[i] = rand() % 21;
//	for (i = 0; i < 10; i++) printf("%d  ", a[i]);
//	printf("\n");
//	int sz=fun(a,10);
//	for (i = 0; i < sz; i++) printf("%d  ", a[i]);
//	return 0;
//}

//三三一组，10个元素共八组，找出每组的中值，把每组的中间的那个数替换为中值。
//int midfun(int a, int b, int c)
//{
//	int t;
//	t=a > b ? (a > c ? (b > c ? b : c) : a) : (b > c ? (c > a ? c : a) : b);
//	return t;
//}
//
//void fun(int a[])
//{
//	int i, j, mid, k;
//	for (i=0;i<8;i++)
//	{
//		printf("第%d组数据:", i + 1);
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i + j]);
//		}
//		mid = midfun(a[i], a[i + 1], a[i + 2]);
//		printf("中值为： %d ", mid);
//		a[i + 1] = mid;
//		printf("替换后的数列为：");
//		for (k = 0; k < 10; k++) printf("%d ", a[k]);
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int  i, x[10] = { 6,5,7,23,18,5,8,21,45,38 };
//	fun(x);
//	printf("最终的结果为：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", x[i]);
//	}
//	return 0;
//}

//#define   N   10
//int findmid(int  a, int  b, int  c)
//{
//    int  t;
//    t = (a > b) ? (b > c ? b : (a > c ? c : a)) : ((a > c) ? a : ((b > c) ? c : b));
//    /**********found**********/
//    return  t;
//}
//void fun(int  x[])
//{
//    int  i, a, b, c, t[N];
//    /**********found**********/
//    for (i = 0; i < N; i++) t[i] = x[i];
//    for (i = 0; i < N - 2; i++)
//    {
//        a = t[i]; b = t[i + 1]; c = t[i + 2];
//        /**********found**********/
//        x[i + 1] = findmid(a, b, c);
//    }
//}
//main()
//{
//    int  i, x[N] = { 6,5,7,23,18,5,8,21,45,38 };
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\n");
//    fun(x);
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\n");
//    getchar();
//}

//void fun(int a[], int n)
//{
//	int i, zero = 0, one = 0;
//	for (i = 0; i < n; i++)
//	{
//		switch (a[i])
//		{
//		case 0:
//			zero++;
//			break;
//		case 1:
//			one++;
//			break;
//		default:
//			break;
//		}
//	}
//	printf("zero=%d  one=%d ", zero, one);
//}
//
//int main()
//{
//	int  a[20] = { 1,1,1,0,1,0,0,0,1,0,0,1,1,0,0,1,0,1,0,0 }, n = 20;
//	fun(a, n);
//	return 0;
//}
//
//void  fun(int* s, int  n)
//{
//	/**********found**********/
//	int  i, one = 0, zero = 0;
//	for (i = 0; i < n; i++)
//		/**********found**********/
//		switch (s[i])
//		{
//			/**********found**********/
//		case  0:  zero++; break;
//		case  1:  one++; break;
//		}
//	printf("one : %d    zero : %d\n", one, zero);
//}
//main()
//{
//	int  a[20] = { 1,1,1,0,1,0,0,0,1,0,0,1,1,0,0,1,0,1,0,0 }, n = 20;
//	fun(a, n);
//	getchar();
//}

//统计字符串中出现次数最多的字符。
//int fun(char s[], char t[])
//{
//	int sz1 = strlen(s), i, max;
//	for (i = 0; i < 26; i++) t[i] = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		if (isupper(s[i])) s[i] = s[i] - 'A' + 'a';
//	}
//	for (i = 0; i < sz1; i++)
//	{
//		if ('a' <= s[i] && s[i] <= 'z') t[s[i] - 'a']++;
//	}
//	max = t[0];
//	for (i = 1; i < 26; i++)
//	{
//		if (t[i] > max) max = t[i];
//	}
//	return max;
//}
//
//int main()
//{
//	char s[100], t[26];
//	gets(s);
//	int re = fun(s, t), i;
//	for (i = 0; i < 26; i++)
//	{
//		if (t[i] == re) printf("%c ", 'a' + i);
//	}
//	return 0;
//}

//void fun(char  a[])
//{
//    int  b[26], i, n, max;
//    for (i = 0; i < 26; i++)
//        b[i] = 0;
//    /**********found**********/
//    n = strlen(a);
//    for (i = 0; i < n; i++)
//        /**********found**********/
//        if (a[i] >= 'a' && a[i] <= 'z')
//            b[a[i] - 'a']++;
//    max = 0;
//    for (i = 1; i < 26; i++)
//        if (b[max] < b[i])
//            /**********found**********/
//            max = i;
//    printf("出现次数最多的字符是 :  %c\n", max + 'a');
//}
//main()
//{
//    char  a[200];
//    printf("请输入一个待统计的字符串 :   ");   scanf("%s", a);
//    fun(a);
//    getchar();
//}


//输出二维数组中每个一维数组中的最小值，存在一维数组b[]中；
//void fun(int a[][4], int b[])
//{
//    int i, j, min;
//    for (i = 0; i < 4; i++)
//    {
//        min = a[i][0];
//        for (j = 1; j < 4; j++)
//        {
//            if (a[i][j] < min) min = a[i][j];
//        }
//        b[i] = min;
//    }
//}
//
//int main()
//{
//    int  a[4][4] = { {1,4,3,2},{8,6,5,7},{11,10,12,9},{13,16,14,15} }, b[4];    int  i;
//    fun(a, b);
//    //system("pause");
//    for (i = 0; i < 4; i++)  printf("%d,", b[i]);
//    printf("\n");
//    return 0;
//}
//
//void fun(int  a[][N], int  b[])
//{
//    int  i, j;
//    for (i = 0; i < N; i++)
//    {
//        /**********found**********/
//        b[i] = a[i][0];
//        /**********found**********/
//        for (j = 1; j <= N - 1; j++)
//            /**********found**********/
//            if (b[i] > a[i][j])
//                b[i] = a[i][j];
//    }
//}
//main()
//{
//    int  a[N][N] = { {1,4,3,2},{8,6,5,7},{11,10,12,9},{13,16,14,15} }, b[N];    int  i;
//    fun(a, b);
//    for (i = 0; i < N; i++)  printf("%d,", b[i]);
//    printf("\n");
//    getchar();
//}


//把结构体a,b,c做一个静态单链表，并求出单链表的值的和。
//typedef struct aa
//{
//	int data;
//	struct aa* next;
//}NODE;
//
//int fun(NODE* a)
//{
//	NODE* p;
//	p = a;
//	int sum = 0;
//	while (p)
//	{
//		sum += p->data;
//		p = p->next;
//	}
//	return sum;
//}
//
//int main()
//{
//	NODE a, b, c;
//	a.data = rand() % 20;
//	a.next = &b;
//	b.data = rand() % 20;
//	b.next = &c;
//	c.data = rand() % 20;
//	c.next = NULL;
//	printf("%d %d %d \n", a.data, b.data, c.data);
//	int sum = fun(&a);
//	printf("%d", sum);
//	return 0;
//}

//typedef  struct  list
//{
//    int  data;
//    struct list* next;
//} LIST;
//int fun(LIST* h)
//{
//    LIST* p;
//    /**********found**********/
//    int  t = 0;
//    p = h;
//    /**********found**********/
//    while (p)
//    {
//        /**********found**********/
//        t = t + p->data;
//        p = (*p).next;
//    }
//    return  t;
//}
//main()
//{
//    LIST  a, b, c, * h;
//    a.data = 34;  b.data = 51;  c.data = 87;  c.next = '\0';
//    h = &a;  a.next = &b;  b.next = &c;
//    printf("总和 = %d\n", fun(h));
//    getchar();
//}

typedef  struct
{
	char  num[8];
	double  score[2];
}STU;

double fun(STU* s)
{
	STU* p;
	p = s;
	int i;
	double av = 0.0;
	for (i = 0; i < 4; i++)
	{
		av += p[i].score[0];
	}
	av /= 4;
	return av;
}

int main()
{
	STU  std[] = { "N1001", 76.5,82.0 ,"N1002", 66.5,73.0,
			  "N1005", 80.5,66.0,"N1006", 81.0,56.0 };
	double av = fun(std);
	printf("av=%lf\n", av);
	return 0;
}