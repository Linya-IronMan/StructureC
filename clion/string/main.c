#include <stdio.h>
#include <string.h>
int mystrlen(char c[]) {
    int i = 0;
    while (c[i++]);
    return i - 1;
}
//strlen 统计字符串长度
int main() {
    int len; //用于存储字符串长度
    char c[20];
    char d[100] = "world";
    gets(c);
    puts(c);
    len = strlen(c);
    printf("len=%d\n", len);
    len = mystrlen(c);
    printf("mystrlen len=%d\n", len);
    strcat(c, d);
    strcpy(d, c); //c 中的字符串复制给 d
    puts(d);
    printf("c?d %d\n", strcmp(c, d));
    puts(c);
    return 0;
}