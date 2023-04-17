#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//结构体
//struct MyStruct
//{
//	成员列表;
//}变理列表;
//
//typedef struct MyStruct
//{
//	成员列表;
//}别名;


//定义结构体
//struct stud
//{
//	char name[20];
//	short age;
//	char sex[10];
//};
//
//int main()
//{
//	struct stud a = { "mark",38,"man" };
//	printf("%s\n", a.name);
//	return 0;
//}

//typedef struct stud
//{
//	char name[20];
//	short age;
//	char sex[10];
//} st;
//
//int main()
//{
//	struct stud a = { "mark",38,"man" };
//	st b = { "weiwei",28,"man" };
//	printf("%s\n", b.name);
//	return 0;
//}

//struct s
//{
//	int a;
//	int b;
//	char na[20];
//};
//
//struct tuxi
//{
//	struct s s1;
//	struct s s2;
//	int n;
//};
//
//int main()
//{
//	struct tuxi tu1 = { {4,4,"正方形"},{6,8,"长方形"},8 };
//	printf("a=%d,b=%d,name=%s\n", tu1.s1.a, tu1.s1.b, tu1.s1.na);
//	printf("a=%d,b=%d,name=%s\n", tu1.s2.a, tu1.s2.b, tu1.s2.na);
//	return 0;
//}

////结构体传参
//typedef struct stud
//{
//	char name[20];
//	short age;
//	char sex[10];
//} st;
//
//void print(struct stud ss)
//{
//	printf("%s\n", ss.name);
//	printf("%d\n", ss.age);
//	printf("%s\n", ss.sex);
//}
//
////void print2(struct stud* ss)
////{
////	printf("%s\n", (*ss).name);
////	printf("%d\n", (*ss).age);
////	printf("%s\n", (*ss).sex);
////}
//
//void print2(struct stud* ss)		//这个方法打印更好，推荐使用   C语言推荐使用地址传参，地址比较小，系统负荷会更小。
//{
//	printf("%s\n", ss->name);
//	printf("%d\n", ss->age);
//	printf("%s\n", ss->sex);
//}
//
//int main()
//{
//	struct stud a = { "mark",38,"man" };
//	st b = { "weiwei",28,"man" };
//	print(a);
//	print(b);
//	print2(&a);
//	print2(&b);
//	return 0;
//}

//栈区：局部变量，形参，函数调用也会开辟空间
//堆区：动态内存分配，malloc/free,realloc,calloc等函数
//静态区：全局变量，静态变量