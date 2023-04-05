#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int n = 5;
//	int arr[n] = { 1,2,3,4 };	//索引不能写变量，只能是常量	
//	int arr[10] = { 1,2,3 };	//不完全初始化，剩下的元素默认为0
//	char arr1[5] = "abc";		//不完全初始化，剩下的元素也默认为0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";			
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));		//指的是字符串\0前面的字符个数
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0,11};				//每个数字是4个字节。11个就是44个字节。44/4就是数组个数。
//	printf("%d", sizeof(arr1)/sizeof(arr1[0]));
//	return 0;
//}

//打印每个元素的内存地址。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);		//数据在内存中的地址是连续存放的。
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//二维数组的创建
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};		//这是一个三行四列的数组。不完全初始化时，没初始化的数据是0
//	printf("%d", arr[1][0]);			//5
//}

//int main()
//{
//	int arr[3][4]={{}}
//}

//依次打印数组里的每个值
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
//	for (i; i < 4; i++)
//	{
//		for (j=0; j < 4; j++)
//		{
//			printf("%p %d\n", &arr[i][j],arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	arr[1] = 33;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}