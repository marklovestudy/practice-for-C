#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//冒泡算法
//指针修改
//maopao(int* p,int n)
//{
//	int i = 0;
//	int j = 0;
//	int tem = 0;
//	for (i; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (*(p+j) < *(p+j + 1))
//			{
//				tem = *(p+j);
//				*(p+j)=*(p+j+1);
//				*(p+j+1)=tem;
//			}
//		}
//	}
//}


//冒泡算法   索引修改
//maopao(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - i-1; j++)
//		{
//			if (arr[j] <arr[j+1])
//			{ 
//				arr[j] = arr[j] + arr[j + 1];
//				arr[j + 1] = arr[j] - arr[j + 1];
//				arr[j] = arr[j] - arr[j + 1];
//			}
//		}
//	}
//}
//

//maopao(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < n - i-1; j++)
//		{
//			if (arr[j] <arr[j+1])
//			{ 
//				arr[j] = arr[j] + arr[j + 1];
//				arr[j + 1] = arr[j] - arr[j + 1];
//				arr[j] = arr[j] - arr[j + 1];
//				flag = 0;
//			}
//		}
//		if (flag == 1)	//说明已经有序，停止循环，这样主要是提高效率。
//			break;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 6, 8, 1, 7, 3, 9, 23, 12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);			//首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);		//首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);			//整个数组的地址   可打印对比。
//	printf("%p\n", &arr);			
//	return 0;
//}