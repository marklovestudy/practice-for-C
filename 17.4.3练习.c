#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>  //���õĺ�����malloc()��calloc()��realloc()��free()��system()��atoi()��atol()��rand()��srand()��exit()

//��abc�Ӵ�С����
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

//��3�ı���
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

//��Լ��
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

//�ҳ����Լ��
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
//	printf("���Լ����%d", m);
//	return 0;
//}

//������
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

//������
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
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}

//������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int b = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		b = 0;
//		for (j = 2; j <= sqrt(i); j++)		//sqrt()��������˼
//			if (i % j==0)
//			{
//				b=1;
//				break;
//			}
//		if (b == 0)
//		{
//			printf("%d ������\n", i);
//		}
//	}
//	return 0;
//}

//0-100������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int b = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		b = 0;
//		for (j = 2; j <= sqrt(i); j++)		//sqrt()��������˼
//			if (i % j==0)
//			{
//				b=1;
//				break;
//			}
//		if (b == 0)
//		{
//			printf("%d ������\n", i);
//		}
//	}
//	return 0;
//}

//�����д���a��ֵ
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

//�ҳ���������9����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d����9\n", i);
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
//	printf("�����%f\n", sum);
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
//	printf("�����%f\n", sum);
//	return 0;
//}


//�����ֵ
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,32,9,10 };
//	int max = arr[0];		//���ܶ���Ϊ����������ݣ��綨��Ϊ0ʱ����������������ȫ�Ǹ�����
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

//�žű�
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

//������
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
//	printf("������֣�\n");
//	while (guess != ret)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶������������%d\n", guess);
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
//		printf("��ѡ��");
//		scanf("%d", &input);		//�˴���Ҫ��\n����ʹinput��ֵ����
//		//printf("%d", input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
