#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int age = 30;
//	if (age >= 18 && age <= 28)
//		printf("you are adlut");
//	else if (age > 28 && age < 50)
//		printf("you are man.");
//	else if (age >= 50)
//		printf("you are old man.");
//	else
//		printf("you are childred");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha");
//		else
//			printf("hehe");				// else和他近的if匹配，所以没有输出。
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a > 5)
//		return 1;
//	return 2;
//}

//int main()
//{
//	int a = 10;
//	if (3==a)			//数字写在前面更好。
//	{
//		printf("ok");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a<101)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d为奇数\n", a);
//		}
//		else
//		{
//			printf("%d为偶数\n", a);
//		}
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//	{
//		printf("星期%d", day);
//	}
//	else if (2 == day)
//	{
//		printf("星期%d", day);
//	}
//	else if (3 == day)
//	{
//		printf("星期%d", day);
//	}
//	else if (4 == day)
//	{
//		printf("星期%d", day);
//	}
//	else if (5 == day)
//	{
//		printf("星期%d", day);
//	}
//	else if (6 == day)
//	{
//		printf("星期%d", day);
//	}
//	else if (7 == day)
//	{
//		printf("星期%d", day);
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	printf("星期%d", day);
//	return 0;
//}

/*int main()
{
	char arr[10] = "";		//不写常数10转入的字符可能会溢出栈报错。
	scanf("%s", &arr);
	printf("%s", arr);
	return 0;
}	*/		

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)		//放入整型表达式
//	{
//	case 1:				//case 后面要放整型。或者是常量。不能放入变量
//		printf("星期1");
//		break;
//	case 2:
//		printf("星期2");
//		break;
//	case 3:
//		printf("星期3");
//		break;
//	case 4:
//		printf("星期4");
//		break;
//	case 5:
//		printf("星期5");
//		break;
//	case 6:
//		printf("星期6");
//		break;
//	case 7:
//		printf("星期7");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)		//放入整型表达式
//	{
//	case 1:				//case 后面要放整型。或者是常量。不能放入变量   case结构体里可以放入多行代码，也可以不放。
//	case 2:				//case 里的break不是一定要有的。
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//  default:						//可以放在switch前面，也可以放在后面，输入不合要求的时候可以用default.
//		printf("超过了范围");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)				//n=1
//	{
//	case 1:
//		m++;				//m=3
//	case 2:
//		n++;				//n=2
//	case 3:
//		switch (n)			//switch是可以嵌套的。  n=2
//		{
//		case 1:
//			n++;		
//		case 2:
//			m++;			//m=4
//			n++;			//n=3
//			break;
//		}
//	case 4:
//		m++;				//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m:%d,  n:%d", m, n);		//m=5   n=3
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a<10)
//	{
//		a++;
//		printf("%d", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a<20)
//	{
//		a++;
//		printf("%d", a);
//		if (5 == a)
//		{
//			printf("ok");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr[10] = "";
//	scanf("%s", &arr);
//	while (1)
//	{
//		if ("ok"==arr)
//		{ 
//			break;
//		}
//		printf("%s\n", arr);
//		scanf("%s\n", &arr);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a<10)
//	{
//		a++;						//a++写到后面去之后就报错了。
//		if (a % 2 == 1)
//			continue;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	//char ch=getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (ch=getchar()!=EOF)
//	{
//		printf("%d\n", ch);		//打印出的是1
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch=getchar())!=EOF)			//EOF其实输入ctrl+z时退出
	{
		putchar(ch);
	}
	return 0;
}