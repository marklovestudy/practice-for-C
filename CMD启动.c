#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()		//�������
//{
//	//1char 2short 3int 4long 5long long  6float   7double˫���ȸ�����
//	int a = 5;
//	printf("%d\n", a);
//	char ch = 'A';					//Ҫ�ǵ�������
//	printf("%c\n", ch);
//	printf("hello world\n");		//��ӡ����
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
	printf("60���ػ����������ȡ�����Ͳ���ػ��ˡ�");
	scanf("%s", input);
	if (strcmp(input, "ȡ��") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto ag;
	}
}