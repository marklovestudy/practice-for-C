#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//qsort(1�����ַ��2���������3����Ԫ�ش�С-�ֽڣ�4����ָ��Ҫ�Լ�д)

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
//void swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i=0;i<width;i++)
//	{ 
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2) )
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//ÿһ�ɱȽ϶��ٴ�
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+width*j, (char*)base + width*(j+1)) > 0)
//			{
//				swap((char*)base + width * j, (char*)base + width * (j + 1),width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
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
//
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	
//	//test1();
//	test2();
//	return 0;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n",sizeof(a) );			//16	����Ĵ��֣��ĸ�Ԫ�أ�ÿ��Ԫ����4���ֽ�
//	printf("%d\n", sizeof(a+0));		//4/8	�������Ԫ�ص�ַ+0������Ԫ�ص�ַ��
//	printf("%d\n", sizeof(*a));			//4		��Ԫ�ص�ַ�����ã��ǵ�һ��Ԫ�أ�4���ֽ�
//	printf("%d\n", sizeof(a+1));		//4/8	��Ԫ�ص�ַ+1������һ����ַ��
//	printf("%d\n", sizeof(a[1]));		//4		�ڶ���Ԫ����һ�����Σ�4���ֽ�
//	printf("%d\n", sizeof(&a));			//4/8	�����ַ����Ҳ��һ����ַ��
//	printf("%d\n", sizeof(*&a));		//16	�����ַ�������൱�������С��
//	printf("%d\n", sizeof(&a+1));		//4/8	��ַ+1,����������飬������һ����ַ
//	printf("%d\n", sizeof(&a[0]));		//4/8	��һ��Ԫ�صĵ�ַ��
//	printf("%d\n", sizeof(&a[0]+1));	//4/8	�ڶ���Ԫ�ص�ַ��
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));			//6		����Ĵ�С
//	printf("%d\n", sizeof(arr+0));			//4/8	��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));			//1		��Ԫ�ص�ַ�����ã�������Ԫ��
//	printf("%d\n", sizeof(arr[1]));			//1		�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));			//4/8	�����ַ
//	printf("%d\n", sizeof(&arr+1));			//4/8	�������ĵ�ַ����Ȼ�����������ǵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));		//4/8	�ڶ���Ԫ�صĵ�ַ��
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));			//	���ֵ			
//	printf("%d\n", strlen(arr+0));			//	���ֵ   �������д����ȫһ������Ϊ��ַ��ͬ
//	printf("%d\n", strlen(*arr));			//'a'-97���൱��97�����ַ���������ͱ����ˡ�
//	printf("%d\n", strlen(arr[1]));			//'b'-98, ͬ�ϣ�Ҳ�����
//	printf("%d\n", strlen(&arr));			//���ֵ
//	printf("%d\n", strlen(&arr+1));			//���ֵ���൱�ڴ�����β����һ��ַ��ʼ���㳤�ȡ�
//	printf("%d\n", strlen(&arr[0]+1));		//���ֵ���൱�ڴӵڶ���Ԫ�ص�ַ��ʼ���㳤�ȡ�
//	return 0;
//}