#define _CRT_SECURE_NO_WARNINGS 1

//���Է�ʽ
//debug		
//release	
//debug:���ļ�Ŀ¼����  40kb����������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
//release:���ļ�Ŀ¼���� 9kb���������и����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ�á�

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	for (i=0;i<=16;i++)			//debug�����arr[i]=0�������2��i����Ϊ���ڵ�12����ʱ����һ����ѭ����release�¾���һ��������ѭ����
//	{
//		printf("hehe\n");
//		printf("%d\n", i);
//		arr[i] = '\0';
//	}
//	return 0;
//}


//F5���� ���������ϵ�  
//F9�����ϵ㣬
//F10�����   ��������������
//F11���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}

//���ö�ջ
//void test2()
//{
//	printf("hehe");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	printf("%d\n", &i);
//	for (i=0;i<=16;i++)			//debug�����arr[i]=0�������2��i����Ϊ���ڵ�12����ʱ����һ����ѭ����release�¾���һ��������ѭ����
//	{
//		printf("hehe\n");
//		printf("%d %d\n",i, &arr[i]);		//arr[16]�ĵ�ַ��i�ĵ�ַһ��
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d %d", &i, &arr[12]);		//������ַ��ͬ  debug��ʱ   release�µ�ַ����ͬ
//	return 0;
//}

//������������
//BUG��
//�ɶ��Ը�
//��ά���Ը�
//ע������
//�ĵ���ȫ

//������coding����
//ʹ��assert
//����ʹ��const
//�������õı�����
//��ӱ�Ҫ��ע��
//������������

//void my_strcpy(char* dest, char* src)
//{
//	int i = 0;
//	int sz = 0;
//	while (*(src+sz) !='\0')
//	{
//		sz++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		*(dest + i) = *(src + i);
//	}
//	*(dest + sz) = '\0';
//}

//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)			//�κ�һ����ַ��ֵΪ0����ֹͣ
//		{
//			;
//		}
//	}
//}
//
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//����Ϊ��ͨ����Ϊ�ٱ���
//	assert(src != NULL);
//	while (*dest++ = *src++)			//�κ�һ����ַ��ֵΪ0����ֹͣ
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}