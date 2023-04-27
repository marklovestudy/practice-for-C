#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

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

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));		//7		指的是数组的空间大小，因为最后有一个'\0'，所以为7
//	printf("%d\n", sizeof(arr + 0));	//4/8	首元素地址+0，还是首元素地址，地址长度为4、8
//	printf("%d\n", sizeof(*arr));		//1		首元素地址解引用，那就是首元素，长度为1
//	printf("%d\n", sizeof(arr[1]));		//1		第二个元素，长度为1
//	printf("%d\n", sizeof(&arr));		//4/8	数组地址，地址都是32为4，64为8
//	printf("%d\n", sizeof(&arr + 1));	//4/8	数组地址+1，虽然跳过数组，但还是一个地址。
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8	首元素地址+1，表示第二个元素的地址。
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));			//6			指的是数组的长度
//	printf("%d\n", strlen(arr + 0));		//6			首元素地址+0，还是首元素的地址。'\0'结束
//	printf("%d\n", strlen(*arr));			//err		strlen只接受地址，而传的是一个字符'a',97,就会把97当成地址来使用，非法访问报错
//	printf("%d\n", strlen(arr[1]));			//err		第二个元素，不是地址。
//	printf("%d\n", strlen(&arr));			//6			数组地址，从开始算到'\0'结束，数组的地址，会有一个警告
//	printf("%d\n", strlen(&arr + 1));		//随机值	数组地址+1，虽然跳过数组，但还是一个地址。
//	printf("%d\n", strlen(&arr[0] + 1));	//5			首元素地址+1，表示第二个元素的地址。到'\0'结束。
//	return 0;
//}

//int main()		//sizeof()接受的是一个数据类型，并计算数据的空间长度
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));			//4/8		p是指针，指针都是4或8.	
//	printf("%d\n", sizeof(p+1));		//4/8		首元素地址+1，第二个元素地址，地址长度为4、8
//	printf("%d\n", sizeof(*p));			//1			首元素地址解引用，那就是首元素，长度为1
//	printf("%d\n", sizeof(p[0]));		//1			第一个元素[0]，长度为1
//	printf("%d\n", sizeof(&p));			//4/8		二级指针还是指针，地址都是32为4，64为8
//	printf("%d\n", sizeof(&p + 1));		//4/8		二级指针+1，还是一个指针。
//	printf("%d\n", sizeof(&p[0] + 1));	//4/8		首元素地址+1，表示第二个元素的地址。
//	return 0;
//}

//int main()		//strlen()接受的是一个地址，到'\0'结束。
//{
//	char *p = "abcdef";
//	printf("%d\n", strlen(p));			//6			指的是数组的长度
//	printf("%d\n", strlen(p + 1));		//5			首元素地址+1，第二个元素开始，'\0'结束
//	printf("%d\n", strlen(*p));			//err		strlen只接受地址，而传的是一个字符'a',97,就会把97当成地址来使用，非法访问报错
//	printf("%d\n", strlen(p[0]));		//err		第二个元素，不是地址。
//	printf("%d\n", strlen(&p));			//随机值	相当于一个二级指针。
//	printf("%d\n", strlen(&p + 1));		//随机值	相当于一个二级指针的后面一个地址开始算。到'\0'
//	printf("%d\n", strlen(&p[0] + 1));	//5			首元素地址+1，表示第二个元素的地址。到'\0'结束。
//	return 0;
//}