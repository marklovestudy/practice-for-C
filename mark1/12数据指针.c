#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//}

//int main()
//{
//	char* arr[5];			//ָ������
//	char* (*pa)[5] = &arr;  //char*ָ����ָ��������Ԫ�����ͣ�*˵��pa��ָ�룬pa��ָ���������[5]paָ���������5��Ԫ��
//	int arr2[10] = { 0 };
//	int(*p)[10] = &arr2;
//	return 0;
//}

//arr  ��Ԫ�صĵ�ַ
//&arr	��������ĵ�ַ

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
//
//void print(int arr[3][5],int x,int y)
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
//
//void print2(int(*arr)[5], int x, int y)			
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(arr + i))[j]);
//			//printf("%d ", *(*(arr + i) + j));
//			//printf("%d ", *(arr[i] + j));
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}


//һά���鴫��
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

////��ά���鴫��
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int arr[3][])		//�в�����ʡ�ԣ��п���ʡ��
//{}
//void test(int *arr)		//err
//{}
//void test(int **arr)	//err
//{}
//void test(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void test1(int *p)
//{}
//void test2(char *p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test1(&a);
//	test1(p);
//	char ch = 'w';
//	char* pch = &ch;
//	test2(&ch);
//	test2(pch);
//	return 0;
//}

//����ָ�봫��
//
//void test(int** ptr)
//{
//	printf("%d ", **ptr);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p = &a;
//	int** pp = &p;
//	int* arr[3] = {&a,&b,&c};
//	test(pp);
//	test(&p);
//	test(arr);
//	return 0;
//}

//����ָ��  ������ź�����ַ��ָ��              
//int add(int x, int y)n
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int re=add(a, b);
//	printf("%d\n", re);*/
//	//&add��add���Ǻ����ĵ�ַ
//	//printf("%d %d", &add, add);
//	int (*p)(int, int) = add;		//����ָ��
//	printf("%d \n", (*p)(3, 5));
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hello world");
//	return 0;
//}