#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//����һ�����������е�����ȡ���������룺12345�������135  
//void fun(long n1,long *t)
//{
//	long tem = n1;
//	long i = 1;
//	while (tem)
//	{
//		if (tem % 2 == 1)
//		{
//			*t = tem % 10 * i + *t;
//			i *= 10;
//		}
//		tem /= 10;
//	}
//}
//
//int main()
//{
//	long a, t = 0;
//	printf("input a number");
//	scanf("%ld", &a);
//	fun(a, &t);
//	printf("%ld ... %ld", a, t);
//	return 0;
//}
//
//#include <stdio.h>
//
//void fun(long  s, long* t)
//{
//	int   d;
//	long  sl = 1;
//	/************found************/
//	*t = 0;
//	while (s > 0)
//	{
//		d = s % 10;
//		/************found************/
//		if (d % 2 == 1)
//		{
//			*t = d * sl + *t;
//			sl *= 10;
//		}
//		s /= 10;
//	}
//}
//main()
//{
//	long s, t;
//	printf("\nPlease enter s:"); scanf("%ld", &s);
//	fun(s, &t);
//	printf("The result is: %ld\n", t);
//	getchar();
//}

//����һ���ַ��������������룺abcd   �����abcddcba
//void fun(char* s, char* t)
//{
//	int i, j = 0;
//	for (i = 0; *(s + i); i++)
//		*(t + j++) = *(s + i);
//	for (i--;i>=0; i--)
//		*(t + j++) = *(s + i);
//	*(t + j) = 0;
//}
//
//int main()
//{
//	char s[100], t[100];
//	gets(s);
//	puts(s);
//	fun(s, t);
//	puts(t);
//	return 0;
//}

//void fun(char* s, char* t)
//{
//	int   i, d;
//	d = strlen(s);
//	for (i = 0; i < d; i++)  t[i] = s[i];
//	for (i = 0; i < d; i++)  t[d + i] = s[d - 1 - i];
//	/************found************/
//	t[2 * d - 1] = '\0';
//}
//
//main()
//{
//	char   s[100], t[100];
//	printf("\nPlease enter string S:"); scanf("%s", s);
//	fun(s, t);
//	printf("\nThe result is: %s\n", t);
//	getchar();
//}

//void fun(char* s, char* t)
//{
//	int   i, d;
//	d = strlen(s);
//	for (i = 0; i < d; i++)  t[i] = s[i];
//	for (i = 0; i < d; i++)  t[d + i] = s[d - 1 - i];
//	/************found************/
//	t[2 * d] = '\0';
//}
//
//main()
//{
//	char   s[100], t[100];
//	printf("\nPlease enter string S:"); scanf("%s", s);
//	fun(s, t);
//	printf("\nThe result is: %s\n", t);
//	getchar();
//}
//void fun(char* s, char* t1, char* t2)
//{
//	int sz = strlen(s);
//	int sz1 = strlen(t1);
//	int i, j, k = 0, b = -1;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		for (j = 0; j < sz1; j++)
//		{
//			if (t1[j] == s[i - sz1 + 1 + j])
//			{
//				b = 1;
//			}
//			else
//			{
//				b = -1;
//			}
//		}
//		if (b == 1)
//		{
//			k = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz1; i++)
//	{
//		s[k - sz1 + 1 + i] = t2[i];
//	}
//}
//
//int main()
//{
//	char s[100], t1[100], t2[100];
//	gets(s);
//	gets(t1);
//	gets(t2);
//	fun(s, t1, t2);
//	puts(s);
//	printf("���ĺ�%s\n", s);
//	return 0;
//}

//void fun(char* s, char* t1, char* t2, char* w)
//{
//    char* p, * r, * a = s;
//    strcpy(w, s);
//    /************found************/
//    while (*w)
//    {
//        p = w;   r = t1;
//        while (*r)
//            /************found************/
//            if (*r == *p)
//            {
//                r++;  p++;
//            }
//            else  break;
//        if (*r == '\0') a = w;          //a�������һ��ƥ����ַ�������Ԫ�ص�ַ��
//        w++;
//    }
//    r = t2;
//    while (*r) { *a = *r; a++; r++; }
//}
//
//main()
//{
//    char   s[100], t1[100], t2[100], w[100];
//
//    printf("\nPlease enter string S:"); scanf("%s", s);
//    printf("\nPlease enter substring t1:"); scanf("%s", t1);
//    printf("\nPlease enter substring t2:"); scanf("%s", t2);
//    if (strlen(t1) == strlen(t2))
//    {
//        fun(s, t1, t2, w);
//        printf("\nThe result is :  %s\n", w);
//    }
//    else  printf("\nError : strlen(t1) != strlen(t2)\n");
//    getchar();
//}

//void fun(char* s, char* t1, char* t2, char* w)
//{
//    char* p, * r, * a = s;
//    strcpy(w, s);
//    while (*w)
//    {
//        p = w;
//        r = t1;
//        while (*r)
//        {
//            if(*r==*p)
//            {
//                r++;
//                p++;
//            }
//            else
//            {
//                break;
//            }
//            if (*r == '\0') a = w;
//        }
//        w++;
//    }
//    while (*t2)
//    {
//        *a = *t2;
//        a++;
//        t2++;
//    }
//}
//
//int main()
//{
//    char   s[100], t1[100], t2[100], w[100];
//
//    printf("\nPlease enter string S:"); scanf("%s", s);
//    printf("\nPlease enter substring t1:"); scanf("%s", t1);
//    printf("\nPlease enter substring t2:"); scanf("%s", t2);
//    if (strlen(t1) == strlen(t2))
//    {
//        fun(s, t1, t2, w);
//        printf("\nThe result is :  %s\n", w);
//    }
//    else  printf("\nError : strlen(t1) != strlen(t2)\n");
//    getchar();
//    return 0;
//}

//�ҳ�һ����λ��
//#include<stdio.h>
//void fun(int* s, int n)
//{
//	int i, j = 0;
//	for (i = 100; i <= n; i++)
//	{
//		if (i % 10 == i / 10 % 10 && i % 10 == i / 100)
//			s[j++] = i;
//	}
//}
//
//int main()
//{
//	int n, s[100] = { 0 }, i = 0;
//	scanf("%d", &n);
//	fun(s, n);
//	while (s[i])
//	{
//		printf("%d ", s[i]);
//		i++;
//	}
//	return 0;
//}

//#define    N    100
//int  fun(int* s, int  n)
//{
//    int  i, j, k, a, b, c;
//    j = 0;
//    for (i = 100; i < n; i++) {
//        /**************found**************/
//        k = i;
//        a = k % 10;  k /= 10;
//        b = k % 10;  k /= 10;
//        /**************found**************/
//        c = k % 10;
//        if (a == b && a == c) s[j++] = i;
//    }
//    return  j;
//}
//main()
//{
//    int  a[N], n, num = 0, i;
//    do
//    {
//        printf("\nEnter n( <=1000 ) :  ");  scanf("%d", &n);
//    } while (n > 1000);
//    num = fun(a, n);
//    printf("\n\nThe result :\n");
//    for (i = 0; i < num; i++)printf("%5d", a[i]);
//    printf("\n\n");
//}

//��һ������5�η�������ʮ��λ�ϵ�����֮�ͣ���7��16807��15
#pragma warning (disable:4996)
//int  fun(int  n, int* value)
//{
//    int  d, s, i;
//    /**************found**************/
//    d = 1;  s = 0;
//    for (i = 1; i <= 5; i++)  d = d * n;
//    *value = d;
//    for (i = 1; i <= 3; i++)
//    {
//        s = s + d % 10;
//        /**************found**************/
//        d = d / 10;
//    }
//    return  s;
//}
//main()
//{
//    int  n, sum, v;
//    do
//    {
//        printf("\nEnter n( 2<n<8):  "); scanf("%d", &n);
//    } while (n <= 2 || n >= 8);
//    sum = fun(n, &v);
//    printf("\n\nThe result:\n  value=%d  sum=%d\n\n", v, sum);
//}

//���ۼӺͣ���n=20���һ����3��8��13������98.��20�ÿ�����5.
//�Ѵӵ�һ�20����ۼӺ�д�������С��ѳ���4��2�������뵽��һ�������С�

//void creatlist(int* s, int* t, int n)
//{
//	int i;
//	t[0] = 3;
//	s[0] = 3;
//	for (i = 1; i < n; i++)
//	{
//		s[i] = i * 5 + 3;
//		t[i] = t[i - 1] + s[i];
//	}
//}
//
//int main()
//{
//	int i = 0, j = 0, n, s[100] = { 0 }, t[100] = { 0 }, m[100] = { 0 };
//	scanf("%d", &n);
//	creatlist(s,t,n);
//	while (t[i])
//	{
//		if (t[i] % 4 == 2)
//			m[j++] = t[i];
//		i++;
//	}
//	i = 0;
//	while (s[i])
//	{
//		printf("%d ", s[i++]);
//	}
//	printf("\n\n");
//	i = 0;
//	while (s[i])
//	{
//		printf("%d ", t[i++]);
//	}
//	printf("\n\n");
//	j = 0;
//	while (m[j])
//	{
//		printf("%d ", m[j]);
//		j++;
//	}
//	return 0;
//}

//��һ���޷���������λ�ϵ�0�ĸ�������������֡�

//void fun(unsigned int n)
//{
//	int i, max;
//	i = max = 0;
//	while (n)
//	{
//		if (n % 10 == 0) i++;
//		if (n % 10 > max) max = n % 10;
//		n /= 10;
//	}
//	printf("һ����%d��0\n\n", i);
//	printf("��λ���������������ǣ�%d\n\n", max);
//}
//
//int main()
//{
//	unsigned int n;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}

//int  fun(unsigned  n, int* zero)
//{
//    int  count = 0, max = 0, t;
//    do
//    {
//        t = n % 10;
//        /**************found**************/
//        if (t == 0)
//            count++;
//        if (max < t)  max = t;
//        n = n / 10;
//    } while (n);
//    /**************found**************/
//    *zero = count;
//    return  max;
//}
//main()
//{
//    unsigned  n;    int  zero, max;
//    printf("\nInput n(unsigned):  ");  scanf("%d", &n);
//    max = fun(n, &zero);
//    printf("\nThe result:  max=%d    zero=%d\n", max, zero);
//}

//�ѷ������һλ������ǰ����������һλ�ķ�ʽ���

//void creatlist(int* s, int n)
//{
//	int i,x;
//	for (i = 0; i < n; i++) scanf("%d", &s[i]);
//}
//
//void fun(int* s, int n)
//{
//	int i,j,k;
//	for (i = n - 1; i >= 0; i--)
//	{
//		for (j = i, k = 0; k < n; k++)
//		{
//			printf("%d ",s[(j + k) % n]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int s[100] = { 0 }, n;
//	scanf("%d", &n);
//	creatlist(s, n);
//	fun(s, n);
//	return 0;
//}

//#define    M    4
///**************found**************/
//void fun(int* a)
//{
//    int  i, j, k, m;
//    printf("Enter 4 number :  ");
//    for (i = 0; i < M; i++)  scanf("%d", &a[i]);
//    printf("\n\nThe result  :\n\n");
//    for (i = M; i > 0; i--)
//    {
//        k = a[M - 1];
//        for (j = M - 1; j > 0; j--)
//            /**************found**************/
//            a[j] = a[j - 1];
//        a[0] = k;
//        for (m = 0; m < M; m++)  printf("%d  ", a[m]);
//        printf("\n");
//    }
//    getchar();
//}
//main()
//{
//    int  a[M];
//    fun(a); printf("\n\n");
//    getchar();
//}

//���׺�������������3����5����6����ѡ8��������Ҫ�к����
//int main()
//{
//	int i, j, k,c=0;
//	for (i=1;i<=3;i++)
//		for (j=1;j<=5;j++)
//			for (k = 0; k <= 6; k++)
//			{
//				if (i + j + k == 8) 
//				{ 
//					c++;
//					printf("��%d�飺��=%d  ����=%d  ����=%d  ��\n", c, i, j, k);
//				}
//			}
//	return 0;
//}
//
//int  fun()
//{
//	int  i, j, k, sum = 0;
//	printf("\nThe result  :\n\n");
//	/**************found**************/
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			k = 8 - i - j;
//			/**************found**************/
//			if (k >= 0 && k <= 6)
//			{
//				sum = sum + 1;
//				printf("red:%4d white:%4d black:%4d\n", i, j, k);
//			}
//		}
//	}
//	return  sum;
//}
//main()
//{
//	int  sum;
//	sum = fun();
//	printf("sum =%4d\n\n", sum);
//	getchar();
//}


//��x��y�η��ĺ���λ��ֵ����5��6�η���15625����3λΪ��625

int fun(int x,int y)
{
	int s = pow(x, y);
	return s % 1000;
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int re=fun(x, y);
	printf("%d", re);
	return 0;
}