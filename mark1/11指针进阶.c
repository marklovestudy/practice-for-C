#define _CRT_SECURE_NO_WARNINGS 1


//1字符指针
//2数组指针
//3指针数组
//4数组传参和指针传参
//5函数指针
//6函数指针数组
//7指向函数指针数组的指针
//8回调函数
//9指针和数组面试题解析

#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	printf("%d\n", arr);
//	printf("%d\n", arr+1);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//1字符指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}

//int main()
//{
//	//const char* p = "abcdef";
//	char* p="abcdef";	//"abcdef"是一个常量字符串，把a的地址给了p
//	//*p = 'w';			//常量字符串是不可以被修改的
//	printf("%c\n", *p);
//	printf("%s\n", p);		//到'\0'结束。
//	return 0;
//}

//2数组指针
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha");
//	}
//	printf("%d\n", arr1);
//	printf("%d\n", arr2);
//	return 0;
//}


//指针数组
//int main()
//{
//	int arr[10];	//整形数组
//	char ch[5];		//字符数组
//	int* parr[4];	//存放整形指针的数组  -  指针数组
//	char* pch[4];	//存放字符指针的数组  -  指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* parr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *parr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };		//指针数组   就是用来存放指针的数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int* arr1[4];		//一级整形指针数组
//	//char* arr2[4];		//一级字符指针数组
//	//char** arr3[4];		//二级字符指针数组
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", a);
//	printf("%d\n", pa);
//	printf("%d\n", *pa);
//	printf("%d\n", ppa);
//	printf("%d\n", *ppa);
//	printf("%d\n", **ppa);
//	return 0;
//}


//2数组指针
//

//int main()
//{
//	//int* p=NULL;	//整形指针  - 指向整形的指针	用来存放整形的地址
//	//char* pc = NULL;	//字符指针 -指向字符的指针  用来存放字符的地址
//	//数组指针 - 指向数组的指针，用来存放数组的地址
//	//int arr[10] = { 0 };
//	////arr   首元素地址
//	////&arr[0]   首元素地址
//	////&arr		数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;		//数组的地址要存起来,此时的p就是数组指针
//	printf("%d\n", (*p)[4]);
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	char a = 's';
//	char b = 't';
//	char c = 'r';
//	char* arr[3] = { &a,&b,&c };		//指针数组   用来存放地址的
//	char* (*p)[3] = &arr;				//数组指针   用来存入数组的地址，被存放的数组的内容是字符指针，所以用char*,
//	printf("%c\n",*(*p)[0]);
//	printf("%c\n", *(*p)[1]);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int* (*p)[3] = &arr;
//	printf("%d\n", *(*p)[1]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n", *(*p + i));		//*p=arr
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}

//参数是数组的形式
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);	//arr-数组名，数组名就是首元素地址，而首元素是{1,2,3,4,5}
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);	//*(p+i)=*(arr + i)=arr[i]= p[i]
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int arr4[5] = { 4,5,6,7,8 };
//	int(*p[4])[5] = { arr1,arr2,arr3,arr4 };
//	int x = 0;
//	int y = 0;
//	for (x = 0; x < 4; x++)
//	{
//		for (y = 0; y < 5; y++)
//		{
//			printf("%d ", (*p[x])[y]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//总结
//int arr[5];			是一个数组，有5个元素，每个元素是一个int
//int* parr1[10];		是一个指针数组，有10个元素，每个元素是一个int类型的指针
//int(*parr2)[10];		是一个数组指针，指向的是一个数组，数组有10个元素，每个元素的类型int
//int(*parr3[10])[5];	是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int类型。