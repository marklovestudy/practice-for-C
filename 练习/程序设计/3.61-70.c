#define _CRT_SECURE_NO_WARNINGS 1

//�ж��ַ����ǲ��ǻ���

//#include <stdio.h>
//#include <string.h>
//#define  N  80
//int fun(char* str)
//{
//	int sz = strlen(str);
//	int l = 0, r = sz - 1;
//	for (; l < r; l++, r--)
//	{
//		if (str[l] != str[r]) return 0;
//	}
//	return 1;
//}
//
//main()
//{
//	char  s[N]; void NONO();
//	printf("Enter a string: "); gets(s);
//	printf("\n\n"); puts(s);
//	if (fun(s)) printf("  YES\n");
//	else       printf("  NO\n");
//	NONO();
//	getchar();
//}
//void NONO()
//{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������������ݣ��ر��ļ��� */
//	FILE* rf, * wf;
//	int i; char s[N];
//	rf = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fscanf(rf, "%s", s);
//		if (fun(s)) fprintf(wf, "%s  YES\n", s);
//		else       fprintf(wf, "%s  NO\n", s);
//	}
//	fclose(rf); fclose(wf);
//}

//�����ַ��������ֵĸ���
//#include  <stdio.h>
//void NONO();
//int fun(char* s)
//{
//	int c = 0;
//	while (*s)
//	{
//		if ('0' <= *s && *s <= '9') c++;
//		s++;
//	}
//	return c;
//}
//
//main()
//{
//	char* s = "2def35adh25  3kjsdf 7/kj8655x";
//	printf("%s\n", s);
//	printf("%d\n", fun(s));
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	FILE* fp, * wf;
//	int i;
//	char s[256];
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fgets(s, 255, fp);
//		fprintf(wf, "%d\n", fun(s));
//	}
//	fclose(fp);
//	fclose(wf);
//}

//�������в���ָ��ֵ�������±꣬�Ҳ�������-1
//#include  <stdio.h>
//#include  <stdlib.h>
//#define   N   15
//void NONO();
//int  fun(int* s, int x)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		if (x == s[i]) return i;
//	}
//	return -1;
//}
//main()
//{
//	int a[N] = { 29,13,5,22,10,9,3,18,22,25,14,15,2,7,27 }, i, x, index;
//	printf("a�����е����� :\n");
//	for (i = 0; i < N; i++) printf("%4d", a[i]);  printf("\n");
//	printf("��x��������ҵ��� :  ");   scanf("%d", &x);
//	index = fun(a, x);
//	printf("index=%d\n", index);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	FILE* fp, * wf;
//	int i, j, a[10], x, index;
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			fscanf(fp, "%d ", &a[j]);
//		}
//		fscanf(fp, "%d", &x);
//		index = fun(a, x);
//		fprintf(wf, "%d\n", index);
//	}
//	fclose(fp);
//	fclose(wf);
//}
//
//

//#include  <stdio.h>
//#define    N    20
//void NONO();
//void  fun(char* a, char* s)
//{
//	int k = 0;
//	while (*s)
//	{
//		a[k++] = *s;
//		s++;
//	}
//	a[k] = 0;
//}
//
//main()
//{
//	char  s1[N], * s2 = "abcdefghijk";
//	fun(s1, s2);
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	FILE* fp, * wf;
//	int i;
//	char s1[256], s2[256];
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fgets(s2, 255, fp);
//		fun(s1, s2);
//		fprintf(wf, "%s", s1);
//	}
//	fclose(fp);
//	fclose(wf);
//}

//��һ�����ִ��ַ�ת���һ�������֡�
//#include   <stdio.h>
//#include   <string.h>
//void NONO();
//
//long  fun(char* s)
//{
//	long re = 0;
//	while (*s)
//	{
//		re = re * 10 + *s - '0';
//		s++;
//	}
//	return re;
//}
//main()
//{
//	char  s[10];    long  r;
//	printf("������һ�����Ȳ�����9���ַ����ַ��� :  ");  gets(s);
//	r = fun(s);
//	printf(" r = %ld\n", r);
//	NONO();
//	getchar();
//}
//
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//	FILE* fp, * wf;
//	int i;
//	long r;
//	char s[10], * p;
//
//	fp = fopen("..\\..\\in.dat", "r");
//	wf = fopen("..\\..\\out.dat", "w");
//	for (i = 0; i < 10; i++) {
//		fgets(s, 10, fp);
//		p = strchr(s, '\n');
//		if (p) *p = 0;
//		r = fun(s);
//		fprintf(wf, "%ld\n", r);
//	}
//	fclose(fp);
//	fclose(wf);
//}

//��ȥ��߷ֺ���ͷ֣��������е�ƽ����
//#include  <stdio.h>
//void NONO();
//double fun(double  a[], int  n)
//{
//    double min, max, s, av;
//    int i;
//    s = av = 0.0;
//    min = max = a[0];
//    for (i = 0; i < n; i++)
//    {
//        if (min > a[i]) min = a[i];
//        if (max < a[i]) max = a[i];
//        s += a[i];
//    }
//    av = (s - min - max) / (n - 2);
//    return av;
//}
//
//main()
//{
//    double  b[10], r;    int  i;
//    printf("����10����������b������ :  ");
//    for (i = 0; i < 10; i++)   scanf("%lf", &b[i]);
//    printf("�����10�������� :  ");
//    for (i = 0; i < 10; i++)   printf("%4.1lf ", b[i]);    printf("\n");
//    r = fun(b, 10);
//    printf("ȥ����߷ֺ���ͷֺ��ƽ���� :  %f\n", r);
//    NONO();
//    getchar();
//}
//
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//    FILE* fp, * wf;
//    int i, j;
//    double b[10], r;
//
//    fp = fopen("..\\..\\in.dat", "r");
//    wf = fopen("..\\..\\out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        for (j = 0; j < 10; j++) {
//            fscanf(fp, "%lf ", &b[j]);
//        }
//        r = fun(b, 10);
//        fprintf(wf, "%f\n", r);
//    }
//    fclose(fp);
//    fclose(wf);
//}

