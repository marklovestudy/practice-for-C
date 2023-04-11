#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//算术运算   +-*/%

//int main()
//{
//	int a = 3;
//	int b = 5;
//	double c = 3.0 / 5;		//浮点型中要有一个浮点数
//	//int d=a %b ;
//	printf("%f", c);
//	return 0;
//}

//右移和左移  
//1算术右移   右边丢弃，左边补原符号位
//2逻辑右移   右边丢弃，左边补0


//int main()
//{
//	/*int a = 8;
//	int b = a >> 1;
//	printf("%d", b);*/
//
//	int a = -8;
//	int b = a >> 1;
//	int c = -1;
//	int d = c >> 1;		//还是-1
//	//原码   1000 0000 0000 0000 0000 0000 0000 0001
//	//反码	 1111 1111 1111 1111 1111 1111 1111 1110
//	//补码	 1111 1111 1111 1111 1111 1111 1111 1111
//	printf("%d   %d", b,d);
//	return 0;
//}

//左移
//左边丢弃，右边补0
//int main()
//{
//	int a = 4;
//	int b = a << 1;
//	printf("%d", b);
//	return 0;
//}

//位与运算

//按位与，按位或，按位异或   只能作用于整数

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 0000 0011
//	// 0000 0101
//	// 0000 0001
//	int c = a & b;    //按位与  同为1为1，否则为0
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 0000 0011
//	// 0000 0101
//	// 0000 0111
//	int c = a | b;    //按位与  有1为1，否则为0
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 0000 0011
//	// 0000 0101
//	// 0000 0110
//	int c = a ^ b;    //按位与  相异为1，否则为0
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	////加减法   数最大是会溢出，所以这种方法有局限性。
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	////临时变量中转法，推荐，易懂效率高。
//	//int tem = 0;
//	//tem = a;
//	//a = b;
//	//b = tem;
//
//	//位异或法，这种办法不会溢出，但不易懂，效率没有中转法高。
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d  %d ",a,b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计有补码中多少个1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	//统计有补码中多少个1
//	// num&1	位与1可以判断这个数位上是不是1
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000001
//	//00000000 00000000 00000000 00000001
//	for (i = 0; i < 32; i++)
//	{
//		if (num % 2 & 1 == 1)
//		{
//			count++;
//		}
//		num = num>>1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int x = 2;
//	int y = 3;
//	a = x = y + 2;		//连续赋值。这种不推荐。
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	a += 2;
//	a &= 1;
//	a %= 1;
//	a >>= 2;
//}

//单目操作符，就是只有一个操作符

//  !反

//int main()
//{
//	int a = 0;   //a为假，!a就为真
//	if (!a)
//	{
//		printf("hehe");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 3;   
//	a = -a;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int* p=&a;
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof()计算变量的空间大小是多少，单位是字节
//	printf("%d\n", sizeof a);   //变量是可以省略括号的。
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}