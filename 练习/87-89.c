#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//�õ�������һ������aƽ������x0=a/2,x1=(x0+a/x0)/2ֱ����x1-x0����ֵС�ھ��ȡ���1e-6.
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	double x0 = a / 2;
//	double x1 = (x0 + a / x0) / 2;
//	while ((x1-x0)>1e-6 || (x1-x0)<-1e-6)
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	}
//	printf("%lf ", x1);
//}

//main()
//{
//	double a, x0, x1;
//	printf("����һ��ʵ��, ��������㲢�����ƽ����\n");
//	do
//		/**********************found***********************/
//		scanf("%lf", &a);
//	while (a <= 0);
//	x1 = a / 2.0;
//	do
//	{
//		/**********************found***********************/
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2.0;
//		/**********************found***********************/
//	} while ((x1 - x0) > 1e-6 || (x1 - x0) < -1e-6);
//	printf("%f ��ƽ������ %f\n", a, x1);
//}


//�ýṹ��洢������ż���������ĸ�����
//struct pair
//{
//	int n1, n2;
//};
//
//struct pair fun(int* c, int sz)
//{
//	int i;
//	struct pair aa = { 0,0 };
//	for (i = 0; i < sz; i++)
//	{
//		if (c[i] % 2 == 0)
//		{
//			aa.n1++;
//		}
//		else if (c[i] % 2 == 1)
//		{
//			aa.n2++;
//		}
//	}
//	return aa;
//}
//
//int main()
//{
//	int c[5] = { 3,5,14,27,12 };
//	struct pair aa = fun(c,5);
//	printf("n1=%d,n2=%d", aa.n1, aa.n2);
//	return 0;
//}

//struct pair {
//	int n1, n2;
//};

//struct pair fun(int* c, int d) {
//	int i;
//	/**********************found***********************/
//	struct pair p;
//	p.n1 = p.n2 = 0;
//	/**********************found***********************/
//	for (i = 0; i < d; i++) {
//		if (c[i] % 2 == 0)
//			p.n1++;
//		else
//			/**********************found***********************/
//			p.n2++;
//	}
//	return p;
//}
//
//int main() {
//	int i, c[100], d;
//	struct pair p;
//
//	printf("��������ֵ�ĸ�����");
//	scanf("%d", &d);
//
//	printf("������%d����ֵ��", d);
//	for (i = 0; i < d; i++)
//		scanf("%d", &(c[i]));
//
//	p = fun(c, d);
//	printf("n1=%d,n2=%d", p.n1, p.n2);
//	return 0;
//}

//ͳ���ַ����еĸ���ĸ�������������ִ�Сд������ĸΪһ�ࡣ

//void fun(int* a, char* s)
//{
//	int i, sz = strlen(s);
//	for (i = 0; i < sz; i++)
//	{
//		if ('a' <= s[i] && s[i] <= 'z')
//		{
//			a[s[i] - 'a']++;
//		}
//		else if ('A' <= s[i] && s[i] <= 'Z')
//		{
//			a[s[i] - 'A']++;
//		}
//		else
//		{
//			a[26]++;
//		}
//	}
//}
//
//int main()
//{
//	char s[1000];
//	gets(s);
//	int a[27] = { 0 };
//	fun(a, s);
//	int i;
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c=%d ", 'a' + i, a[i]);
//	}
//	printf("\n������%d", a[26]);
//	return 0;
//}

//void countstr(char* st, int cutor[]);
//main()
//{
//	char s[1000];
//	/**********************found***********************/
//	int counters[27] = { 0 }, i;
//	printf("Input a string\n");
//	gets(s);
//	countstr(s, counters);
//	/**********************found***********************/
//	for (i = 0; i <= 25; i++)
//		printf("%c : %d\n", i + 65, counters[i]);
//	printf("others : %d\n", counters[i]);
//}
//
//void countstr(char* st, int cutor[])
//{
//	int i, j;
//	char t;
//	i = strlen(st);
//	for (j = 0; j < i; j++)
//	{
//		t = st[j];
//		if (t >= 'a' && t <= 'z')
//			t = t - 'a' + 'A';
//		if (t >= 'A' && t <= 'Z')
//			/**********************found***********************/
//			cutor[t - 'A']++;
//		else
//			cutor[26]++;
//	}
//}
