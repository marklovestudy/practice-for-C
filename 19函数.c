#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "add.h"    //加载自己写的头文件
//void swap1(int a, int b)				//这种交换值无法实现，原因是因为形参a,b的地址和实参地址相异。
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}

//void swap(int* pa, int* pb)				//可以通过指针地址来修改：1把地址传过去，2然后用地址来修改值。  *间隔符
//{
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* pa = &a;
//	//int* pb = &b;
//	//swap(pa, pb);
//  swap(&a,&b);
//	printf("a = % d, b = % d", a, b);
//	return 0;
//}


//形参，形式参数
//实参，具体真实存在的参数，如具体数据，变量，函数等。
//形参的改变是不会改变实参的。

//传值调用，形参和实参具有不同的地址，所修改形参不会影响实参。不需要改变量本身，只需要传值就行。
//传址调用，可以内外部参数产生联系，可以通过地址间接取值修改实参。需要改变变量本身，就要传址。
//
//int pd(int a)
//{
//	int j = 0;
//	for (j=2;j<=sqrt(a);j++)
//	{
//		if (a % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;			//全遍历完没找到因素，则返回1代表这个数是质数。
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//		if (pd(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if (is_leap_year(i) == 1)
//			printf("%d是闰年。\n", i);
//	}
//	return 0;
//}

//int binary_search(int arr[],int n,int r)
//{
//	int l = 0;
//	//int r = sizeof(arr) / sizeof(arr[0]);		//地址/第一个元素的长度求不出元素个数
//	int m = 0;
//	while (l <= r)
//	{
//		m = (l + r) / 2;
//		if (n < arr[m])    //找左边
//			r = m - 1;
//		else if (n > arr[m])	//找右边
//			l = m + 1;
//		else
//		{
//			return m;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,3,4,6,8,9,13,24,50,67,78,89,123,234,432,543,564,657 };
//	int n = 0;
//	int r = sizeof(arr) / sizeof(arr[0])-1;
//	int ret = 0;
//	printf("你要找的数字：");
//	scanf("%d", &n);
//	ret = binary_search(arr,n,r);			//实际上传过去的是一个地址
//	if ( ret== -1)
//		printf("没有找到");
//	else
//		printf("找到了在%d", ret);
//}

//void Add(int* pi)
//{
//	*pi += 1;
//}
//
//int main()
//{
//	int i = 0;
//	Add(&i);
//	printf("第%d次\n",i);
//	Add(&i);
//	printf("第%d次\n", i);
//	Add(&i);
//	printf("第%d次\n", i);
//	return 0;
//}

//void new_line()
//{
//	printf("haha\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i=0;i<=2;i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//}

//int main()
//{
//	int len = 0;
//	////1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));		//printf()返回的是长度。
//	return 0;
//}

//int Add(int x, int y);



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}