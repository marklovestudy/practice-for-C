#define _CRT_SECURE_NO_WARNINGS 1

//调试方式
//debug		
//release	
//debug:在文件目录下有  40kb包含调试信息，并且不作任何优化，便于程序员调试程序
//release:在文件目录下有 9kb它往往进行各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用。

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	for (i=0;i<=16;i++)			//debug下如果arr[i]=0溢出超过2，i设置为大于等12以上时，是一个死循环，release下就是一个正常的循环。
//	{
//		printf("hehe\n");
//		printf("%d\n", i);
//		arr[i] = '\0';
//	}
//	return 0;
//}


//F5调试 快速跳到断点  
//F9创建断点，
//F10逐过程   不会管你出不出错
//F11逐句
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}

//调用堆栈
//void test2()
//{
//	printf("hehe");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	printf("%d\n", &i);
//	for (i=0;i<=16;i++)			//debug下如果arr[i]=0溢出超过2，i设置为大于等12以上时，是一个死循环，release下就是一个正常的循环。
//	{
//		printf("hehe\n");
//		printf("%d %d\n",i, &arr[i]);		//arr[16]的地址和i的地址一样
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d %d", &i, &arr[12]);		//二个地址相同  debug下时   release下地址不相同
//	return 0;
//}

//代码运行正常
//BUG少
//可读性高
//可维护性高
//注释清晰
//文档齐全

//常见的coding技巧
//使用assert
//尽量使用const
//养成良好的编码风格
//添加必要的注释
//避免编码的陷阱

//void my_strcpy(char* dest, char* src)
//{
//	int i = 0;
//	int sz = 0;
//	while (*(src+sz) !='\0')
//	{
//		sz++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		*(dest + i) = *(src + i);
//	}
//	*(dest + sz) = '\0';
//}

//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)			//任何一个地址的值为0都会停止
//		{
//			;
//		}
//	}
//}
//
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//断言为真通过，为假报错
//	assert(src != NULL);
//	while (*dest++ = *src++)			//任何一个地址的值为0都会停止
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}