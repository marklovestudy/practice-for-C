#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//找出数组中的最大值及其下标
//void createlist(int(*a)[4], int n, int m)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			a[i][j] = rand() % 100;
//		}
//	}
//}
//
//void pp(int a[][4])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int findmax(int a[3][4],int *r,int *c)
//{
//	int i, j,max;
//	max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] > max) 
//			{
//				max = a[i][j];
//				*r = i;
//				*c = j;
//			}
//		}
//		printf("\n");
//	}
//	return max;
//}
//int main()
//{
//	int a[3][4],r,c;
//	srand((unsigned)time(NULL));
//	createlist(a, 3, 4);
//	pp(a);
//	int re=findmax(a, &r, &c);
//	printf("最大值为：%d   下标行：%d,下标列：%d", re, r, c);
//	return 0;
//}
//
////打印出结构体数据中，没有被删除的数据。
//typedef struct dat
//{
//	char deleted;	//是否删除：0-未删除，1-删除
//	int data;
//	struct dat* next;
//} MYDATA;
//void list(MYDATA* h)
//{
//	/******found******/
//	MYDATA* p;
//	p = h->next;
//	while (p != NULL)
//	{
//		/******found******/
//		if (p->deleted == 0)
//		{
//			printf("%d  ", p->data);
//		}
//		/******found******/
//		p = p->next;
//	}
//}
//
//void creat(MYDATA* h, int* d, int n)
//{
//	MYDATA* p, * q;
//	int i = 0, del;
//	q = h;
//	while (n > 0)
//	{
//		p = (MYDATA*)malloc(sizeof(MYDATA));
//		del = rand() % 2;
//		p->data = d[i];
//		p->deleted = del;
//		p->next = q->next;
//		q->next = p;
//		q = p;
//		n--; i++;
//	}
//}
//void main()
//{
//	MYDATA* head;
//	int n = 10, dd[] = { 1,2,3,4,5,6,7,8,9,10 };
//	head = (MYDATA*)malloc(sizeof(MYDATA));
//	head->next = NULL;
//	creat(head, dd, n);
//	list(head);
//}

//typedef struct dat
//{
//	char deleted;	//是否删除：0-未删除，1-删除
//	int data;
//	struct dat* next;
//} MYDATA;
//
//void list(MYDATA* h)
//{
//	/******found******/
//	MYDATA* p;
//	p = h->next;
//	while (p != NULL)
//	{
//		/******found******/
//		printf("%d  ", p->data);
//		/******found******/
//		p = p->next;
//	}
//}
//
//
//void creat(MYDATA* h, int* d, int n)
//{
//	MYDATA* p, * q;
//	int i = 0, del;
//	q = h;
//	while (n > 0)
//	{
//		p = (MYDATA*)malloc(sizeof(MYDATA));
//		del = rand() % 2;
//		p->data = d[i];
//		p->deleted = del;
//		p->next = q->next;
//		q->next = p;
//		q = p;
//		n--; i++;
//	}
//	q->next = h;		//循环链表，把尾指针指向头地址。
//}
//void main()
//{
//	MYDATA* head;
//	int n = 10, dd[] = { 1,2,3,4,5,6,7,8,9,10 };
//	head = (MYDATA*)malloc(sizeof(MYDATA));
//	head->next = NULL;
//	creat(head, dd, n);
//	list(head);
//}

//把字符串1的奇数位和字符串2的偶数位结合成新的字符串3
//void fun(char* a, char* b, char* c)
//{
//	int i = 0, j = 0;
//	while (a[i] != '\0' && b[i] != '\0')
//	{
//		c[j++] = a[i];
//		/************found************/
//		if (b[i + 1] != '\0')
//			c[j++] = b[i + 1];
//		else
//			/************found************/
//			break;
//		if (a[i + 1] == '\0')
//			break;
//		i += 2;
//	}
//	/************found************/
//	c[j] = '\0';
//}
//main()
//{
//	char a[40] = "asderty", b[40] = "zxcvb", c[80];
//	fun(a, b, c);
//	puts(c);
//}

//str1,str2,str3,找出str2在str1中出现字符，并按原先后顺序存入str3。
//void fun(char* s1, char* s2, char* s3)
//{
//	int i, j, k = 0;
//	for (i = 0; i < strlen(s2); i++)
//	{
//		for (j = 0; j < strlen(s1); j++)
//			/**********************found***********************/
//			if (s2[i] == s1[j])
//				break;
//		/**********************found***********************/
//		if (j < strlen(s1))
//			/**********************found***********************/
//			s3[k++] = s2[i];
//	}
//	s3[k] = '\0';
//}
//void main()
//{
//	char s1[128], s2[128], s3[128];
//	printf("Please input string1:");
//	gets(s1);
//	printf("Please input string2:");
//	gets(s2);
//	fun(s1, s2, s3);
//	printf("string:%s\n", s3);
//}

//找出字符串中大写字母的最大差值。
//int fun(char s[100])
//{
//	int sz = strlen(s);
//	int max, min, flag = 0, i;
//	for (i = 0; i < sz; i++)
//	{
//		if ('A' <= s[i] && s[i] <= 'Z') { max = min = s[i]; flag = 1; break;}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if ('A' <= s[i] && s[i] <= 'Z')
//		{
//			if (s[i] > max) max = s[i];
//			if (s[i] < min) min = s[i];
//		}
//	}
//	if (flag) return max - min;
//	else
//	{
//		return flag;
//	}
//}
//
//int main()
//{
//	char s[100];
//	gets(s);
//	int re = fun(s);
//	printf("差值为：%d", re);
//	return 0;
//}
//
//int fun(char* str) {
//    int k, c0, c1;
//    c0 = c1 = -1;
//    for (k = 0; k < strlen(str); k++)
//        if ((str[k] >= 'A') && (str[k] <= 'Z'))
//        {
//            c0 = c1 = k;
//            break;
//        }
//    if (c0 == -1)
//        return 0;
//    /**********************found***********************/
//    for (k = 0; k < strlen(str); k++)
//    {
//        /**********************found***********************/
//        if ((str[k] >= 'A') && (str[k] <= 'Z'))
//        {
//            if (str[k] < str[c0])
//                c0 = k;
//            if (str[k] > str[c1])
//                c1 = k;
//        }
//    }
//    /**********************found***********************/
//    return str[c1] - str[c0];
//}
//
//int main()
//{
//    char str[100];
//    int l;
//    printf("input string:");
//    scanf("%s", str);
//    l = fun(str);
//    printf("span:%d\n", l);
//    return 0;
//}

//写一个10进制输2-16进制的函数
//void fun(int n, int k)
//{
//    int m, r, a[100] = {0}, j = 0;
//    m = n;
//    while (m)
//    {
//        r = m % k;
//        a[j++] = r;
//        m /= k;
//    }
//    for (j = j - 1; j >= 0; j--)
//    {
//        if (a[j] < 10) printf("%d", a[j]);
//        else
//        {
//            printf("%c", a[j] - 10 + 'A');
//        }
//    }
//}
//
//int main()
//{
//    int num, r;
//    printf("\n请输入整数和进制:");
//    scanf("%d %d", &num, &r);
//    fun(num, r);
//    printf("\n");
//    return 0;
//}
//
//void fun(int num, int r)
//{
//    int i = 0, a[32];
//    char b[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//
//    do
//    {
//        a[i] = num % r;
//        /************found************/
//        num /= r;
//        i++;
//        /************found************/
//    } while (num);
//    /************found************/
//    for (i--; i >= 0; --i)
//        printf("%c", b[a[i]]);
//}
//
//int main()
//{
//    int num, r;
//    printf("\n请输入整数和进制:");
//    scanf("%d %d", &num, &r);
//    fun(num, r);
//    printf("\n");
//    return 0;
//}

//求二个字符串数字相加变成第三个字符串
//void fun(char* s1, char* s2, char* s3)
//{
//	int sz = strlen(s1);
//	int i = sz - 1, k, f = 0, j = 0;
//	for (; i >= 0; i--)
//	{
//		k = s1[i] - '0' + s2[i] - '0' + f;
//		if (k > 9) { f = 1; k %= 10; }
//		else
//		{
//			f = 0;
//		}
//		s3[j++] = k + '0';
//	}
//	if (f == 1) s3[j++] = 1 + '0';
//	s3[j] = 0;
//	sz = strlen(s3);
//	int l = 0, r = sz - 1;
//	char tem;
//	while (l < r)
//	{
//		tem = s3[l];
//		s3[l] = s3[r];
//		s3[r] = tem;
//		l++;
//		r--;
//	}
//}
//
//void main()
//{
//	char s1[100], s2[100], s3[101];
//	strcpy(s1, "65743");
//	strcpy(s2, "85339");
//	fun(s1, s2, s3);
//	printf("%s+%s=%s\n", s1, s2, s3);
//}
//
//char* fun(char* s1, char* s2, char* r)
//{
//	int len, cy = 0, md;
//	char* p, * q, * t;
//	len = strlen(s1);
//	p = s1 + len - 1;
//	q = s2 + len - 1;
//	t = r + len;
//	/**********************found***********************/
//	*(t + 1) = '\0';
//	while (p >= s1)
//	{
//		/**********************found***********************/
//		md = *p + *q - '0' - '0' + cy;
//		if (md >= 10)	cy = 1;
//		else	cy = 0;
//		*t = md % 10 + '0';
//		p--;
//		q--;
//		t--;
//	}
//	/**********************found***********************/
//	if (cy == 1)
//		*t = '1';
//	else
//	{
//		while (*r++ = *++t);    // r的当前值等于t的后面一个值开始，*t为真时运行，否则停止
//	}
//	return r;
//}
//void main()
//{
//	char s1[100], s2[100], s3[101];
//	strcpy(s1, "65743");
//	strcpy(s2, "15339");
//	fun(s1, s2, s3);
//	printf("%s+%s=%s\n", s1, s2, s3);
//}

//int main()
//{
//	int n,b;
//	do
//	{
//		scanf("%d", &n);
//	} while (b=n);		//当n为假时退出。
//	return 0;
//}

//提取字符串中的数字输出
//int fun(char* str)
//{
//	int i, k;
//
//	i = 0;
//	/**********************found***********************/
//	for (k = 0; k < strlen(str); k++)
//	{
//		/**********************found***********************/
//		if ((str[k] >= '0') && (str[k] <= '9'))
//			i = i * 10 + str[k] - '0';
//	}
//	/**********************found***********************/
//	return i;
//}
//
//int main()
//{
//	char str[100];
//	int l;
//	printf("input string:");
//	scanf("%s", str);
//	l = fun(str);
//	printf("num:%d\n", l);
//	return 0;
//}


//把字符串中的浮点数转成双精度浮点数。
//int strtoval(char *a, double* t)
//{
//	int sz = strlen(a);
//	int i,flag=0;
//	char tem[100];
//	if (('0' <= a[0] && a[0] <= '9') || ((a[0] == '+') || (a[0] == '-'))) printf("%c", a[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (('0' <= a[i] && a[i] <= '9') || a[i] == '.') 
//		{ 
//			printf("%c", a[i]);
//			flag = 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return flag;
//}
//
//main()
//{
//	char str[][100] = {
//		"    +123.65a",
//		"    -32-3",
//		"    56.76a",
//		"    + 283.125",
//		"    +a8.6"
//	};
//	double a;
//	int i;
//	for (i = 0; i < 5; i++)
//		if (strtoval(str[i], &a) == 0)
//			printf("vol=%f\n", a);
//		else
//			printf("error,the string is %s\n", str[i]);
//}
//
//int strtoval(char pst[], double* p)
//{
//	int sucs;
//	int plus;
//	int i = 0;
//	double frac = 0.1;
//	*p = 0.0;
//	while (pst[i] == ' ') i++;
//	/**********************found***********************/
//	if (pst[i] == '+' || pst[i] >= '0' && pst[i] <= '9')
//	{
//		plus = 1;
//		sucs = 1;
//	}
//	else if (pst[i] == '-')
//	{
//		plus = 0;
//		sucs = 1;
//	}
//	else
//	{
//		sucs = 0;
//		return sucs;
//	}
//	/**********************found***********************/
//	if (pst[i] == '+' || pst[i] == '-')
//		i++;
//	if (pst[i] == ' ')
//		i++;
//	if (!(pst[i] >= '0' && pst[i] <= '9'))
//	{
//		sucs = 0;
//		return sucs;
//	}
//	while (pst[i] != '\0')
//	{
//		if (pst[i] >= '0' && pst[i] <= '9')
//		{
//			*p = *p * 10 + pst[i] - '0';
//			i++;
//		}
//		else if (pst[i] == '.')
//			break;
//		else
//		{
//			if (plus == 0)
//				*p = -1.0 * *p;
//			return sucs;
//		}
//	}
//	/**********************found***********************/
//	if (pst[i] == '.')
//	{
//		i++;
//		while (pst[i] != '\0')
//		{
//			if (pst[i] >= '0' && pst[i] <= '9')
//			{
//				*p = *p + (pst[i] - '0') * frac;
//				frac /= 10;
//				i++;
//			}
//			else
//			{
//				if (plus == 0)
//					*p = -1.0 * *p;
//				return sucs;
//			}
//		}
//		return sucs;
//	}
//	return sucs;
//}
//
//main()
//{
//	char str[][100] = {
//		"    +123.65a",
//		"    -32-3",
//		"    56.76a",
//		"    + 283.125",
//		"    +a8.6"
//	};
//	double a;
//	int i;
//	for (i = 0; i < 5; i++)
//		if (strtoval(str[i], &a) == 1)
//			printf("vol=%f\n", a);
//		else
//			printf("error,the string is %s\n", str[i]);
//}
