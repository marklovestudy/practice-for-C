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

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//
//int main()
//{
//	char* (*p)(char*, const char*) = my_strcpy;
//	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("**   1  add        2 sub        **\n");
//	printf("**   3  mul        4 div        **\n");
//	printf("**          0 exit              **\n");
//	printf("**********************************\n");
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
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			scanf("%d%d", &x, &y);
//			printf("%d\n",add(x, y));
//			break;
//		case 2:
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误。");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("**   1  add        2 sub        **\n");
//	printf("**   3  mul        4 div        **\n");
//	printf("**   5  xor        0 exit       **\n");
//	printf("**********************************\n");
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
//int xor (int x, int y)
//{
//	return x ^ y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfarr[6])(int, int) = { 0,add,sub,mul,div,xor };			//函数指针数组--用途--转移表
//	do
//	{
//		menu();
//		printf("请选择。\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入二个数。\n");
//			scanf("%d%d", &x, &y);
//			int re = pfarr[input](x,y);
//			printf("结果：%d\n", re);
//		}
//		else if (input==0)
//		{
//			printf("退出");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("**   1  add        2 sub        **\n");
//	printf("**   3  mul        4 div        **\n");
//	printf("**          0 exit              **\n");
//	printf("**********************************\n");
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
//
////回调函数，通过传地址，再来调用该函数叫回调函数。
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入一个二位数\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误。");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针

//int main()
//{
//	int arr[10] = { 0 };	//数组
//	//int * arr1[3]={&a,&b,&c};		//指针数组
//	int(*p)[10] = &arr;		//数组指针
//	int (*pf)(int, int);	//函数指针
//	int (*pfarr[4])(int, int);	//函数指针数组
//	int(*(*ppfarr)[4])(int, int) = &pfarr;		//ppfarr指向函数指针数组的指针
//	//ppfarr是一个数组指针，指向的数组有四个元素，每个元素的类型为int(*)(int,int)
//	return 0;
//
//}

//回调函数的使用。
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void (*p)(char*))
//{
//	p("mark");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

