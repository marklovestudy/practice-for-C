#define _CRT_SECURE_NO_WARNINGS 1

//算术：+  -  *  /  % 

//移位操作符    《左移   》右移

//位与&
//101		5
//011		3
//001		1

//位或|
//101		5
//011		3
//111		7	

//位异或^	取反或：1的反为0，0的反为1   1 or 0为1  1or1为1   0or0 为0
// 所以二进制相同为0，不同则为1
//101		5
//011		3
//110		6

//a=20   =赋值   ==判断相等
//复合赋值符    += -= *= /= &= |= ^=  <<=  >>=

//1单目操作符：	
// !逻辑取反   -负值 +正值	&取地址	
// sizeof操作数类型长度	~对一个二进制数取反   
// 前置 后置 -- ++     *间接访问操作符（解引用操作符）
// 强制类型转换
//2双目操作符：			//a+b  //+
//3三目操作符		a>b? a:b

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//  
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	/*int a = 1;
//	int b = 0;
//	b = a << 2;
//	printf("%d", b);*/
//	int a = 5;
//	int b = 3;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n",e);
//	return 0;
//}