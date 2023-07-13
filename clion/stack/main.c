#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char *p;
    scanf("%d", &i); // 要申请空间的大小
    p=(char*)malloc(i);
    strcpy(p, "malloc success");
    puts(p);
    free(p);  // 释放 malloc 空间；必须使用malloc 申请是返回的指针，不能有任何偏移
    printf("free success\n");
    return 0;
}
