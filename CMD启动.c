#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()		//函数入口
//{
//	//1char 2short 3int 4long 5long long  6float   7double双精度浮点型
//	int a = 5;
//	printf("%d\n", a);
//	char ch = 'A';					//要是单引号呢
//	printf("%c\n", ch);
//	printf("hello world\n");		//打印函数
//	return 0;
//}

#include<string.h>		//strcmp
#include<limits.h>
#include<stdlib.h>	//system
#include<stdio.h>

int main()
{
	char input[20] = { 0 };
	system("C:/Users/Administrator/Desktop/abc.sb3");
ag:
	printf("60秒后关机，如果输入取消，就不会关机了。");
	scanf("%s", input);
	if (strcmp(input, "取消") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto ag;
	}
}