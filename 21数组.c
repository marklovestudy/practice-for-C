#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int n = 5;
//	int arr[n] = { 1,2,3,4 };	//��������д������ֻ���ǳ���	
//	int arr[10] = { 1,2,3 };	//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
//	char arr1[5] = "abc";		//����ȫ��ʼ����ʣ�µ�Ԫ��ҲĬ��Ϊ0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";			
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));		//ָ�����ַ���\0ǰ����ַ�����
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0,11};				//ÿ��������4���ֽڡ�11������44���ֽڡ�44/4�������������
//	printf("%d", sizeof(arr1)/sizeof(arr1[0]));
//	return 0;
//}

//��ӡÿ��Ԫ�ص��ڴ��ַ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);		//�������ڴ��еĵ�ַ��������ŵġ�
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//��ά����Ĵ���
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};		//����һ���������е����顣����ȫ��ʼ��ʱ��û��ʼ����������0
//	printf("%d", arr[1][0]);			//5
//}

//int main()
//{
//	int arr[3][4]={{}}
//}

//���δ�ӡ�������ÿ��ֵ
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