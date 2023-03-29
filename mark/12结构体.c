#define _CRT_SECURE_NO_WARNINGS 1

//结构体相当于python中的类

#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book b1 = { "python",55 };
	struct Book* pb = &b1;
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	//b1.name="c++"		name是一个数组不可以直接改名
	strcpy(b1.name, "c++");		//通过string.h里面的strcpy（）函数修改。
	b1.price = 15;
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	printf("%p\n", pb);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}