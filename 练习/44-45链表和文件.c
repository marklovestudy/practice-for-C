#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define N 5

//typedef struct node {
//    int  data;
//    struct node* next;
//} NODE;

//��������Ĵ������ṹ�������һ�����ӷ�ʽ��
//int main()
//{
//    //��̬��������
//    NODE n1 = { 1,NULL };
//    NODE n2 = { 2,NULL };
//    NODE n3 = { 3,NULL };
//    NODE n4 = { 4,NULL };
//    NODE n5 = { 5,NULL };
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = &n5;
//    system("pause");
//    return 0;
//}
//NODE* createlist()
//{
//    NODE* head;
//    head = (NODE*)malloc(sizeof(NODE));     //head�ͳ���һ���ṹ�������
//    head->next = NULL;
//    return head;
//}
//
//NODE* createnode(int data)      //�������
//{
//    NODE* newnode = (NODE*)malloc(sizeof(NODE));
//    newnode->data = data;
//    newnode->next = NULL;
//    return newnode;
//}
//
//void printlist(NODE* head)          //��ӡ����
//{
//    NODE* pmove = head->next;
//    while (pmove)
//    {
//        printf("%d ", pmove->data);
//        pmove = pmove->next;
//    }
//    printf("\n\n");
//}
//
//void insertnodehead(NODE* headnode, int data)   //��������
//{
//    NODE* newnode = createnode(data);
//    newnode->next = headnode->next;
//    headnode->next = newnode;
//}
//
//void deletdnodebyappoin(NODE* headnode, int posdata)
//{
//    NODE* posnode = headnode->next;
//    NODE* posfront = headnode;
//    if (posnode == NULL)
//    {
//        printf("����Ϊ�գ��޷�ɾ��\n");
//    }
//    else
//    {
//        while (posnode->data != posdata)
//        {
//            posfront = posnode;
//            posnode = posnode->next;
//            if (posnode == NULL)
//            {
//                printf("û�ҵ�Ҫɾ��������\n");
//                return;
//            }
//        }
//        posfront->next = posnode->next;
//        free(posnode);
//    }
//}
//
//int main()
//{
//    //��̬��������   1����һ����ͷ��ָ����������2������㣬3�����㣬4ɾ����㣬5��ӡ����
//    //1��һ���ṹ��ָ��   ָ���ͷ�ĵ�ַ��   ��ô��������ָ����һ����������Ҫ��̬�ڴ����롣
//    NODE* head;
//    int a[N] = { 1,2,3,4,5 };
//    head = createlist();//1������ͷ
//    int i;
//    for (i = 0; i < N; i++)
//    {
//        insertnodehead(head, a[i]);
//    }
//    printlist(head);
//    deletdnodebyappoin(head, 5);
//    printlist(head);
//    return 0;
//}

//typedef struct node {
//    int  data;
//    struct node* next;
//} NODE;
///**********found**********/
//NODE* fun(NODE* h)
//{
//    NODE* p, * q, * r;
//    p = h;
//    if (p == NULL)
//        return NULL;
//    q = p->next;
//    p->next = NULL;
//    while (q)
//    {
//        /**********found**********/
//        r = q->next;
//        q->next = p;
//        p = q;
//        /**********found**********/
//        q = r;
//    }
//    return  p;
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
//    int  a[N] = { 2,4,6,8,10 };
//    head = creatlist(a);
//    printf("\nThe original list:\n");
//    outlist(head);
//    head = fun(head);
//    printf("\nThe list after inverting :\n");
//    outlist(head);
//    getchar();
//}

//typedef struct node 
//{
//    int  data;
//    struct node* next;
//} NODE;
//
//NODE* createlist()
//{
//    NODE* head;
//    head = (NODE*)malloc(sizeof(NODE));
//    head->next = NULL;
//    return head;
//}
//
//NODE* newnode(int a)
//{
//    NODE* newnd;
//    newnd = (NODE*)malloc(sizeof(NODE));
//    newnd->data = a;
//    newnd->next = NULL;         //ָ�������һ�����ݵĵ�ַ��
//    return newnd;
//}
//
//void insertnode(NODE* head, int a)
//{
//    NODE *newnd = newnode(a);
//    newnd->next = head->next;
//    head->next = newnd;
//}
//
//void printnodes(NODE* head)
//{
//    NODE* nownode = head->next;
//    while (nownode != NULL)
//    {
//        printf("%d ", nownode->data);
//        nownode = nownode->next;
//    }
//}
//
//int main()
//{
//    NODE* head;
//    int a[N] = { 1, 2, 3, 4, 5 }, i;
//    head = createlist();        //����һ��������
//    for (i=0;i<N;i++)
//        insertnode(head,a[i]);
//    printnodes(head);
//    return 0;
//}

void fun(char* s, int n, float f)
{
	FILE* fp;
	char str1[80], str2[80], str3[80];
	int i1;
	float f1;
	fp = fopen("aa.dat","w");
	fprintf(fp, "%s %d %f", s, n, f);
	fclose(fp);
	fp = fopen("aa.dat", "r");
	fscanf(fp, "%s%s%s", str1, str2, str3);
	printf("��ȡ����Ϊ��%s  %s  %s \n", str1, str2, str3);
	i1 = atoi(str2);
	f1 = atof(str3);
	printf("ת��������������͸�������%d  %f", i1, f1);
}

int main()
{
	char s[80];
	int n;
	float f;
	scanf("%s", &s);
	scanf("%d", &n);
	scanf("%f", &f);
	fun(s, n, f);
	return 0;
}