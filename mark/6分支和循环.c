#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>

//int main()
//{
//	int line = 0;
//	while (line<10000)
//	{
//		printf("��һ�д���\n");
//		line ++;
//		printf("%d", line);
//	}
//	if (line >= 10000)
//		printf("good offer");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("are your study had?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 0)
//		printf("ȥ������\n");
//	else
//		printf("good offer\n");
//	return 0;
//}

int add(x, y)
{
	if (x > y)
		return x;
	else
		return y;
}