#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ṹ��
//struct MyStruct
//{
//	��Ա�б�;
//}�����б�;
//
//typedef struct MyStruct
//{
//	��Ա�б�;
//}����;


//����ṹ��
//struct stud
//{
//	char name[20];
//	short age;
//	char sex[10];
//};
//
//int main()
//{
//	struct stud a = { "mark",38,"man" };
//	printf("%s\n", a.name);
//	return 0;
//}

//typedef struct stud
//{
//	char name[20];
//	short age;
//	char sex[10];
//} st;
//
//int main()
//{
//	struct stud a = { "mark",38,"man" };
//	st b = { "weiwei",28,"man" };
//	printf("%s\n", b.name);
//	return 0;
//}

//struct s
//{
//	int a;
//	int b;
//	char na[20];
//};
//
//struct tuxi
//{
//	struct s s1;
//	struct s s2;
//	int n;
//};
//
//int main()
//{
//	struct tuxi tu1 = { {4,4,"������"},{6,8,"������"},8 };
//	printf("a=%d,b=%d,name=%s\n", tu1.s1.a, tu1.s1.b, tu1.s1.na);
//	printf("a=%d,b=%d,name=%s\n", tu1.s2.a, tu1.s2.b, tu1.s2.na);
//	return 0;
//}

////�ṹ�崫��
//typedef struct stud
//{
//	char name[20];
//	short age;
//	char sex[10];
//} st;
//
//void print(struct stud ss)
//{
//	printf("%s\n", ss.name);
//	printf("%d\n", ss.age);
//	printf("%s\n", ss.sex);
//}
//
////void print2(struct stud* ss)
////{
////	printf("%s\n", (*ss).name);
////	printf("%d\n", (*ss).age);
////	printf("%s\n", (*ss).sex);
////}
//
//void print2(struct stud* ss)		//���������ӡ���ã��Ƽ�ʹ��   C�����Ƽ�ʹ�õ�ַ���Σ���ַ�Ƚ�С��ϵͳ���ɻ��С��
//{
//	printf("%s\n", ss->name);
//	printf("%d\n", ss->age);
//	printf("%s\n", ss->sex);
//}
//
//int main()
//{
//	struct stud a = { "mark",38,"man" };
//	st b = { "weiwei",28,"man" };
//	print(a);
//	print(b);
//	print2(&a);
//	print2(&b);
//	return 0;
//}

//ջ�����ֲ��������βΣ���������Ҳ�Ὺ�ٿռ�
//��������̬�ڴ���䣬malloc/free,realloc,calloc�Ⱥ���
//��̬����ȫ�ֱ�������̬����