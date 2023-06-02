#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//输入字符c,d,打印出字符c后面的d位字符。
//void fun(char c, int n)
//{
//	int i;
//	if ('a' <= c && c <= 'z')
//	{
//		for (i = 1; i <= n; i++)
//		{
//			printf("%c",(c+26+i-'a') % 26 + 'a');
//		}
//	}
//	else
//	{
//		for (i = 1; i <= n; i++)
//		{
//			printf("%c", (c + 26 + i - 'A') % 26 + 'A');
//		}
//	}
//}
//
//int main()
//{
//	char c;
//	int d;
//	scanf("%c%d", &c, &d);
//	fun(c, d);
//	return 0;
//}
//
//void fun(char c, int d) {
//	int i;
//	char A[26], a[26], * ptr;
//	/**********found**********/
//	for (i = 0; i < 26; i++) {
//		A[i] = 'A' + i;
//		a[i] = 'a' + i;
//	}
//	/**********found**********/
//	if ((c >= 'a') && (c <= 'z')) ptr = a;
//	else   ptr = A;
//	/**********found**********/
//	for (i = 1; i <= d; i++) printf("%c", ptr[(c - ptr[0] + i) % 26]);
//}
//main() {
//	char c; int d;
//	printf("please input c & d:\n");
//	scanf("%c%d", &c, &d);
//	fun(c, d);
//}


//修改结构体数据
//struct student {
//	long  sno;
//	char  name[10];
//	float  score[3];
//};
///**********found**********/
//struct student* fun(struct student* a)
//{
//	int  i;
//	a->sno = 10002;
//	strcpy(a->name, "LiSi");
//	/**********found**********/
//	for (i = 0; i < 3; i++) a->score[i] += 1;
//	/**********found**********/
//	return a;
//}
//main()
//{
//	struct student  s = { 10001,"ZhangSan", 95, 80, 88 }, * t;
//	int  i;
//	printf("\n\nThe original data :\n");
//	printf("\nNo: %ld  Name: %s\nScores:  ", s.sno, s.name);
//	for (i = 0; i < 3; i++)  printf("%6.2f ", s.score[i]);
//	printf("\n");
//	t = fun(&s);
//	printf("\nThe data after modified :\n");
//	printf("\nNo: %ld  Name: %s\nScores:  ", t->sno, t->name);
//	for (i = 0; i < 3; i++)  printf("%6.2f ", t->score[i]);
//	printf("\n");
//	getchar();
//}

////链表选择排序
//typedef struct student
//{
//	int data;
//	struct student* next;
//}STU;
//
//STU* createlist(int* a, int n)
//{
//	STU* head, * p, * q;
//	head = (STU*)malloc(sizeof(STU));
//	head->data = a[0];
//	head->next = NULL;
//	q = head;
//	int i;
//	for (i = 1; i < n; i++)
//	{
//		p = (STU*)malloc(sizeof(STU));
//		p->data = a[i];
//		q->next = p;
//		p->next = NULL;
//		q = p;
//	}
//	return head;
//}
//
//void pp(STU* head)
//{
//	STU* h;
//	h = head;
//	do
//	{
//		printf("%d ", h->data);
//		h = h->next;
//	} while (h!=NULL);
//	printf("\n\n");
//}
//
//void px(STU* h)
//{
//	STU* head,*p,*q;
//	int qm, tem;
//	p=q=head = h;
//	do
//	{
//		//找到最小值qm
//		qm = p->data;
//		q = p;
//		do
//		{
//			q = q->next;
//			if (qm > q->data)
//			{
//				tem = q->data;
//				q->data = qm;
//				qm = tem;
//			}
//		} while (q->next!=NULL);
//		p->data = qm;
//		p = p->next;
//	} while (p->next!=NULL);
//}
//
//int main()
//{
//	int a[5] = { 10,4,2,8,6 };
//	STU* head = createlist(a, 5);
//	pp(head);
//	px(head);
//	pp(head);
//	return 0;
//}

//typedef struct node {
//    int  data;
//    struct node* next;
//} NODE;
//void fun(NODE* h)
//{
//    NODE* p, * q;    int  t;
//    p = h;
//    while (p) {
//        /**********found**********/
//        q = p->next;
//        /**********found**********/
//        while (q)
//        {
//            if (p->data > q->data)
//            {
//                t = p->data;  p->data = q->data;  q->data = t;
//            }
//            q = q->next;
//        }
//        /**********found**********/
//        p = p->next;
//    }
//}
//NODE* creatlist(int  a[])
//{
//    NODE* h, * p, * q;        int  i;
//    h = NULL;
//    for (i = 0; i < N; i++)
//    {
//        q = (NODE*)malloc(sizeof(NODE));
//        q->data = a[i];
//        q->next = NULL;
//        if (h == NULL)  h = p = q;
//        else { p->next = q;  p = q; }
//    }
//    return  h;
//}
//void outlist(NODE* h)
//{
//    NODE* p;
//    p = h;
//    if (p == NULL)  printf("The list is NULL!\n");
//    else
//    {
//        printf("\nHead  ");
//        do
//        {
//            printf("->%d", p->data); p = p->next;
//        } while (p != NULL);
//        printf("->End\n");
//    }
//}
//main()
//{
//    NODE* head;
//    int  a[N] = { 0, 10, 4, 2, 8, 6 };
//    head = creatlist(a);
//    printf("\nThe original list:\n");
//    outlist(head);
//    fun(head);
//    printf("\nThe list after inverting :\n");
//    outlist(head);
//    getchar();
//}

//求低于平均成绩的平均成绩。
//double fun(double x[], int n)
//{
//	int i, k = 0;
//	double avg = 0.0, sum = 0.0;
//	for (i = 0; i < n; i++)
//		/***********found**********/
//		avg += x[i];
//	/***********found**********/
//	avg /= n;
//	for (i = 0; i < n; i++)
//		if (x[i] < avg)
//		{
//			/***********found**********/
//			sum += x[i];
//			k++;
//		}
//	return sum / k;
//}
//main()
//{
//	double score[12] = { 50,60,70,80,90,100,55,65,75,85,95,99 };
//	double aa;
//	aa = fun(score, 12);
//	printf("%f\n", aa);
//}
//int * fun(int* a, int n)
//{
//	int i = 0,j=0;
//	int b[11];
//	while (a[i])
//	{
//		if (n < a[i])
//		{
//			b[j] = n;
//			j++;
//		}
//		b[j] = a[i];
//		i++;
//		j++;
//	}
//	return b;
//}
//
//void pp(int *a,int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n\n");
//}
//
//int main()
//{
//	int a[10] = { 1,12,23,34,45,56,67,78,89,90 };
//	int n;
//	scanf("%d", &n);
//	pp(a, 10);
//	int *b=fun(a, n);
//	pp(b, 11);
//	return 0;
//}