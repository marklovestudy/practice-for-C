#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define N 6
//����������С�����͵�һ��Ԫ�ؽ���λ��
//void fun(int* dt, int n)
//{
//	int min = 0,i;
//	for (i=1;i<n;i++)
//		if (dt[min] > dt[i])
//		{
//			min = i;
//		}
//	if (min != 0)
//	{
//		int tem = dt[0];
//		dt[0] = dt[min];
//		dt[min] = tem;
//	}
//}
//
//int main()
//{
//	int a[N] = { 30,20,15,64,85,28 };
//	int i;
//	for (i = 0; i < N; i++) printf("%d ", a[i]);
//	printf("\n\n");
//	fun(a, N);
//	for (i = 0; i < N; i++) printf("%d ", a[i]);
//	printf("\n\n");
//	return 0;
//}
//
//void fun(int* dt, int n)
//{
//	int i, m, t;
//	/**********************found***********************/
//	m = 0;
//	for (i = 1; i < n; i++)
//		/**********************found***********************/
//		if (dt[m] > dt[i])
//			m = i;
//	t = dt[0];
//	/**********************found***********************/
//	dt[0] = dt[m];
//	dt[m] = t;
//}
//main()
//{
//	int a[10] = { 30,20,15,64,85,28 };
//	int i, n = 6;
//	for (i = 0; i < n; i++)
//		printf("%4d", a[i]);
//	printf("\n");
//	fun(a, n);
//	for (i = 0; i < n; i++)
//		printf("%4d", a[i]);
//	printf("\n");
//}


//��ӡָ����ĸ���ڵ���ĸ����A��ZAB����Z,YZA��
//void fun(char m)
//{
//	printf("%c", (m -'A' + 25) % 26 + 'A');
//	printf("%c", (m - 'A' + 26) % 26 + 'A');
//	printf("%c", (m - 'A' + 27) % 26 + 'A');
//}
//int main()
//{
//	char m;
//	scanf("%c", &m);
//	fun(m);
//	return 0;
//}
//
//void fun(char ch)
//{
//	char t[3];
//	int i;
//	t[1] = ch;
//	/**********************found***********************/
//	if (ch == 'Z') { t[2] = 'A';  t[0] = 'Y'; }
//	/**********************found***********************/
//	else if (ch == 'A') { t[2] = 'B';   t[0] = 'Z'; }
//	/**********************found***********************/
//	else { t[0] = ch - 1;  t[2] = ch + 1; }
//	for (i = 0; i < 3; i++) putchar(t[i]);
//	putchar('\n');
//}
//main()
//{
//	char c;
//	do
//	{
//		printf(" enter a upper letter:");
//		c = getchar(); getchar();
//	} while (!isupper(c));
//	fun(c);
//}

//���������β�n����n!���þ�̬�ṹ�����old�����ϴμ���Ľ׳ˣ�ÿ�����ϴεĻ����ϼ��㡣
//typedef struct Ord
//{
//	int n;
//	long ordor;
//}ORD;
//
//void fun(int n)
//{
//	static ORD old = {0,1};
//	int i;
//	if (old.n < n)
//	{
//		for (i = old.n+1; i <= n; i++)
//		{
//			old.ordor *= i;
//		}
//	}
//	else
//	{
//		for (i = old.n; i > n; i--)
//		{
//			old.ordor /= i;
//		}
//	}
//	old.n = n;
//	printf("n=%d,n!=%d\n", n, old.ordor);
//}
//
//int main()
//{
//	int i, n;
//	for (i = 0; i < 5; i++)
//	{
//		n = rand() % 10;
//		fun(n);
//	}
//	return 0;
//}

//struct Ord
//{
//	int n;
//	long ordor;
//};
//long fun(int n)
//{
//	static struct Ord old = { 0,1 };
//	int i;
//	if (n == old.n)
//		/**********************found***********************/
//		return (old.ordor);
//	if (n > old.n)
//		for (i = old.n + 1; i <= n; i++)
//			old.ordor *= i;
//	else
//		for (i = old.n; i > n; i--)
//			old.ordor /= i;
//
//	/**********************found***********************/
//	old.n = n;
//	/**********************found***********************/
//	return (old.ordor);
//}
//main()
//{
//	int i, n;
//	for (i = 0; i < 5; i++)
//	{
//		n = rand() % 10;
//		printf("%d  %ld\n", n, fun(n));
//	}
//}

//ͳ������Ĵ�Сд�ַ������ֵĸ���
//void fun(int* cd, int* cu, int* cs)
//{
//	char c;
//	while ((c=getchar())!='\n')
//	{
//		if ('0' <= c && c <= '9') *cd += 1;
//		if ('A' <= c && c <= 'Z') *cu += 1;
//		if ('a' <= c && c <= 'z') *cs += 1;
//	}
//}
//
//int main()
//{
//	int cd, cu, cs;
//	cd = cu = cs = 0;
//	fun(&cd, &cu, &cs);
//	printf("������:%d\n", cd);
//	printf("������:%d\n", cu);
//	printf("С����:%d\n", cs);
//	return 0;
//}
//
//void fun(int* cd, int* cu, int* cs)
//{
//	char  c;
//	printf("�ûس����������룡\n");
//	while ((c = getchar()) != '\n')
//	{
//		/**********************found***********************/
//		if (c >= '0' && c <= '9')++* cd;
//		/**********************found***********************/
//		if (c >= 'A' && c <= 'Z')++* cu;
//		/**********************found***********************/
//		if (c >= 'a' && c <= 'z')++* cs;
//	}
//}
//
//main()
//{
//	int cd, cu, cs;
//	cd = cu = cs = 0;
//	fun(&cd, &cu, &cs);
//	printf("���ֵĸ���: %d\n", cd);
//	printf("��д��ĸ�ĸ���: %d\n", cu);
//	printf("Сд��ĸ�ĸ���: %d\n", cs);
//}

//�ҳ������н������ֵ
//typedef struct student
//{
//	int data;
//	struct student* next;
//}STU;
//
//STU* create()
//{
//	STU* ps;
//	ps = (STU*)malloc(sizeof(STU));
//	return ps;
//}
//
//STU* createnode(int n)
//{
//	STU* pn;
//	pn = (STU*)malloc(sizeof(STU));
//	pn->data = n;
//	pn->next = NULL;
//	return pn;
//}
//
//int main()
//{
//	int data[] = { 123, 21, 65, 789, 32, 310, 671, 651, 81, 101 }, pmax;
//	STU* ss = create(),q,p;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		STU* aa = createnode(data[i]);
//		ss->next = aa;
//		ss = ss->next;
//	}
//	pmax = ss->data;
//	for (i = 0; i < 10; i++)
//	{
//		if (pmax < ss->data)
//		{
//			pmax = ss->data;
//			ss = ss->next;
//		}
//	}
//	printf("%d", pmax);
//	return 0;
//}


//struct list
//{
//	int data;
//	struct list* next;
//};
//
//struct list* createlist(int data[], int n)
//{
//	struct list* head = 0, * p, * q;
//	int i;
//
//	head = (struct list*)malloc(sizeof(struct list));
//	head->data = data[0];
//	p = q = head;
//	for (i = 1; i < n; i++)
//	{
//		p = (struct list*)malloc(sizeof(struct list));
//		p->data = data[i]; q->next = p; q = p;
//	}
//	p->next = NULL;
//	return head;
//}
//
///**********found**********/
//int func(struct list* head)
//{
//	int pmax = head->data;
//	struct list* p = head->next;
//	while (p != NULL)
//	{
//		if (p->data > pmax) pmax = p->data;
//		/**********found**********/
//		p = p->next;
//	}
//	/**********found**********/
//	return pmax;
//}
//
//void main()
//{
//	int data[] = { 123, 21, 65, 789, 32, 310, 671, 651, 81, 101 }, pmax;
//
//	struct list* head;
//	head = createlist(data, 10);
//	pmax = func(head);
//	printf("Max=%d\n", pmax);
//}