#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 20;i++)
//	{
//		if (i=5)
//			printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		
//		if (i == 5)
//			continue;
//		printf("hehe");
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)			//j++��10��jû���ٴδ�0��ʼ�����Եڶ��ֿ�ʼj����10�����Ὺʼѭ���ˡ����Բ�Ҫ���ʡ�ԡ�
//		{
//			printf("haha");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int i, k;
//	for (i = 0, k = 0; k = 0; i++, k++)    //k=0��ʾ��ֵ��=0�Ǳ�ʾΪ�٣�����ѭ�������У����k=1��ʾΪ�棬�ͻ�����ѭ����
//	{
//		printf("haha");
//	}
//	return 0;
//}

//do
//{
//
//} while (true);

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()		//����ٵĽ׳ˡ�
//{
//	int i = 1;
//	int s = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	printf("%d", s);
//	return 0;
//}

int main()		//����ٵĽ׳ˡ�
{
	int i = 1;
	int s = 1;
	int n = 0;
	int max = 0;
	int sn = 0;
	scanf("%d", &max);
	for (n = 1; n <= max; n++)
	{
		s = 1;
		for (i = 1; i <= n; i++)
			{
				s *= i;
			}
		sn += s;
	}
	printf("%d", sn);
	return 0;
}