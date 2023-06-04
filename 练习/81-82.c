#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//在数组中插入一个数，按升序排列。
//void fun(int a[], int n)
//{
//	int b[11];
//	int i = 0, j = 0,t1,t2;
//	if (n > a[9])
//		a[10] = n;
//	else
//	{
//		while (i<10)
//			{
//				if (a[i] > n)
//				{
//					t1 = a[i];
//					a[i] = n;
//					for (j = i + 1; j < 11; j++)
//					{
//						t2 = a[j];
//						a[j] = t1;
//						t1 = t2;
//					}
//					break;
//				}
//				i++;
//			}
//	}
//}
//
//int main()
//{
//	int a[11] = { 11,22,33,44,55,66,77,88,99,123 };
//	int i,n;
//	scanf("%d", &n);
//	for (i = 0; i < 11; i++) printf("%d ", a[i]);
//	printf("\n\n");
//	fun(a, n);
//	for (i = 0; i < 11; i++) printf("%d ", a[i]);
//	printf("\n\n");
//	return 0;
//}

//输出成绩最高的同学数据
//
//typedef struct student
//{
//	char sno[20];
//	char name[20];
//	int score[2];
//}STU;
//
//STU* fun(STU* s)
//{
//	int i;
//	STU* ss;
//	ss = s;
//	STU* max = ss;
//	for (i = 1; i < 3; i++)
//	{
//		ss += 1;
//		if ((max->score[0] + max->score[1]) < (ss->score[0] + ss->score[1]))
//		{
//			max = ss;
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	STU a[10] = { "2016500301","李清水",83,92,"2016500336","刘世才",85,94,"2016500371","王子晨",88,88 };
//	STU* m = fun(a);
//	printf("sno=%s  name=%s  scores=%d", m->sno, m->name, m->score[0] + m->score[1]);
//	return 0;
//}
//
//typedef struct stu
//{
//	char ID[30];
//	char name[20];
//	int score[2];
//} STU;
//int fun(STU* d, int n)
//{
//	int i, m;
//	/******found******/
//	m = 0;
//	for (i = 1; i < n; i++)
//		/******found******/
//		if (d[i].score[0] + d[i].score[1] > d[m].score[0] + d[m].score[1])
//			m = i;
//	/******found******/
//	return m;
//}
//
//void main()
//{
//	STU a[10] = { "2016500301","李清水",83,92,"2016500336","刘世才",85,94,"2016500371","王子晨",88,88 };
//	int i, n = 3;
//	i = fun(a, n);
//	printf("%30s%20s%4d%4d", a[i].ID, a[i].name, a[i].score[0], a[i].score[1]);
//	printf("\n");
//}