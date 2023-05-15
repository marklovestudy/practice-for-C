#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int t1 = 7;
//	int t2 = 5;
//	int t3 = 6;
//	int t4 = 4;
//	int n = 0;
//	//如果是7的倍数，5的倍数，6的倍数，4的倍数，那就是一声，相当于公倍数同声
//	//n声
//	int i;
//	for (i = 0; i <= 63; i++)
//	{
//		if (i <= 36)
//		{
//			if (i % 7 == 0 | i % 6 == 0 | i % 5 == 0 | i % 4 == 0)
//			{
//				n += 1;
//				printf("%d ", i);
//			}
//		}
//		else if (36<i && i<=45)
//		{
//			if (i % 7 == 0 | i % 6 == 0 | i % 5 == 0 )
//			{
//				n += 1;
//				printf("%d ", i);
//			}
//		}
//		else if (45<i && i<= 54)
//		{
//			if (i % 7 == 0 | i % 6 == 0 )
//			{
//				n += 1;
//				printf("%d ", i);
//			}
//		}
//		else
//		{
//			if (i % 7 == 0 )
//			{
//				n += 1;
//				printf("%d ", i);
//			}
//		}
//	}
//	printf("\n一共炸了%d次\n", n);
//	return 0;
//}
#pragma warning (disable:4996)
//#define OK(i, t, n) ((i%t==0) && (i/t<n))
//
//int main()
//{
//	int i, t1 = 7, t2 = 5, t3 = 6, t4 = 4,n=10,r=0;
//	for (i = 0; i <= 63; i++)
//	{
//		if (OK(i,t1,n)|| OK(i, t2, n) || OK(i, t3, n) || OK(i, t4, n))
//		{
//			printf("%d ", i);
//			r++;
//		}
//	}
//	printf("\n一共炸了%d次\n", r);
//	return 0;
//}

//#define ok(a,b,c,d,e,f) (a+b+c+d+e+f)
//int main()
//{
//	int re = ok(1, 2, 3, 4, 5, 6);
//	printf("%d", re);
//	return 0;
//}

//找中间数

//#define oo(a,b,c) ((a<=b && b<=c)? b:oo(b,c,a));
//int oo(int a, int b, int c)
//{
//	return ((a <= b && b <= c) || (c<=b && b <= a)) ? b : oo(b, c, a);
//}
//
//int main()
//{
//	int a = 53, b = 9, c = 45;
//	int re = oo(a, b, c);
//	printf("%d", re);
//	return 0;
//}

//int fun(int  a, int  b, int  c)
//{
//	int  t;
//	/**********found**********/
//	t = (a > b) ? (b > c ? b : (a > c ? c : a)) : ((a > c) ? a : ((b > c) ? c : b));
//	return  t;
//}
//main()
//{
//	int  a1 = 3, a2 = 5, a3 = 4, r;
//	r = fun(a1, a2, a3);
//	printf("\nThe middle number is  :  %d\n", r);
//}

//void fun(char *a, int b, double c)
//{
//	FILE* fo;
//	fo = fopen("aa.dat", "w");
//	fprintf(fo, "%s %d %f", a, b, c);
//	fclose(fo);
//	fo = fopen("aa.dat", "r");
//	char ch = fgetc(fo);
//	while (!feof(fo))		//feof(fo)标准库函数，在stdio.h中，检测文件结束符，如果文件结束，返回真，否则返回假。
//	{
//		putchar(ch);
//		ch = fgetc(fo);
//	}
//	putchar('\n');
//	fclose(fo);
//}
//
//int main()
//{
//	char a[] = "abcdef";
//	int b = 123;
//	double c = 12.44;
//	fun(a, b, c);
//	return 0;
//}