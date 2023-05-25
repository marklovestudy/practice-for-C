#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define N 5

typedef struct aa
{
	int data;
	struct aa* next;
}NODE;

//printlist(NODE* head)
//{
//	while (head->next!=NULL)
//	{
//		printf("%d ", head->data);
//		head = head->next;
//	}
//}
//
//void insertnode(NODE* head, int dt)
//{
//	NODE* newnode;
//	newnode = (NODE*)malloc(sizeof(NODE));
//	newnode->data = dt;
//	newnode->next = NULL;
//	if (head->next == NULL) 
//	{
//		head->data = dt;
//		head->next = newnode->next;
//	}
//	
//	while (head->next!=NULL)
//	{
//		head = head->next;
//	}
//	head->next = newnode;
//}
//
//NODE* createlist(int a[N])
//{
//	NODE* head;
//	head = (NODE*)malloc(sizeof(NODE));
//	head->next = NULL;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		insertnode(head, a[i]);
//	}
//	return head;
//}
//
//int main()
//{
//	int a[N] = { 2,4,6,8,10 };
//	NODE* head = createlist(a);
//	printlist(head);
//}

//void fun(NODE* h)
//{
//    NODE* p, * q, * r;
//    /**********found**********/
//    p = h->next;					//q表示当前指针
//    /**********found**********/
//    if (p == NULL)  return;		//如果p为空，表示链表结束，停止
//    q = p->next;				//q设为下一指针
//    p->next = NULL;			//下一指针设为空
//    while (q)					//如果当前指针为空，停止，如果不为空，执行下面程序
//    {
//        r = q->next;            //下一指针指向的位置存在r中
//        q->next = p;            //把下一指针指向当前位置，即前一位置，
//        p = q;                  //上面二步完成了逆序，把当前位置后移一格，就是下一位置设为当前位置
//        q = r;                  //下一位置更换为存在r中的下一指针。
// /**********found**********/
//        
//    }
//    h->next = p;
//}
//NODE* creatlist(int  a[])
//{
//    NODE* h, * p, * q;        int  i;
//    h = (NODE*)malloc(sizeof(NODE));
//    p = (NODE*)malloc(sizeof(NODE));
//    p->next = NULL;
//    h->next = NULL;
//    for (i = 0; i < N; i++)
//    {
//        q = (NODE*)malloc(sizeof(NODE));
//        q->data = a[i];
//        q->next = NULL;
//        if (h->next == NULL)  h->next = p = q;
//        else { p->next = q;  p = q; }				//p是当前链表指针的位置
//    }
//    return  h;
//}
//void outlist(NODE* h)
//{
//    NODE* p;
//    p = h->next;
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
//    fun(head);
//    printf("\nThe list after inverting :\n");
//    outlist(head);
//    getchar();
//}
