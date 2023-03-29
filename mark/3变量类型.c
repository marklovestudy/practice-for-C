#define _CRT_SECURE_NO_WARNINGS 1

//全局变量和局部变量

#include<stdio.h>
//
//int a = 12;	//全局变量
//
//int main()
//{
//	int a = 10;				//局部变量
//	printf("%d", a);
//	return 0;
//}
//
//#define max 10			//3define 常量
//
//enum Color				//4enum   枚举常量0，1，2索引取值
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	//3;			//1字面常量
//	/*const int a = 5;
//	int arr[10] = { 0 };
//	printf("%d\n", a);*/    //const   1常变量
//	//printf("%d\n", max);
//	enum Color color = YELLOW;
//	printf("%d\n", color);
//	return 0;
//}

//作用域
//作用域就是哪里可以用哪里就是作用域，一般局部变量是定义的大括号内部，全局变量是整个工程
//可以用extern来申明外部符号

//int main()
//{
//	extern int num22;
//	printf("%d", num22);
//	return 0;
//}

//生命周期
//局部变量是从进入大括号开始，到出大括号结束
//全局变量和main函数同步。