#define _CRT_SECURE_NO_WARNINGS 1

//auto	:声明自动变量
//break	:跳出当前循环体
//case	:开关语句分支
//char	:声明字符型变量或函数返回值类型
//const	:声明只读变量
//continue	:结束本次循环，开始下一次循环
//default	:开关语句中的‘默认’分支
//do	:循环语句的循环体
//double:声明双精度浮点数或函数返回值类型
//else	:条件语句否定分支
//enum	:声明枚举类型
//extern	:声明变量或函数是在其它文件或本文件的其他位置定义
//float	:声明浮点型变量或函数返回值定义
//for	:一种循环语句
//goto	:无条件跳转语句
//if	:条件语句
//int	:声明整型变量或函数
//long	:声明长整型或函数返回值类型
//register	:声明寄存器变量
//return:子程序返回语句（可以带参数，也可不带参数）
//short	:声明短整型和函数返回值
//signed:声明有符号类型变量或函数
//sizeof:计算数据类型或变量长度（占用几个字节）
//static:声明静态变量
//struct:声明结构体类型
//switch:用于开关语句
//typedef	:用以给数据类型取别名
//unsigned	:声明无符号类型变量或函数
//union	:声明共用体类型
//viod	:声明函数无返回值或无参数，声明无类型指针
//volatile	:说明变量在程序执行中可被隐含地改变
//while	:循环语句的循环条件
//#include<stdio.h>
//
////#define MM(x,y) x>y x:y;
//
//int ad()
//{
//	static int a = 0;
//	a++;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	//extern int add(x,y);	//声明外部函数
//	//int a = 0;			//auto关键字可以省略
//	//a=add(5,8);
//	//printf("%d", a);
//	int n = 0;
//	extern int add(x,y);
//	n = add(3, 6);
//	while (n < 10)
//	{
//		n++;
//		ad();
//	}
//	return 0;
//}

//#include<stdio.h>
//#define mm 1000;
//#define MM(x,y) (x>y? x:y);
//int main()
//{
//	int a = mm;
//	int v = MM(4, 10);
//	printf("%d",a);
//	printf("%d", v);
//	return 0;
//}