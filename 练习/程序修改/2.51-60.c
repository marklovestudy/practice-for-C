#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


//创建一个链表，随机值，找出链表的最大值。
//typedef struct aa
//{
//	int data;
//	struct aa* next;
//}NODE;
//
//NODE* createhead()
//{
//	NODE* h;
//	h = (NODE*)malloc(sizeof(NODE));
//	h->data = 9999;
//	h->next = NULL;
//	return h;
//}
//
//NODE* createnode(int n)
//{
//	NODE* node;
//	node = (NODE*)malloc(sizeof(NODE));
//	node->data = n;
//	node->next = NULL;
//	return node;
//}
//
//int fun(NODE* h)
//{
//	NODE* p, *q;
//	p = q = h;
//	q = q->next;
//	int re = q->data;
//	while (q)
//	{
//		if (re < q->data) re = q->data;
//		q = q->next;
//	}
//	return re;
//}
//
//void createlink(NODE* h,int n)
//{
//	NODE* r;
//	r = h;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		NODE* node = createnode(rand() % 100);
//		node->next = NULL;
//		r->next = node;
//		r = node;
//	}
//}
//
//void outlink(NODE* h)
//{
//	NODE* p;
//	p = h;
//	while (p)
//	{
//		printf("%d   ", p->data);
//		p = p->next;
//	}
//	printf("\n\n");
//}
//
//int main()
//{
//	NODE* head = createhead();
//	srand((unsigned)time(NULL));
//	createlink(head,20);
//	outlink(head);
//	int re = fun(head);
//	printf("最大值为：%d\n", re);
//	return 0;
//}

//typedef  struct  aa
//{
//    int  data;
//    struct  aa* next;
//} NODE;
//int fun(NODE* h)
//{
//    int  max = -1;
//    NODE* p;
//    /***********found**********/
//    p = h->next;
//    while (p)
//    {
//        if (p->data > max)
//            max = p->data;
//        /***********found**********/
//        p = p->next;
//    }
//    return  max;
//}
//outresult(int  s, FILE* pf)
//{
//    fprintf(pf, "\nThe max in link  :  %d\n", s);
//}
//
//NODE* creatlink(int  n, int  m)
//{
//    NODE* h, * p, * s;
//    int  i;
//    h = p = (NODE*)malloc(sizeof(NODE)); h->data = 9999;
//    for (i = 1; i <= n; i++)
//    {
//        s = (NODE*)malloc(sizeof(NODE));
//        s->data = rand() % m;  s->next = p->next;
//        p->next = s;         p = p->next;
//    }
//    p->next = NULL;
//    return  h;
//}
//outlink(NODE* h, FILE* pf)
//{
//    NODE* p;
//    p = h->next;
//    fprintf(pf, "\nTHE  LIST :\n\n  HEAD ");
//    while (p)
//    {
//        fprintf(pf, "->%d ", p->data); p = p->next;
//    }
//    fprintf(pf, "\n");
//}
//main()
//{
//    NODE* head;  int  m;
//    head = creatlink(12, 100);
//    outlink(head, stdout);
//    m = fun(head);
//    printf("\nTHE  RESULT  :\n"); outresult(m, stdout);
//    getchar();
//}

//在字符str1中找出str2的个数，并返回个数

//int fun(char* s1, char* s2)
//{
//	int sz1 = strlen(s1);
//	int sz2 = strlen(s2);
//	int i, j, count = 0;
//	for (i = 0; i <= sz1 - sz2; i++)
//	{
//		for (j = 0; j < sz2; j++)
//		{
//			if (s1[i + j] != s2[j]) break;
//		}
//		if (j == sz2) count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str1[100], str2[100];
//	gets(str1);
//	gets(str2);
//	int re = fun(str1, str2);
//	printf("在str1中有%d个str2\n", re);
//	return 0;
//}
//
//#define    N     80
//int  fun(char* s, char* t)
//{
//	int  n;
//	char* p, * r;
//	n = 0;
//	while (*s)
//	{
//		p = s;
//		/*********found**********/
//		r = t;
//		while (*r)
//			if (*r == *p) { r++;  p++; }
//			else  break;
//		/*********found**********/
//		if (*r == 0)
//			n++;
//		s++;
//	}
//	return  n;
//}
//main()
//{
//	char  a[N], b[N];    int   m;
//	printf("\nPlease enter string a : "); gets(a);
//	printf("\nPlease enter substring b : "); gets(b);
//	m = fun(a, b);
//	printf("\nThe result is :  m = %d\n", m);
//	getchar();
//}

//void  fun(char* s)
//{
//    /**********found***********/
//    while (*s != '\0')
//    {
//        if (*s >= 'A' && *s <= 'Z' || *s >= 'a' && *s <= 'z')
//        {
//            if (*s == 'Z')  *s = 'A';
//            else if (*s == 'z')  *s = 'a';
//            else              *s += 1;
//        }
//        /**********found***********/
//        s++;
//    }
//}
//main()
//{
//    char  s[80];
//    printf("\n  Enter a string with length < 80.  :\n\n  "); gets(s);
//    printf("\n  The  string :  \n\n  ");  puts(s);
//    fun(s);
//    printf("\n\n  The  Cords :\n\n  ");  puts(s);
//    getchar();
//}

//返回字符串长度比较长的地址。
//char* fun(char* s1, char* s2)
//{
//	int sz1 = strlen(s1);
//	int sz2 = strlen(s2);
//	return sz1 > sz2 ? s1 : s2;
//}
//
//int main()
//{
//	char str1[100], str2[100];
//	gets(str1);
//	gets(str2);
//	char *s = fun(str1, str2);
//	printf("%s", s);
//	return 0;
//}

///**********found**********/
//char* fun(char* s, char* t)
//{
//    int  sl = 0, tl = 0;    char* ss, * tt;
//    ss = s;    tt = t;
//    while (*ss)
//    {
//        sl++;
//        /**********found**********/
//        ss++;
//    }
//    while (*tt)
//    {
//        tl++;
//        /**********found**********/
//        tt++;
//    }
//    if (tl > sl)  return  t;
//    else       return  s;
//}
//main()
//{
//    char  a[80], b[80];
//    printf("\nEnter a string :  "); gets(a);
//    printf("\nEnter a string again :  "); gets(b);
//    printf("\nThe longer is :\n\n\"%s\"\n", fun(a, b));
//    getchar();
//}

//取出原字符串中的所有数字字符形成新的字符串代替原字符串。

//void  fun(char* s)
//{
//    int  i, j;
//    for (i = 0, j = 0; s[i] != '\0'; i++)
//        if (s[i] >= '0' && s[i] <= '9')
//            /**********found**********/
//            s[j++] = s[i];
//    /**********found**********/
//    s[j] = 0;
//}
//main()
//{
//    char  item[80];
//    printf("\nEnter a string  :  "); gets(item);
//    printf("\n\nThe  string  is  : \"%s\"\n", item);
//    fun(item);
//    printf("\n\nThe string of changing is  : \"%s\"\n", item);
//    getchar();
//}


//输出从大到小的m名学生的数据
//#define N 10
//typedef struct student
//{
//	char sno[20];
//	int score;
//}STU;
//
//STU* fun(STU *aa,int m)
//{
//	int i, j;
//	STU tem,*re;
//	re = (STU*)calloc(sizeof(STU), m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = i+1; j < N; j++)
//		{
//			if (aa[i].score < aa[j].score)
//			{
//				tem = aa[j];
//				aa[j] = aa[i];
//				aa[i] = tem;
//			}
//		}
//		re[i] = aa[i];
//	}
//	return re;
//}
//
//int main()
//{
//	STU  a[N] = { {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
//			   {"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} };
//	int m, i;
//	scanf("%d", &m);
//	STU* re = fun(a, m);
//	for (i = 0; i < m; i++) printf("sno=%s,score=%d\n", re[i].sno, re[i].score);
//	return 0;
//}

//#define    N  10
//typedef  struct  ss
//{
//	char  num[10];
//	int  s;
//} STU;
//STU* fun(STU  a[], int  m)
//{
//	STU  b[N], * t;
//	int  i, j, k;
//	/**********found**********/
//	t = (STU*)calloc(sizeof(STU), m);
//	for (i = 0; i < N; i++)  b[i] = a[i];
//	for (k = 0; k < m; k++)
//	{
//		for (i = j = 0; i < N; i++)
//			if (b[i].s > b[j].s)  j = i;
//		/**********found**********/
//		t[k] = b[j];
//		b[j].s = 0;
//	}
//	return  t;
//}
//outresult(STU  a[], FILE* pf)
//{
//	int  i;
//	for (i = 0; i < N; i++)
//		fprintf(pf, "No = %s  Mark = %d\n", a[i].num, a[i].s);
//	fprintf(pf, "\n\n");
//}
//main()
//{
//	STU  a[N] = { {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
//			  {"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} };
//	STU* pOrder;
//	int  i, m;
//	printf("***** The Original data *****\n");
//	outresult(a, stdout);
//	printf("\nGive the number of the students who have better score:  ");
//	scanf("%d", &m);
//	while (m > 10)
//	{
//		printf("\nGive the number of the students who have better score:  ");
//		scanf("%d", &m);
//	}
//	pOrder = fun(a, m);
//	printf("***** THE  RESULT *****\n");
//	printf("The top  :\n");
//	for (i = 0; i < m; i++)
//		printf("   %s    %d\n", pOrder[i].num, pOrder[i].s);
//	free(pOrder);
//	getchar();
//}


//在字符串前加入n个*
//void fun(char* s, int n)
//{
//	char t[80];
//	strcpy(t, s);
//	printf("t  :%s\n", t);
//	int i, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		*s = '*';
//		s++;
//	}
//	while (t[j])
//	{
//		*s = t[j];
//		s++;
//		j++;
//	}
//	*s = 0;
//}
//
//int main()
//{
//	char str1[80];
//	gets(str1);
//	int n;
//	scanf("%d", &n);
//	fun(str1, n);
//	printf("%s\n", str1);
//	return 0;
//}

//void  fun(char  s[], int  n)
//{
//    char  a[80], * p;
//    int  i;
//    /**********found***********/
//    p = s;
//    for (i = 0; i < n; i++)  a[i] = '*';
//    do
//    {
//        a[i] = *p;
//        i++;
//    }
//    /**********found***********/
//    while (*p++);
//    a[i] = 0;
//    strcpy(s, a);
//}
//main()
//{
//    int  n;        char  s[80];
//    printf("\nEnter a string  :  "); gets(s);
//    printf("\nThe string \"%s\"\n", s);
//    printf("\nEnter n ( number of * )  :  ");  scanf("%d", &n);
//    fun(s, n);
//    printf("\nThe string after insert : \"%s\" \n", s);
//    getchar();
//}

//给链表的值赋值为：0到m-1之间。
//typedef struct aa
//{
//	int data;
//	struct aa* next;
//}STU;
//
//STU* createlink(int m)
//{
//	STU* h, * r;
//	h = (STU*)malloc(sizeof(STU));
//	h->data = 9999;
//	h->next = NULL;
//	r = h;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		STU* node;
//		node= (STU*)malloc(sizeof(STU));
//		node->data = rand() % m;
//		node->next = NULL;
//		r->next = node;
//		r = node;
//	}
//	return h;
//}
//
//void outlink(STU* h)
//{
//	STU* p;
//	p = h;
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//
//void fun(int m)
//{
//	STU* head = createlink(m);
//	outlink(head);
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int m;
//	scanf("%d", &m);
//	fun(m);
//	return 0;
//}

//typedef  struct  aa
//{
//    int  data;
//    struct  aa* next;
//} NODE;
//NODE* Creatlink(int  n, int  m)
//{
//    NODE* h = NULL, * p, * s;
//    int  i;
//    /**********found***********/
//    p = (NODE*)malloc(sizeof(NODE));
//    h = p;
//    p->next = NULL;
//    for (i = 1; i <= n; i++)
//    {
//        s = (NODE*)malloc(sizeof(NODE));
//        s->data = rand() % m;      s->next = p->next;
//        p->next = s;             p = p->next;
//    }
//    /**********found***********/
//    return  h;
//}
//outlink(NODE* h)
//{
//    NODE* p;
//    p = h->next;
//    printf("\n\nTHE  LIST :\n\n  HEAD ");
//    while (p)
//    {
//        printf("->%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//main()
//{
//    NODE* head;
//    head = Creatlink(8, 22);
//    outlink(head);
//    getchar();
//}


//求值eps=0.0005时，pi的值。已知：pi/2=1+1/3+(1/3)*(2/5)+(1/3)*(2/5)*(3/7)+......
//double fun(double f1)
//{
//	double n, sum = 1,t;
//	n = 1.0;
//	t = n / (2 * n + 1);
//	while (t>f1)
//	{
//		sum += t;
//		n++;
//		t *= n / (2 * n + 1);
//	}
//	return 2*sum;
//}
//
//int main()
//{
//	double eps;
//	scanf("%lf", &eps);
//	double pi=fun(eps);
//	printf("%lf", pi);
//	return 0;
//}

//double fun(double  eps)
//{
//    double  s, t;     int  n = 1;
//    s = 0.0;
//    /************found************/
//    t = 1;
//    while (t > eps)
//    {
//        s += t;
//        t = t * n / (2 * n + 1);
//        n++;
//    }
//    /************found************/
//    return(2 * s);
//}
//main()
//{
//    double  x;
//    printf("\nPlease enter a precision: "); scanf("%lf", &x);
//    printf("\neps=%lf, Pi=%lf\n\n", x, fun(x));
//    getchar();
//}


int main()
{
	double t;
	t = 1-1.0/2;
	printf("%lf\n", t);
	printf("%lf\n", t * 5/8);
	return 0;
}

//输入一个n的值，求1-1/2-1/3-...-1/n
//double fun(int m)
//{
//	double sum = 2.0,n=1;
//	double t;
//	while (n<=m)
//	{
//		t = -1 / n;
//		sum += t;
//		n++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double re=fun(n);
//	printf("%lf", re);
//	return 0;
//}
//
//double fun(int m)
//{
//	double t = 1.0;
//	int i;
//	for (i = 2; i <= m; i++)
//		/**********found**********/
//		t = t - 1.0 / i;
//	/**********found**********/
//	return t;
//}
//
//main()
//{
//	int m;
//	printf("\nPlease enter a number:\n");
//	scanf("%d", &m);
//	printf("\n\nThe result is %lf\n", fun(m));
//	getchar();
//}