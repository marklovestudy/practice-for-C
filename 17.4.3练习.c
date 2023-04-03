#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>  //常用的函数如malloc()、calloc()、realloc()、free()、system()、atoi()、atol()、rand()、srand()、exit()

//把abc从大到小排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (a < c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b < c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//求3的倍数
//int main()
//{
//	int i = 0;
//	for (i; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//求公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	while (m != 0)
//	{
//		if (n % m == 0)
//		{
//			printf("%d", m);
//			break;
//		}
//		else
//		{
//			int r = n % m;
//			n = m;
//			m = r;
//		}
//	}
//	return 0;
//}

//找出最大公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (r=n%m)
//	{
//		n = m;
//		m = r;
//	}
//	printf("最大公约数：%d", m);
//	return 0;
//}

//求闰年
//int main()
//{
//	int i = 1000;
//	for (i; i <= 2000; i += 4)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//			printf("%d\n", i);
//	}
//	return 0;
//}

//求质数
//int main()
//{
//	int i = 100;
//	int j = 0;
//	int b = 0;
//	for (i=0; i <= 100; i++)
//	{
//		b = 0;
//		for (j = 2; j <i; j++)
//		{
//			if (i % j == 0)
//			{
//				b = 1;
//				break;
//			}
//		}
//		if (b == 0)
//		{
//			printf("%d是质数\n", i);
//		}
//	}
//	return 0;
//}

//求质数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int b = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		b = 0;
//		for (j = 2; j <= sqrt(i); j++)		//sqrt()开方的意思
//			if (i % j==0)
//			{
//				b=1;
//				break;
//			}
//		if (b == 0)
//		{
//			printf("%d 是质数\n", i);
//		}
//	}
//	return 0;
//}

//0-100求质数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int b = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		b = 0;
//		for (j = 2; j <= sqrt(i); j++)		//sqrt()开方的意思
//			if (i % j==0)
//			{
//				b=1;
//				break;
//			}
//		if (b == 0)
//		{
//			printf("%d 是质数\n", i);
//		}
//	}
//	return 0;
//}

//求下列代码a的值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//	}
//	b -= 5;
//	printf("%d", a);
//	return 0;
//}

//找出包含数字9的数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d中有9\n", i);
//		}
//	}
//	return 0;
//}

//1-1/2+1/3....1/n
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1, flag; i <= n; i++, flag++)
//	{
//		if (flag % 2 == 0)
//			sum -= 1.0 / i;
//		else if (flag % 2 == 1)
//			sum += 1.0 / i;
//		printf("%f\n",sum);
//	}
//	printf("结果是%f\n", sum);
//	return 0;
//}

//1-1/2+1/3....1/n
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1, flag; i <= n; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//		printf("%f\n",sum);
//	}
//	printf("结果是%f\n", sum);
//	return 0;
//}


//找最大值
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,32,9,10 };
//	int max = arr[0];		//不能定义为数组外的数据，如定义为0时，可能其它的数据全是负数。
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i=1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//九九表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1;j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字
//
//void pp()
//{
//	printf("***********************\n");
//	printf("*** 1 play  0 exit  ***\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	srand((unsigned int)time(NULL));
//	ret = rand() % 100 + 1;
//	printf("请猜数字：\n");
//	while (guess != ret)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了这个数正是%d\n", guess);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		pp();
//		printf("请选择：");
//		scanf("%d", &input);		//此处不要加\n容易使input的值变样
//		//printf("%d", input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}
