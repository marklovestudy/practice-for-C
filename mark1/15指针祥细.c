#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//qsort(1数组地址，2数组个数，3数组元素大小-字节，4函数指针要自己写)

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void *e1,const void *e2)
//{
//	//比较两个整形值的
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
//	//躺数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//每一躺比较多少次
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
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
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;		//结构体直接用用地址指向age
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);		//结构体直接用用地址指向name
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
//	printf("%d\n",sizeof(a) );			//16	数组的大字，四个元素，每个元素是4个字节
//	printf("%d\n", sizeof(a+0));		//4/8	数组的首元素地址+0还是首元素地址。
//	printf("%d\n", sizeof(*a));			//4		首元素地址解引用，是第一个元素，4个字节
//	printf("%d\n", sizeof(a+1));		//4/8	首元素地址+1，还是一个地址。
//	printf("%d\n", sizeof(a[1]));		//4		第二个元素是一个整形，4个字节
//	printf("%d\n", sizeof(&a));			//4/8	数组地址，但也是一个地址。
//	printf("%d\n", sizeof(*&a));		//16	数组地址解引用相当于数组大小。
//	printf("%d\n", sizeof(&a+1));		//4/8	地址+1,跳过这个数组，但还是一个地址
//	printf("%d\n", sizeof(&a[0]));		//4/8	第一个元素的地址。
//	printf("%d\n", sizeof(&a[0]+1));	//4/8	第二个元素的址。
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));			//6		数组的大小
//	printf("%d\n", sizeof(arr+0));			//4/8	首元素地址
//	printf("%d\n", sizeof(*arr));			//1		首元素地址解引用，就是首元素
//	printf("%d\n", sizeof(arr[1]));			//1		第二个元素的大小
//	printf("%d\n", sizeof(&arr));			//4/8	数组地址
//	printf("%d\n", sizeof(&arr+1));			//4/8	数组后面的地址，虽然跳过，但还是地址
//	printf("%d\n", sizeof(&arr[0]+1));		//4/8	第二个元素的地址。
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));			//	随机值			
//	printf("%d\n", strlen(arr+0));			//	随机值   和上面的写法完全一样，因为地址相同
//	printf("%d\n", strlen(*arr));			//'a'-97，相当于97这个地址，跑起来就报错了。
//	printf("%d\n", strlen(arr[1]));			//'b'-98, 同上，也会出错
//	printf("%d\n", strlen(&arr));			//随机值
//	printf("%d\n", strlen(&arr+1));			//随机值，相当于从数组尾部后一地址开始计算长度。
//	printf("%d\n", strlen(&arr[0]+1));		//随机值，相当于从第二个元素地址开始计算长度。
//	return 0;
//}