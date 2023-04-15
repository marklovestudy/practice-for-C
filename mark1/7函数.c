#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//数一个数里面有多少个1
//int count_it(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_it(unsigned n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int count_it(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_it(int n)
//{
//	int count = 0;
//	//以13为例
//	//1101	n
//	//1100	n-1
//	//1100	n&(n-1)
//	
//	//1100	n
//	//1011	n-1
//	//1000	n&(n-1)
//
//	//1000	n
//	//0111	n-1
//	//0000	n&(n-1)
//
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);	//这里不能有\n否则a输入不了值
//	int re=count_it(a);
//	printf("%d\n", re);
//	//system("pause");
//	return  0;
//}

//计算m和n二进制数有多少个位上数字不相同，如1011和1000有二个相异
//int count_diffrent(int m, int n)
//{
//	int count = 0;
//	int re = m ^ n;				//位异或，不相同的位返回1，只需要计算1的个数就可以了。
//	while (re)
//	{
//		re = re & (re - 1);		//n&n-1,有多少个1，位与多少次就行，因为每次n位与n-1,都会少一个1（1111位与少一个1，成1110，再位与一次成1100，再1000，再0000，共四次）
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int re=count_diffrent(m, n);
//	printf("%d", re);
//	return 0;
//}

//输出一个数的二进制奇数位和偶数位数字

//void print(int a)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//void print(int r)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= r; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d= %d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	print(i);
//	return 0;
//}


//反向输出一个字符串。
//int count_strlen(char* pc)
//{
//	int count = 0;
//	while (*pc != '\0')
//	{
//		count++;
//		pc += 1;
//	}
//	return count;
//}
//
//void reverse(char* pc,int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	char tem = 0;
//	while (i<j)
//	{
//		tem = *(pc + i);
//		*(pc + i) = *(pc + j);
//		*(pc + j) = tem;
//		i++;
//		j--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = count_strlen(arr);
//	printf("%d\n", sz);
//	reverse(arr,sz);
//	printf("%s", arr);
//	return 0;
//}

//把一个字符串逆向输出，用递归实现
//int count_strlen(char* pc)
//{
//	int count = 0;
//	while (*pc != '\0')
//	{
//		count++;
//		pc += 1;
//	}
//	return count;
//}
//void reverse(char arr[])
//{
//	char tem = 0;
//	int sz = count_strlen(arr);
//	if (sz >= 1)
//	{
//		//把a放入tem
//		tem = arr[0];
//		//把f放到a;
//		arr[0] = arr[sz - 1];
//		//把'\0'放在f
//		arr[sz - 1] = '\0';
//		reverse(arr + 1);
//		arr[sz - 1] = tem;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//用递归实现一个数字各位上的数之和，如‘1279’  1+2+7+9=19
//int digitsum(unsigned int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += (n % 10);
//		n /= 10;
//	}
//	return sum;
//}

//int digitsum(unsigned int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return digitsum(n / 10) + n % 10;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int re = digitsum(n);
//	printf("%d\n", re);
//	return 0;
//
//}

//double pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return 1.0 / pow(n, -k);	//这里要用1.0不然的话1/8这样的数就直接为0了
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return pow(n, k - 1) * n;
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("n**k=%f", ret);
//	return 0;
//}

