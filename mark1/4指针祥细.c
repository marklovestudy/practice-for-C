#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;	//指针变量    存的地址
//	return 0;
//}

//32位产生了   4个字节
//64位产生了   8个字节

//指针和指针类型
//指针类型决定：修改值的字节数和指针步长。
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;		//在存放时是反向存放的：44332211
//	int* pa = &a;
//	char* pc = &a;
//	*pa = 0;
//	printf("%d\n", pa);
//	*pc = 0;
//	printf("%d\n", pc);
//	//int char都可以存放地址,
//	//区别在于，int是4个字节，当*pa=0时，会4个字节全修改00000000000000000000000000000
//	//			char是1个字节，当*pc=0时，会1个字节修改00000000其它的不变0x00332211
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);	//地址+4个字节
//
//	printf("%d\n", pc);
//	printf("%d\n", pc + 1);//地址+1个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//首元素的地址
//	for (int i = 0; i < 10; i++)
//	{
//		*(p+i) = 1;
//	}
//	return 0;
//}

//野指针概念：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）指针变量在定义时如果未初始化，
// 其值是随机的，指针变量的值是别的变量的地址，意味着指针指向了一个地址是不确定的变量，
// 此时去解引用就是去访问了一个不确定的地址，所以结果是不可知的。


//野指针：无初始化变量或指针，指针地址超出变量内在空间，指针地址为别的已经结束的局部变量地址。
//避免野指针要明确其地址的空间范围，要有明确限制。

//无初始化的野指针
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部指针变量，就被初始化随机值    这种表达非法，会对其他值造成破坏
//	*p = 20;
//	return 0;
//}


//指针越界，就是超出范围，p变成了野指针，实例如下
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		*p++;
//	}
//	return 0;
//}


//因为test()结束时，a的地址被释放了，p就被成了野指针
//int test()
//{
//	int a = 0;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	p = NULL;		//不用时赋值为空,为空时是不能被使用的。所以这时*p=20会报错
//	if (p != NULL)
//	{
//		printf("有意义的地址");
//	}
//	return 0;
//}