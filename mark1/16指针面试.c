#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n",sizeof(a) );			//16	����Ĵ��֣��ĸ�Ԫ�أ�ÿ��Ԫ����4���ֽ�
//	printf("%d\n", sizeof(a+0));		//4/8	�������Ԫ�ص�ַ+0������Ԫ�ص�ַ��
//	printf("%d\n", sizeof(*a));			//4		��Ԫ�ص�ַ�����ã��ǵ�һ��Ԫ�أ�4���ֽ�
//	printf("%d\n", sizeof(a+1));		//4/8	��Ԫ�ص�ַ+1������һ����ַ��
//	printf("%d\n", sizeof(a[1]));		//4		�ڶ���Ԫ����һ�����Σ�4���ֽ�
//	printf("%d\n", sizeof(&a));			//4/8	�����ַ����Ҳ��һ����ַ��
//	printf("%d\n", sizeof(*&a));		//16	�����ַ�������൱�������С��
//	printf("%d\n", sizeof(&a+1));		//4/8	��ַ+1,����������飬������һ����ַ
//	printf("%d\n", sizeof(&a[0]));		//4/8	��һ��Ԫ�صĵ�ַ��
//	printf("%d\n", sizeof(&a[0]+1));	//4/8	�ڶ���Ԫ�ص�ַ��
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));			//6		����Ĵ�С
//	printf("%d\n", sizeof(arr+0));			//4/8	��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));			//1		��Ԫ�ص�ַ�����ã�������Ԫ��
//	printf("%d\n", sizeof(arr[1]));			//1		�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));			//4/8	�����ַ
//	printf("%d\n", sizeof(&arr+1));			//4/8	�������ĵ�ַ����Ȼ�����������ǵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));		//4/8	�ڶ���Ԫ�صĵ�ַ��
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));			//	���ֵ			
//	printf("%d\n", strlen(arr+0));			//	���ֵ   �������д����ȫһ������Ϊ��ַ��ͬ
//	printf("%d\n", strlen(*arr));			//'a'-97���൱��97�����ַ���������ͱ����ˡ�
//	printf("%d\n", strlen(arr[1]));			//'b'-98, ͬ�ϣ�Ҳ�����
//	printf("%d\n", strlen(&arr));			//���ֵ
//	printf("%d\n", strlen(&arr+1));			//���ֵ���൱�ڴ�����β����һ��ַ��ʼ���㳤�ȡ�
//	printf("%d\n", strlen(&arr[0]+1));		//���ֵ���൱�ڴӵڶ���Ԫ�ص�ַ��ʼ���㳤�ȡ�
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));		//7		ָ��������Ŀռ��С����Ϊ�����һ��'\0'������Ϊ7
//	printf("%d\n", sizeof(arr + 0));	//4/8	��Ԫ�ص�ַ+0��������Ԫ�ص�ַ����ַ����Ϊ4��8
//	printf("%d\n", sizeof(*arr));		//1		��Ԫ�ص�ַ�����ã��Ǿ�����Ԫ�أ�����Ϊ1
//	printf("%d\n", sizeof(arr[1]));		//1		�ڶ���Ԫ�أ�����Ϊ1
//	printf("%d\n", sizeof(&arr));		//4/8	�����ַ����ַ����32Ϊ4��64Ϊ8
//	printf("%d\n", sizeof(&arr + 1));	//4/8	�����ַ+1����Ȼ�������飬������һ����ַ��
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8	��Ԫ�ص�ַ+1����ʾ�ڶ���Ԫ�صĵ�ַ��
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));			//6			ָ��������ĳ���
//	printf("%d\n", strlen(arr + 0));		//6			��Ԫ�ص�ַ+0��������Ԫ�صĵ�ַ��'\0'����
//	printf("%d\n", strlen(*arr));			//err		strlenֻ���ܵ�ַ����������һ���ַ�'a',97,�ͻ��97���ɵ�ַ��ʹ�ã��Ƿ����ʱ���
//	printf("%d\n", strlen(arr[1]));			//err		�ڶ���Ԫ�أ����ǵ�ַ��
//	printf("%d\n", strlen(&arr));			//6			�����ַ���ӿ�ʼ�㵽'\0'����������ĵ�ַ������һ������
//	printf("%d\n", strlen(&arr + 1));		//���ֵ	�����ַ+1����Ȼ�������飬������һ����ַ��
//	printf("%d\n", strlen(&arr[0] + 1));	//5			��Ԫ�ص�ַ+1����ʾ�ڶ���Ԫ�صĵ�ַ����'\0'������
//	return 0;
//}

//int main()		//sizeof()���ܵ���һ���������ͣ����������ݵĿռ䳤��
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));			//4/8		p��ָ�룬ָ�붼��4��8.	
//	printf("%d\n", sizeof(p+1));		//4/8		��Ԫ�ص�ַ+1���ڶ���Ԫ�ص�ַ����ַ����Ϊ4��8
//	printf("%d\n", sizeof(*p));			//1			��Ԫ�ص�ַ�����ã��Ǿ�����Ԫ�أ�����Ϊ1
//	printf("%d\n", sizeof(p[0]));		//1			��һ��Ԫ��[0]������Ϊ1
//	printf("%d\n", sizeof(&p));			//4/8		����ָ�뻹��ָ�룬��ַ����32Ϊ4��64Ϊ8
//	printf("%d\n", sizeof(&p + 1));		//4/8		����ָ��+1������һ��ָ�롣
//	printf("%d\n", sizeof(&p[0] + 1));	//4/8		��Ԫ�ص�ַ+1����ʾ�ڶ���Ԫ�صĵ�ַ��
//	return 0;
//}

//int main()		//strlen()���ܵ���һ����ַ����'\0'������
//{
//	char *p = "abcdef";
//	printf("%d\n", strlen(p));			//6			ָ��������ĳ���
//	printf("%d\n", strlen(p + 1));		//5			��Ԫ�ص�ַ+1���ڶ���Ԫ�ؿ�ʼ��'\0'����
//	printf("%d\n", strlen(*p));			//err		strlenֻ���ܵ�ַ����������һ���ַ�'a',97,�ͻ��97���ɵ�ַ��ʹ�ã��Ƿ����ʱ���
//	printf("%d\n", strlen(p[0]));		//err		�ڶ���Ԫ�أ����ǵ�ַ��
//	printf("%d\n", strlen(&p));			//���ֵ	�൱��һ������ָ�롣
//	printf("%d\n", strlen(&p + 1));		//���ֵ	�൱��һ������ָ��ĺ���һ����ַ��ʼ�㡣��'\0'
//	printf("%d\n", strlen(&p[0] + 1));	//5			��Ԫ�ص�ַ+1����ʾ�ڶ���Ԫ�صĵ�ַ����'\0'������
//	return 0;
//}