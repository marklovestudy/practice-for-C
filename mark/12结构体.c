#define _CRT_SECURE_NO_WARNINGS 1

//�ṹ���൱��python�е���

#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book b1 = { "python",55 };
	struct Book* pb = &b1;
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	//b1.name="c++"		name��һ�����鲻����ֱ�Ӹ���
	strcpy(b1.name, "c++");		//ͨ��string.h�����strcpy���������޸ġ�
	b1.price = 15;
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	printf("%p\n", pb);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}