#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int red(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p = &a;		//����ָ��
//	int arr[3] = { a,b,c };		//����
//	int* arr1[3] = { &a,&b,&c };		//ָ������
//	int(*parr)[3] = &arr;			//����ָ��
//	int (*pa)(int, int) = add;		//����ָ��
//	int (*pparr[3])(int, int) = { add,red,mul };		//����ָ������
//	int (*(*ppparr)[3])(int, int) = &pparr;				//ָ����ָ�������ָ��
//	printf("%d\n", pa(3, 5));
//	printf("%d %d %d\n", pparr[0](2, 3), pparr[1](5, 3), pparr[2](3, 4));
//	printf("%d \n", (*ppparr)[1](2, 3));
//	return 0;
//}

//�ص��������Ѻ�����ַ��ָ�봫�ݸ���ĺ�����Ȼ��ͨ������������ýлص�����

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	void* p = &a;		//void*���Խ����������͵ĵ�ַ��
//	//*p = 20;//err		//void*��ָ�벻���Խ����ò�������Ҫָ��ָ�����Ͳſ��Խ����á�
//	*(int*)p = 20;
//	printf("%d", a);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void *e1,const void *e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;		//<0 =0 >0
//}
//
//int main()
//{
//	int arr[10] = { 5,4,6,7,3,8,2,9,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int ssz = sizeof(s) / sizeof(s[1]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);				//qsort(�����ַ,���ȣ�ÿ��Ԫ�ش�С���ȽϺ���)
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int cmp_float(const void* e1, const void* e2)
//{
//	//return *(float*)e1 - *(float*)e2;
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//int main()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;		//�ṹ��ֱ�����õ�ַָ��age
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);		//�ṹ��ֱ�����õ�ַָ��name
//}
//
//int main()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[1]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d ", s[i].name, s[i].age);
//	}
//	printf("\n");
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d ", s[i].name, s[i].age);
//	}
//
//	return 0;
//}
