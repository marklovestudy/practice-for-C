#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define N 9

//修改结构体数据
//typedef struct student
//{
//	int sno;
//	char name[20];
//	int score[3];
//}STU;
//
//STU fun(STU a)
//{
//	a.sno = 10002;
//	strcpy(a.name, "LiSi");
//	int i;
//	for (i = 0; i < 3; i++) a.score[i] += 1;
//	return a;
//}
//
//int main()
//{
//	STU s = { 10001,"zhangsan",95,80,88 };
//	STU t = fun(s);
//	int i;
//	printf("sno=%d  name=%s score:", t.sno, t.name);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", t.score[i]);
//	}
//	return 0;
//}

//f(x)=1+x-x**2/2!+x**3/3!-x**4/4!+...+(-1)**(n-1)x**n/n!直到｜x**n/n!｜<10**(-6)
#include<math.h>
//int jc(int n)
//{
//	int s = 1, i;
//	for (i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//
//double fun(int x)
//{
//	double sum = 1,an;
//	int n = 1, f = 1, i;
//	while (1)
//	{
//		double e = 1e-6;
//		an = pow(x, n) / jc(n);
//		if (fabs(an) < e)
//		{
//			break;
//		}
//		else
//		{
//			sum += f * an;
//			f = -f;
//			n++;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int x = 2.5;
//	double re = fun(x);
//	printf("%lf", re);
//	return 0;
//}

//double fun(double  x)
//{
//    double  f, t;      int  n;
//    f = 1.0 + x;
//    /**********found**********/
//    t = x;
//    n = 1;
//    do {
//        n++;
//        /**********found**********/
//        t *= (-1.0) * x / n;							//每一项均由前一项*（-1）*x/n组成。
//        f += t;
//    }
//    /**********found**********/
//    while (fabs(t) >= 1e-6);
//    return  f;
//}
//main()
//{
//    double x, y;
//    x = 2.5;
//    y = fun(x);
//    printf("\nThe result is :\n");
//    printf("x=%-12.6f y=%-12.6f\n", x, y);
//}

//把数组中小于中间数的数替换为中间数。
//int fun(int a[N])
//{
//	int i, aa[N] = {0};
//	//aa[N] = a[N];
//	for (i = 0; i < N; i++) aa[i] = a[i];
//	int min,mid;
//	for (i = 0; i < N-1; i++)
//	{
//		int j;
//		min = i;
//		for (j = i+1; j < N; j++)
//		{
//			if (aa[min] > aa[j])
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			int tem = aa[i];
//			aa[i] = aa[min];
//			aa[min] = tem;
//		}
//	}
//	mid = N / 2;
//	for (i = 0; i < N - 1; i++) printf("%d ", aa[i]);
//	return aa[mid];
//}
//int main()
//{
//	int a[N] = { 1,5,7,23,87,5,8,21,45 };		//1,5,5,7,8,21,23,45,87
//	int i;
//	printf("原数组：");
//	for (i = 0; i < N; i++)
//	{
//			printf("%d ", a[i]);
//	}
//	printf("\n\n");
//	int re = fun(a);
//	printf("新数组：");
//	for (i = 0; i < N; i++)
//	{
//		if (a[i] < re)
//		{
//			printf("%d ", re);
//		}
//		else
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}

//int fun(int  x[])
//{
//    int  i, j, k, t, mid, b[N];
//    for (i = 0; i < N; i++) b[i] = x[i];
//    for (i = 0; i <= N / 2; i++)
//    {
//        k = i;
//        for (j = i + 1; j < N; j++) if (b[k] > b[j])  k = j;
//        if (k != i)
//        {
//            /**********found**********/
//            t = b[i]; b[i] = b[k]; b[k] = t;
//        }
//    }
//    /**********found**********/
//    mid = b[N / 2];
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (x[i] < mid) x[i] = mid;
//    return  mid;
//}
//main()
//{
//    int  i, x[N] = { 1,5,7,23,87,5,8,21,45 };
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\nThe mid data is: %d\n", fun(x));
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\n");
//    getchar();
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a[100] = {0};
//	int i,n;
//	for (i = 0; i < 100; i++) a[i] = rand()%100;
//	for (i = 0; i < 100; i++) printf("%d ", a[i]);
//	scanf("%d", &n);
//	printf("前%d个数据：", n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//		if (i%5==4) printf("\n");
//	}
//	return 0;
//}

//typedef struct list
//{
//	char data;
//	struct list* next;
//}Q;
//
//Q* fun(Q* a, Q* b, Q* c)		//地址的话用->，结构体的话可以用.
//{
//	a->next = b;
//	b->next = c;
//	return a;
//}
//int main()
//{
//	Q a, b, c;
//	a.data = 'A';
//	b.data = 'B';
//	c.data = 'C';
//	c.next = NULL;
//	Q *Qp=fun(&a, &b, &c);
//	int i;
//	do
//	{
//		printf("%c ", Qp->data);
//		Qp = Qp->next;
//	} while (Qp != NULL);
//	return 0;
//}

//狐狸找洞，0，2，5，9，先隔1个洞，再隔2个，再隔3个，请打印出所有不安全的洞
//void fun(int n)
//{
//	int i;
//	int j = 1;
//	for (i = 0; i < n; i += ++j)		//先加加再使用。
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}

//用数组a[10]存储每个数字出现的次数，a[0]表示0的次数。。。如m=14579233,a[0]={0,1,1,2,1,1,0,1,0,1}
//void fun(int* pa, long long m)
//{
//	long long n = m;
//	int x;
//	while (n)
//	{
//		x = n % 10;
//		pa[x] += 1;
//		n /= 10;
//	}
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	long long m;
//	scanf("%lld", &m);
//	fun(a, m);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//计数写入的正数和负数的个数，输入0退出。
//void fun(int* pa, int* pb)
//{
//	int n, a = 0, b = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n < 0) a++;
//		else b++;
//		scanf("%d", &n);
//	}
//	*pa = a;
//	*pb = b;
//}
//
//int main()
//{
//	int x, y;
//	fun(&x, &y);
//	printf("正数的个数：%d ,负数的个数：%d .", x, y);
//	return 0;
//}

//输入年月日，计数是此年的第几天。
//int isleap(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0)||( y % 400 == 0))
//	{
//		return 1;
//	}
//}
//
//int fun(int y, int m, int d)
//{
//	int re = isleap(y);
//	int ryear[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int pyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int i, days=0;
//	if (re == 1)
//	{
//		for (i = 1; i < m; i++)
//		{
//			days += ryear[i-1];
//		}
//	}
//	else
//	{
//		for (i = 1; i < m; i++)
//		{
//			days += pyear[i - 1];
//		}
//	}
//	days += d;
//	return days;
//}
//
//int main()
//{
//	int year, month, day, days;
//	scanf("%d%d%d", &year, &month, &day);
//	days = fun(year, month, day);
//	printf("%d年%d月%d日是该年的第%d天\n", year, month, day, days);
//	getchar();
//	return 0;
//}

//int  isleap(int  year)
//{
//    int  leap;
//    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
//    /**********found**********/
//    return  leap;
//}
//int fun(int  year, int  month, int  day)
//{
//    int  table[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int  days = 0, i;
//    for (i = 1; i < month; i++)
//        days = days + table[i];
//    /**********found**********/
//    days = days + day;
//    if (isleap(year) && month > 2)
//        /**********found**********/
//        days = days + 1;
//    return  days;
//}
//main()
//{
//    int  year, month, day, days;
//    printf("请输入年、月、日：");
//    scanf("%d%d%d", &year, &month, &day);
//    days = fun(year, month, day);
//    printf("%d年%d月%d日是该年的第%d天\n", year, month, day, days);
//    getchar();
//}

//找出不及格的学生学号
typedef struct student
{
	char sno[80];
	float score[2];
}STU;

int fun(STU *s,int n)
{
	int i;
	int x = 0;
	for (i = 0; i < n; i++)
	{
		int j;
		for (j = 0; j < 2; j++)
		{
			if ((s+i)->score[j]<60)
			{
				printf("%s ", (s+i)->sno);
				x++;
				break;
			}
		}
	}
	return x;
}

int main()
{
	STU std[4] = { "N1001", 76.5,82.0 ,"N1002", 53.5,73.0,
				"N1005", 80.5,66.0,"N1006", 81.0,56.0 };
	printf("共有位%d名学生成绩不合格.\n", fun(std, 4));
	return 0;
}