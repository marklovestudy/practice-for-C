#define _CRT_SECURE_NO_WARNINGS 1

//#include   <stdio.h>
//#pragma warning (disable:4996)
//int  c1, c2, c3;
//void fun(long  n)
//{
//    c1 = c2 = c3 = 0;
//    while (n) {
//        /**********found**********/
//        switch (n % 10)
//        {
//            /**********found**********/
//        case 1:    c1++; break;
//            /**********found**********/
//        case 2:    c2++; break;
//        case 3:    c3++;
//        }
//        n /= 10;
//    }
//}
//main()
//{
//    long  n = 123114350L;
//    fun(n);
//    printf("\nThe result :\n");
//    printf("n=%ld  c1=%d  c2=%d  c3=%d\n", n, c1, c2, c3);
//}


//#include    <stdio.h>
//#include    <ctype.h>
//char fun(char  ch)
//{
//    /**********found**********/
//    if ((ch >= 'a') && (ch <= 'z'))
//        return  ch - 'a' + 'A';
//    if (isupper(ch))
//        /**********found**********/
//        return  ch + 'a' - 'A';
//    /**********found**********/
//    return ch;
//}
//main()
//{
//    char  c1, c2;
//    printf("\nThe result  :\n");
//    c1 = 'w';   c2 = fun(c1);
//    printf("c1=%c    c2=%c\n", c1, c2);
//    c1 = 'W';   c2 = fun(c1);
//    printf("c1=%c    c2=%c\n", c1, c2);
//    c1 = '8';   c2 = fun(c1);
//    printf("c1=%c    c2=%c\n", c1, c2);
//    getchar();
//}