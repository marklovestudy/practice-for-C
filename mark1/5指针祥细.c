#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//指针的运算

//指针加减整数,步长是由指针类型决定的。字符为1个字节，int为4个字节。
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}
// 
// 
//用for循环通过指针地址遍历数组修改值
//#define k 5
//int main()
//{
//	int arr[k] = { 0 };
//	int* p = arr;
//	for (p = &arr[0]; p < &arr[k];)
//	{
//		*p++ = 1;
//	}
//	return 0;
//}

//指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int b = &arr[9] - &arr[8];
//	printf("%d", b);
//	return 0;
//}

//int my_strlen(char* str)		//需指明参数类型，否则报错
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen -求字符串长度
//	//递归 - 模拟实现了strlen-计算器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//用for循环通过指针地址遍历数组修改值
//#define k 5
//int main()
//{
//	int arr[k] = { 0 };
//	int* p = arr;
//	for (p = &arr[0]; p < &arr[k];p++)
//	{
//		*p = 1;
//	}
//	return 0;
//}
//
//#define k 5
//int main()
//{
//	int arr[k] = { 0 };
//	int* p = arr;
//	for (p = &arr[k-1]; p <= &arr[0]; p--)	//允许和最后一个指针的后一个指针地址比较，但不能让指针和最前一个指针的前一个指针比较
//	{										//  p1=&arr[0-1]   <p2<   p3=&arr[k]	指针可以和p3比，但不能和p1比			
//		*p = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1. &arr-&数组名不是首元素地址，而是整个数组的地址。
//	//2.sizeof(arr)   arr表示的是数组名，计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//二级指针和多级指针
//int main()
//{
//	int a = 20;
//	int* pa = &a;		//指向a的地址
//	int** ppa = &pa;	//指向pa的地址
//	int*** pppa = &ppa;	
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int* pa = &a;		//指向a的地址
//	int** ppa = &pa;	//指向pa的地址
//	int*** pppa = &ppa;
//	printf("%d\n", ***pppa);		//解引用即可取到a的值
//	return 0;
//}

//指针数组      -是一个数组   存放指针的数组
//数组指针		-是一个指针	  指向数组的指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int *pa = &a;
	int *pb = &b;
	int *pc = &c;*/
	int* arr2[3] = { &a,&b,&c };	//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}