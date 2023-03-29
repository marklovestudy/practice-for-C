#define _CRT_SECURE_NO_WARNINGS 1
//1.找到你的VS2013/2019/2022的安装路径，用最简单的方法就是直接搜索newc++，然后点击newc++file.cpp，右键点击打开文件所在的位置，或者直接右键打开方式，用记事本打开。
// 2.把#define _CRT_SECURE_NO_WARNINGS 1复制粘贴到里面，并保存。这样你之后创建的代码第一行，就会自动生成这行代码。

#include<stdio.h>  //standard input output.header,“输入、输出"如scanf()和printf()

//int main()		//void main() 说明main函数没有返回值
////int main(void)和int main()是一样的，括号里没有东西就相当于void，只是说明main函数有一个int类型的返回值
//{
//	printf("hello world");		//打印hello world    printf:print-function
//	return 0;		//返回0
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);    //取地址赋值
//	sum = num1 * num2;
//	printf("%d*%d=%d",num1,num2,sum);
//	return 0;
//}