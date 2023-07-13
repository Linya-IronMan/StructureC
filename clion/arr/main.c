#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(char c[])
{
    int i=0;
    while(c[i])
    {
        printf("%c",c[i]);
        i++;
    }
}

int main()
{
    /** 数组的定义，越界
    int j=20;
    int i=10;
    int a[5]={1,2,3,4,5}; //定义数组时，数组长度必须固定

    a[5]=6; //越界访问
    a[6]=7; //越界访问会造成数据异常
    printf("i=%d\n",i); //i 发生改变
    return 0;
    */



////字符数组存储字符串，必须存储结束符'\0' int main()
//        char c[6]={'h','e','l','l','o'};
//        char d[5]="how";
//        printf("%s\n",c); //会发现打印了乱码
//        printf("%s\n",d);
//        print(d);
//        return 0;

//        scanf 读取字符串并统计 2 的个数
//        int len;
//        scanf("%d", &len);
//        int *arr = (int *)malloc(sizeof(int) * len);
//        for (int i = 0; i < len ; i ++ ) {
//            scanf("%d", &arr[i]);
//        }
//
//        int num = 0;
//        for (int i = 0; i < len; i ++ ) {
//            if(arr[i] == 2) num++;
//        }
//        printf("%d", num);
//        return 0;

    char str[20];
    char restr[20] = {0};

    gets(str);
    printf("%d", strlen(str));
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        restr[i] = str[len - i];
    }
    puts(restr);
}
