#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////初始化arr[10]={1,1,1,1,1,1,1,1,1,1}
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}
	
//反序  arr[10]={1,2,3,4,5,6,7,8,9,10}

//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int tem = 0;
//	while (i<j)
//	{
//		tem = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tem;
//		i++;
//		j--;
//	}
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//值交换  arr1[5]={1,3,5,7,9}   arr2[5]={2,4,6,8,10}

void ac(int arr1[], int arr2[], int sz)
{
	int i = 0;
	int tem = 0;
	for (i = 0; i < sz; i++)
	{
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
}

void print(int arr1[],int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
}

int main()
{
	int arr1[5] = { 1,3,5,7,9 };
	int arr2[5] = { 2,4,6,8,10 };
	ac(arr1, arr2, 5);
	print(arr1, arr2, 5);
	return 0;
}