#include <stdio.h>

#define N 5

void change(int *j) {
    *j=5;
}

void chang(char* d) {
    *d = 'H';
    d[1] = 'E';
    *(d+2) = 'L';
}

int main() {
    /**
    int i = 5;
    int *p = &i;
    printf("i=%d\n", i);
    printf("*p=%d\n", *p);
    printf("p: %d, &p: %d, *p: %d\n", sizeof p, sizeof &p, sizeof *p);
    return 0;*/

    /** 函数传递指针变量
    int i = 10;
    printf("before change i = %d\n", i);
    change(&i);
    printf("after change i=%d\n", i);
    return 0;
    */

/** 指针的偏移
    int a[N] = {1, 2, 3, 4, 5};
    int  *p;
    int i;
    p = a;
    for (i=0;i<N;i++) {
        printf("%3d", *(p+i));
    }
    printf("\n------\n");
    // 从右向左解析： &为取地址符，但不是取的 a 变量指向地址，而是 a[4] 的地址
    p = &a[4]; // 让 p 指向最后一个元素
    for (i=0; i<N; i++) {
        printf("%3d", *(p-1));
    }
    printf("\n");
    return 0;
 */

    char c[10]="hello";
//    chang(c);
    *c = 'H';
    c[1] = 'E';
    *(c+2) = 'L';
    puts(c);
    return 0;

}
