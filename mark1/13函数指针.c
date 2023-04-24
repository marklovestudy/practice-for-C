#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//(*(void (*)())0)();   把0强制类型转换成void （*）（）,就是把0转换成函数的地址。然后调用0地址的函数。

//		函数名 整形   函数指针						
//void(*signal(int,void(*)(int)))(int)
//void(*   )(int)		返回类型，函数指针
// signal是一个函数声明
// 参数有二个，1int,2函数指针（其有一个参数是int，返回类型是void）
// signal函数的返回类型也是一个函数指针，参数为int,返回类型是void
//上面代码的解释为下
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	int (*p)(int, int) = add;//sub mul div
//	//需要一个可以存放四个函数指针的数组
//	int(*parr[4])(int, int) = { add, sub, mul, div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 4));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{

}

int main()
{
	char* (*p)(char*, const char*) = my_strcpy;
	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
	return 0;
}