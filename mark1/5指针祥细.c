#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ָ�������

//ָ��Ӽ�����,��������ָ�����;����ġ��ַ�Ϊ1���ֽڣ�intΪ4���ֽڡ�
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
//��forѭ��ͨ��ָ���ַ���������޸�ֵ
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

//ָ��-ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int b = &arr[9] - &arr[8];
//	printf("%d", b);
//	return 0;
//}

//int my_strlen(char* str)		//��ָ���������ͣ����򱨴�
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
//	//strlen -���ַ�������
//	//�ݹ� - ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//��forѭ��ͨ��ָ���ַ���������޸�ֵ
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
//	for (p = &arr[k-1]; p <= &arr[0]; p--)	//��������һ��ָ��ĺ�һ��ָ���ַ�Ƚϣ���������ָ�����ǰһ��ָ���ǰһ��ָ��Ƚ�
//	{										//  p1=&arr[0-1]   <p2<   p3=&arr[k]	ָ����Ժ�p3�ȣ������ܺ�p1��			
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
//	//1. &arr-&������������Ԫ�ص�ַ��������������ĵ�ַ��
//	//2.sizeof(arr)   arr��ʾ���������������������������Ĵ�С
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

//����ָ��Ͷ༶ָ��
//int main()
//{
//	int a = 20;
//	int* pa = &a;		//ָ��a�ĵ�ַ
//	int** ppa = &pa;	//ָ��pa�ĵ�ַ
//	int*** pppa = &ppa;	
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int* pa = &a;		//ָ��a�ĵ�ַ
//	int** ppa = &pa;	//ָ��pa�ĵ�ַ
//	int*** pppa = &ppa;
//	printf("%d\n", ***pppa);		//�����ü���ȡ��a��ֵ
//	return 0;
//}

//ָ������      -��һ������   ���ָ�������
//����ָ��		-��һ��ָ��	  ָ�������ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int *pa = &a;
	int *pb = &b;
	int *pc = &c;*/
	int* arr2[3] = { &a,&b,&c };	//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}