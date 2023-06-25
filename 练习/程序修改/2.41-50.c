#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//void fun(int* x, int* y)
//{
//	int t;
//	/*********found**********/
//	t = *x; *x = *y; *y = t;
//}
//
//main()
//{
//	int a, b;
//	a = 8; b = 3;
//	fun(&a, &b);
//	printf("%d,  %d\n", a, b);
//	getchar();
//}

//char* fun(char* a, char* b)
//{
//	int i=0;
//	char c[100];
//	while (*(a+i)&&*(b+i))
//	{
//		if (*(a + i) > *(b + i))
//		{
//			c[i] = *(a + i);
//		}
//		else
//		{
//			c[i] = *(b + i);
//		}
//		i++;
//	}
//	while (a[i]!='\0')
//	{
//		c[i] = a[i];
//		i++;
//	}
//	while (b[i]!='\0')
//	{
//		c[i] = b[i];
//		i++;
//	}
//	c[i] = '\0';
//	return c;
//}
//
//int main()
//{
//	char a[100], b[100];
//	gets(a);
//	gets(b);
//	char* re = fun(a, b);
//	puts(re);
//	return 0;
//}

//void  fun(char* p, char* q, char* c)
//{
//	/************found************/
//	int k = 0;
//	/************found************/
//	while (*p || *q)
//	{
//		if (*p < *q)  c[k] = *q;
//		else         c[k] = *p;
//		if (*p) p++;
//		if (*q) q++;
//		k++;
//	}
//}
//main()
//{
//	char  a[10] = "aBCDeFgH", b[10] = "ABcd", c[80] = { '\0' };
//	fun(a, b, c);
//	printf("The string a:  ");  puts(a);
//	printf("The string b:  ");  puts(b);
//	printf("The result  :  ");  puts(c);
//	getchar();
//}


//void fun(char* s)
//{
//	int i;
//	int sz = strlen(s);
//	char ss[100];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c\n", *(s+i));
//		ss[i] = s[i];
//	}
//	ss[i] = 0;
//	printf("%s", ss);
//}
//
//int main()
//{
//	char a[100];
//	gets(a);
//	fun(a);
//	return 0;
//}

//求前n项的和
/************found************/
//double fun(int  n)
//{
//    int  a, b, c, k;  double  s;
//    s = 0.0;  a = 2;  b = 1;
//    for (k = 1; k <= n; k++) {
//        /************found************/
//        s = s + (double)a / b;
//        c = a;  a = a + b; b = c;
//    }
//    return s;
//}
//
//main()
//{
//    int   n = 5;
//    printf("\nThe value of  function is: %lf\n", fun(n));
//    getchar();
//}


//从数组中删除一个数字
//int fun(int w[10],int x,int n)
//{
//	int i;
//	i = 0;
//	while (w[i]!=x)
//	{
//		i++;
//	}
//	n -= 1;
//	while (i<n)
//	{
//		w[i] = w[i + 1];
//		i++;
//	}
//}
//
//int main()
//{
//	int  w[10] = { -3,0,1,5,7,99,10,15,30,90 }, x, n, i,j;
//	n = 10;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &x);
//		n = fun(w, x, n);
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", w[j]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#define   N  20
//int fun(int* a, int n, int x)
//{
//    int   p = 0, i;
//    a[n] = x;
//    while (x != a[p])
//        p = p + 1;
//    /**********found**********/
//    if (p == n) return -1;
//    else
//    {
//        for (i = p; i < n; i++)
//            /**********found**********/
//            a[i] = a[i + 1];
//        return n - 1;
//    }
//}
//main()
//{
//    int  w[N] = { -3,0,1,5,7,99,10,15,30,90 }, x, n, i;
//    n = 10;
//    printf("The original data :\n");
//    for (i = 0; i < n; i++) printf("%5d", w[i]);
//    printf("\nInput x (to delete): "); scanf("%d", &x);
//    printf("Delete  :  %d\n", x);
//    n = fun(w, n, x);
//    if (n == -1) printf("***Not be found!***\n\n");
//    else
//    {
//        printf("The data after deleted:\n");
//        for (i = 0; i < n; i++) printf("%5d", w[i]); printf("\n\n");
//    }
//    getchar();
//}

//#define N 10
//
//int main()
//{
//	int a[N - 1] ;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}

//找出所有10-55之间所有能被3整除，且含有数字5的数。
//#include <stdio.h>
//int fun(int* b)
//{
//    int   k, a1, a2, i = 0;
//    for (k = 10; k <= 55; k++) {
//        /************found************/
//        a2 = k / 10;
//        a1 = k - a2 * 10;
//        if ((k % 3 == 0 && a2 == 5) || (k % 3 == 0 && a1 == 5))
//        {
//            b[i] = k; i++;
//        }
//    }
//    /************found************/
//    return  i;
//}
//main()
//{
//    int  a[100], k, m;
//    m = fun(a);
//    printf("The result is :\n");
//    for (k = 0; k < m; k++) printf("%4d", a[k]);  printf("\n");
//    getchar();
//}

//把输入的英语标题化。tittle
//int main()
//{
//	char s[100];
//	gets(s);
//	int d = 1,i=0;
//	while (s[i]!='\0')
//	{
//		if (d == 1)
//		{
//			d = 0;
//			printf("%c", s[i] - 'a' + 'A');
//		}
//		else if (s[i]==32)
//		{
//			d = 1;
//			printf("%c", s[i]);
//		}
//		else
//		{
//			printf("%c", s[i]);
//		}
//		i++;
//	}
//	return 0;
//}

//void upfst(char* p)
//{
//    int  k = 0;
//    for (; *p; p++)
//        if (k != 0)
//        {
//            if (*p == ' ')   k = 0;
//        }
//        else  if (*p != ' ')
//        {
//            k = 1;   *p = toupper(*p);
//        }
//}
//
//main()
//{
//    char   chrstr[81];
//    printf("\nPlease enter an English text line: ");   gets(chrstr);
//    printf("\n\nBefore changing:\n  %s", chrstr);
//    upfst(chrstr);
//    printf("\nAfter changing:\n  %s\n", chrstr);
//    getchar();
//}

//输入abcde   输出：edcbaabcde
//void fun(char* s, char* t)
//{
//	char* ss;
//	ss = s;
//	int c = 0, k = 0;
//	while ((*ss)!='\0')
//	{
//		ss++;
//		c++;
//	}
//	while (c>0)
//	{
//		ss--;
//		t[k] = *ss;
//		c--;
//		k++;
//	}
//	while (*ss)
//	{
//		t[k] = *ss;
//		ss++;
//		c++;
//		k++;
//	}
//	t[k] = 0;
//}
//
//int main()
//{
//	char s[100], t[100];
//	gets(s);
//	fun(s, t);
//	puts(t);
//	return 0;
//}

//void fun(char* s, char* t)
//{
//    int i, sz;
//    sz = strlen(s);
//    for (i = 0; i < sz; i++)
//    {
//        t[sz + i] = s[i];
//        t[i] = s[sz - 1 - i];
//    }
//    t[2 * sz] = 0;
//}


//void fun(char* s, char* t)
//{
//    /************found************/
//    int   i, sl;
//    i = 0;
//    sl = strlen(s);
//    for (; i < sl; i++)
//        /************found************/
//        t[i] = s[sl - i - 1];
//    for (i = 0; i < sl; i++)
//        t[sl + i] = s[i];
//    t[2 * sl] = '\0';
//}

//main()
//{
//    char s[100], t[100];
//    printf("\nPlease enter string s:"); scanf("%s", s);
//    fun(s, t);
//    printf("The result is: %s\n", t);
//    getchar();
//}


//判断一个数是不是素数
//int fun(n)
//{
//	int i;
//	for(i=2;i<=sqrt(n);i++)
//	{
//		if (n % i == 0) return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n,re;
//	do
//	{
//		scanf("%d", &n);
//		re = fun(n);
//		re? printf("yes\n") : printf("no\n");
//	} while (n);
//	return 0;
//}

//创建一个随机数的链表，并计数链表中的所有偶数和
//typedef struct nums
//{
//	int data;
//	struct nums* next;
//}SN;
//
//SN* createlist()
//{
//	SN *a;
//	a = (SN*)malloc(sizeof(SN));
//	a->next = NULL;
//	return a;
//}
//
//SN* createnode(int n)
//{
//	SN* ss;
//	ss = (SN*)malloc(sizeof(SN));
//	ss->data = n;
//	ss->next = NULL;
//	return ss;
//}
//
//void fun(SN* num1, int n)
//{
//	SN* nn = createnode(n);
//	SN* tt;
//	tt = num1;
//	while (tt->next)
//	{
//		tt = tt->next;
//	}
//	tt->next = nn;
//}

//int main()
//{
//	SN *num1 = createlist();
//	SN* num2;
//	num2 = num1;
//	srand((unsigned)time(NULL));
//	int i, a[10],sum=0,tem;
//	for (i = 0; i < 10; i++)
//	{
//		int n = rand() % 10;
//		a[i] = n;
//		fun(num1, n);
//	}
//	while (num2)
//	{
//		tem = num2->data;
//		if (tem % 2 == 0)
//		{
//			sum += tem;
//		}
//		num2 = num2->next;
//	}
//	for (i = 0; i < 10; i++) printf("%d ", a[i]);
//	printf("\n\n");
//	printf("result=%d\n", sum);
//	return 0;
//}

//typedef  struct  aa
//{
//    int  data;  struct  aa* next;
//}NODE;
//int  fun(NODE* h)
//{
//    int   sum = 0;
//    NODE* p;
//    /***********found**********/
//    p = h->next;
//    while (p)
//    {
//        if (p->data % 2 == 0)
//            sum += p->data;
//        /***********found**********/
//        p = p->next;
//    }
//    return  sum;
//}
//NODE* creatlink(int  n)
//{
//    NODE* h, * p, * s;
//    int  i;
//    h = p = (NODE*)malloc(sizeof(NODE));
//    for (i = 1; i <= n; i++)
//    {
//        s = (NODE*)malloc(sizeof(NODE));
//        s->data = rand() % 16;
//        s->next = p->next;
//        p->next = s;
//        p = p->next;
//    }
//    p->next = NULL;
//    return  h;
//}
//outlink(NODE* h, FILE* pf)
//{
//    NODE* p;
//    p = h->next;
//    fprintf(pf, "\n\nTHE  LIST :\n\n  HEAD ");
//    while (p)
//    {
//        fprintf(pf, "->%d ", p->data); p = p->next;
//    }
//    fprintf(pf, "\n");
//}
//outresult(int  s, FILE* pf)
//{
//    fprintf(pf, "\nThe sum of even numbers  :  %d\n", s);
//}
//main()
//{
//    NODE* head;    int  even;
//    head = creatlink(12);
//    head->data = 9000;
//    outlink(head, stdout);
//    even = fun(head);
//    printf("\nThe  result  :\n"); outresult(even, stdout);
//    getchar();
//}
