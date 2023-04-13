#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//struct MyStruct
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//创建  MyStruct结构体的一个对象
//	struct MyStruct aa = { "mark",30,"20040914323" };
//	/*printf("%s\n", aa.name);
//	printf("%d\n", aa.age);
//	printf("%s\n", aa.id);*/
//	struct MyStruct* ps = &aa;
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//
//	//指针指向对象属性
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	return 0;
//}

//隐式整型转换

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	//00000011
//	//01111111
//	//10000010
//	//隐形转换其它位补符号位
//	//0000000000000000000000000000011
//	//0000000000000000000000001111111
//	//0000000000000000000000010000010
//	//
//	//10000010隐形转换其它位补符号位   整形提升
//	//1111111111111111111111110000010		补码
//	//1111111111111111111111110000001		反码
//	//1000000000000000000000001111110		原码-126
//	printf("%d\n", c);
//	return 0;
//}

//整形提升+c
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%d", sizeof(c));
//	printf("%d", sizeof(+c));		//整形提升   补满符号位到32
//	printf("%d", sizeof(!c));
//	return 0;
//}

//算术转换
//int main()
//{
//	float a = 3.14;
//	int b = a;
//	printf("%d", b);
//	return 0;
//}

//复杂表达式求值的三个影响因素。
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//	printf("%d", c);
//	return 0;
//}

//非法表达式1，2
//a*b+c*d+e*f    问题表达式，优先级不明确，因为a,b,c,d,e,f可能是表达式，不一定是变量。
//c + --c	同上，操作符的优先级只能决定自减-的运算在+的运算前面，但是我们并没有办法得知，
//			+操作符的左操作数的获取在右操作数之前还是之后求值，所以结果是不可预测的，是有歧义的。


//int main()
//{
//	int a = 2;
//	int b = a + --a;	//先减减a=1    1+1=2
//	printf("%d", b);
//	return 0;
//}

//非法表达式3
//i=i-- - --i*(i=-3)*i++ + ++i;每个编译器的结果不一样。

//非法表达式4
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	return 0;
//}

//非法表达式5
int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d", a);
	return 0;

}

//表达式需要是唯一顺序表达式，不然为非法表达式。