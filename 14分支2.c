#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	scanf("%s", password);
//	printf("Y/N:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ok");
//	}
//	else
//	{
//		printf("fault");
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	scanf("%s", password);
//	getchar();
//	printf("Y/N:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ok");
//	}
//	else
//	{
//		printf("fault");
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	scanf("%s", password);
//	while ((ch=getchar()) != '\n')
//	{
//		;
//	}
//	printf("Y/N:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ok");
//	}
//	else
//	{
//		printf("fault");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch < '0' || ch >'9')			//小于‘0’或者大于‘9’，跳出当前循环。
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		i+=2;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 2; i <= 10; i+=3)		//for (表达式1;表达式2;表达式3) 表达式1：起始值，表达式2：最大值，表达式3：步长
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("haha");
//		printf("%d", i);
//	}
//	return 0;
//}
//不可在for循环内部修改变量数据
//建议采用包头不包尾写法：前闭后开
//for (i = 0; i < 9; i++)
//{
//
//}