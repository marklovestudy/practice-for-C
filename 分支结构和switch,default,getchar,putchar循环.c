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
//			printf("hehe");				// else��������ifƥ�䣬����û�������
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
//	if (3==a)			//����д��ǰ����á�
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
//			printf("%dΪ����\n", a);
//		}
//		else
//		{
//			printf("%dΪż��\n", a);
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
//		printf("����%d", day);
//	}
//	else if (2 == day)
//	{
//		printf("����%d", day);
//	}
//	else if (3 == day)
//	{
//		printf("����%d", day);
//	}
//	else if (4 == day)
//	{
//		printf("����%d", day);
//	}
//	else if (5 == day)
//	{
//		printf("����%d", day);
//	}
//	else if (6 == day)
//	{
//		printf("����%d", day);
//	}
//	else if (7 == day)
//	{
//		printf("����%d", day);
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	printf("����%d", day);
//	return 0;
//}

/*int main()
{
	char arr[10] = "";		//��д����10ת����ַ����ܻ����ջ����
	scanf("%s", &arr);
	printf("%s", arr);
	return 0;
}	*/		

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)		//�������ͱ��ʽ
//	{
//	case 1:				//case ����Ҫ�����͡������ǳ��������ܷ������
//		printf("����1");
//		break;
//	case 2:
//		printf("����2");
//		break;
//	case 3:
//		printf("����3");
//		break;
//	case 4:
//		printf("����4");
//		break;
//	case 5:
//		printf("����5");
//		break;
//	case 6:
//		printf("����6");
//		break;
//	case 7:
//		printf("����7");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)		//�������ͱ��ʽ
//	{
//	case 1:				//case ����Ҫ�����͡������ǳ��������ܷ������   case�ṹ������Է�����д��룬Ҳ���Բ��š�
//	case 2:				//case ���break����һ��Ҫ�еġ�
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//  default:						//���Է���switchǰ�棬Ҳ���Է��ں��棬���벻��Ҫ���ʱ�������default.
//		printf("�����˷�Χ");
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
//		switch (n)			//switch�ǿ���Ƕ�׵ġ�  n=2
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
//		a++;						//a++д������ȥ֮��ͱ����ˡ�
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
//		printf("%d\n", ch);		//��ӡ������1
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch=getchar())!=EOF)			//EOF��ʵ����ctrl+zʱ�˳�
	{
		putchar(ch);
	}
	return 0;
}