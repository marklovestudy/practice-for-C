#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	//int a[3][2] = { {0,1},{2,3},{4,5} };
//	//int a[3][2] = { (0,1),(2,3),(4,5) };	//逗号表达式，值取最后一个，相当于{1,3,5}
//	int a[3][2] = { 0,1,2,3,4,5 };
//	int* p;			//强制类型转换成了int类型，所以是1
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}