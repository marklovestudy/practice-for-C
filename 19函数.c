#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "add.h"    //�����Լ�д��ͷ�ļ�
//void swap1(int a, int b)				//���ֽ���ֵ�޷�ʵ�֣�ԭ������Ϊ�β�a,b�ĵ�ַ��ʵ�ε�ַ���졣
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}

//void swap(int* pa, int* pb)				//����ͨ��ָ���ַ���޸ģ�1�ѵ�ַ����ȥ��2Ȼ���õ�ַ���޸�ֵ��  *�����
//{
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* pa = &a;
//	//int* pb = &b;
//	//swap(pa, pb);
//  swap(&a,&b);
//	printf("a = % d, b = % d", a, b);
//	return 0;
//}


//�βΣ���ʽ����
//ʵ�Σ�������ʵ���ڵĲ�������������ݣ������������ȡ�
//�βεĸı��ǲ���ı�ʵ�εġ�

//��ֵ���ã��βκ�ʵ�ξ��в�ͬ�ĵ�ַ�����޸��ββ���Ӱ��ʵ�Ρ�����Ҫ�ı�������ֻ��Ҫ��ֵ���С�
//��ַ���ã��������ⲿ����������ϵ������ͨ����ַ���ȡֵ�޸�ʵ�Ρ���Ҫ�ı����������Ҫ��ַ��
//
//int pd(int a)
//{
//	int j = 0;
//	for (j=2;j<=sqrt(a);j++)
//	{
//		if (a % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;			//ȫ������û�ҵ����أ��򷵻�1�����������������
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//		if (pd(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if (is_leap_year(i) == 1)
//			printf("%d�����ꡣ\n", i);
//	}
//	return 0;
//}

//int binary_search(int arr[],int n,int r)
//{
//	int l = 0;
//	//int r = sizeof(arr) / sizeof(arr[0]);		//��ַ/��һ��Ԫ�صĳ����󲻳�Ԫ�ظ���
//	int m = 0;
//	while (l <= r)
//	{
//		m = (l + r) / 2;
//		if (n < arr[m])    //�����
//			r = m - 1;
//		else if (n > arr[m])	//���ұ�
//			l = m + 1;
//		else
//		{
//			return m;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,3,4,6,8,9,13,24,50,67,78,89,123,234,432,543,564,657 };
//	int n = 0;
//	int r = sizeof(arr) / sizeof(arr[0])-1;
//	int ret = 0;
//	printf("��Ҫ�ҵ����֣�");
//	scanf("%d", &n);
//	ret = binary_search(arr,n,r);			//ʵ���ϴ���ȥ����һ����ַ
//	if ( ret== -1)
//		printf("û���ҵ�");
//	else
//		printf("�ҵ�����%d", ret);
//}

//void Add(int* pi)
//{
//	*pi += 1;
//}
//
//int main()
//{
//	int i = 0;
//	Add(&i);
//	printf("��%d��\n",i);
//	Add(&i);
//	printf("��%d��\n", i);
//	Add(&i);
//	printf("��%d��\n", i);
//	return 0;
//}

//void new_line()
//{
//	printf("haha\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i=0;i<=2;i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//}

//int main()
//{
//	int len = 0;
//	////1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));		//printf()���ص��ǳ��ȡ�
//	return 0;
//}

//int Add(int x, int y);



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}