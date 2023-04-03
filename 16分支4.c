#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>				//Sleep()
#include<stdlib.h>				//system("cls")    执行系统命令的一个函数，cls清空屏幕

//int main()			//阶乘之和
//{
//	int n = 0;
//	int i = 0;
//	int s = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		s += ret;
//	}
//	printf("%d", s);
//	return 0;
//}
//

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，在%d的位置", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int l = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	int m = 0;
//	int r = sz;
//	scanf("%d", &k);
//	while (l<=r)
//	{
//		m = (l + r) / 2;
//		if (k < arr[m])
//		{
//			r = m - 1;
//		}
//		else if (k > arr[m])
//			l = m + 1;
//		else
//		{
//			printf("找到了，在%d", m);
//			break;
//		}
//		if (l > r)
//		{
//			printf("找不到了");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "welcome to fenghuangjiqiren!";
//	char arf[] = "############################";
//	int l=0;
//	//int r=sizeof(arr)/sizeof(arr[0]-1);		//err
//	//int r = sizeof(arr) / sizeof(arr[0] - 2);		//true
//	int r = strlen(arr) - 1;
//	for (l,r;l<r;l++,r--)
//	{
//		arf[l] = arr[l];
//		arf[r] = arr[r];
//		printf("%s\n", arf);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to fenghuangjiqiren!";
//	char arr2[] = "############################";
//	int l=0;
//	//int r=sizeof(arr)/sizeof(arr[0]-1);		//err
//	//int r = sizeof(arr) / sizeof(arr[0] - 2);		//true
//	int r = strlen(arr1) - 1;
//	while (l<=r)
//	{
//		arr2[l] = arr1[l];
//		arr2[r] = arr1[r];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		l++;
//		r--;
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i; i <3 ; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		printf("%d", strcmp(password,"123456"));
		if (strcmp(password, "123456")==0)	//password < "123456"
		{
			printf("登陆成功");
			break;
		}
		else
		{
			printf("错误；");
		}
	}
	if (i == 3)
	{
		printf("登陆失败");
	}
	return 0;
}