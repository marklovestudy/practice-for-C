#define _CRT_SECURE_NO_WARNINGS 1


//1�ַ�ָ��
//2����ָ��
//3ָ������
//4���鴫�κ�ָ�봫��
//5����ָ��
//6����ָ������
//7ָ����ָ�������ָ��
//8�ص�����
//9ָ����������������

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

//1�ַ�ָ��
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
//	char* p="abcdef";	//"abcdef"��һ�������ַ�������a�ĵ�ַ����p
//	//*p = 'w';			//�����ַ����ǲ����Ա��޸ĵ�
//	printf("%c\n", *p);
//	printf("%s\n", p);		//��'\0'������
//	return 0;
//}

//2����ָ��
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


//ָ������
//int main()
//{
//	int arr[10];	//��������
//	char ch[5];		//�ַ�����
//	int* parr[4];	//�������ָ�������  -  ָ������
//	char* pch[4];	//����ַ�ָ�������  -  ָ������
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
//	int* parr[] = { arr1,arr2,arr3 };		//ָ������   �����������ָ�������
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
//	//int* arr1[4];		//һ������ָ������
//	//char* arr2[4];		//һ���ַ�ָ������
//	//char** arr3[4];		//�����ַ�ָ������
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


//2����ָ��
//

//int main()
//{
//	//int* p=NULL;	//����ָ��  - ָ�����ε�ָ��	����������εĵ�ַ
//	//char* pc = NULL;	//�ַ�ָ�� -ָ���ַ���ָ��  ��������ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�룬�����������ĵ�ַ
//	//int arr[10] = { 0 };
//	////arr   ��Ԫ�ص�ַ
//	////&arr[0]   ��Ԫ�ص�ַ
//	////&arr		����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;		//����ĵ�ַҪ������,��ʱ��p��������ָ��
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
//	char* arr[3] = { &a,&b,&c };		//ָ������   ������ŵ�ַ��
//	char* (*p)[3] = &arr;				//����ָ��   ������������ĵ�ַ������ŵ�������������ַ�ָ�룬������char*,
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

//�������������ʽ
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

//������ָ�����ʽ
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
//	print1(arr,3,5);	//arr-��������������������Ԫ�ص�ַ������Ԫ����{1,2,3,4,5}
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

//�ܽ�
//int arr[5];			��һ�����飬��5��Ԫ�أ�ÿ��Ԫ����һ��int
//int* parr1[10];		��һ��ָ�����飬��10��Ԫ�أ�ÿ��Ԫ����һ��int���͵�ָ��
//int(*parr2)[10];		��һ������ָ�룬ָ�����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�����int
//int(*parr3[10])[5];	��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int���͡�