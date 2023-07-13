#include <stdio.h>

int main () {
/** 判断整型数字是否为对称数
    int a = 0;
    int b = 0;
    scanf("%d", &a);

    while(a) {
        b = b*10 + a%10;
        a = (a - a%10)/10;
    }

    if (a == b) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    printf("a: %d; b: %d", a,b);
    return 0;
*/

/**
 * 某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
 *
    int a = 0, b = 0, c = 0;
    int count = 0;
    for (a=0;a<=100/10;a++) {
        for(b=0;b<=100/5;b++) {
            c = 40-a-b;
            int result = 10*a + 5*b + 2*c;
            if (result > 100) { break; }
            if (result == 100) {
                count++;
                printf("a: %d, b: %d, c: %d", a, b, c);
                break;
            }
        }
    }
    printf("%d", count);
 */

    int a = 0, b = 0, c = 0;
    int count = 0;
    for (a=0;a<=100/10;a++) {
        for(b=0;b<=100/5;b++) {
            c = 40-a-b;
            int result = 10*a + 5*b + 2*c;
            if (result > 100) { break; }
            if (result == 100) {
                count++;
//                printf("a: %d, b: %d, c: %d", a, b, c);
                break;
            }
        }
    }
    printf("%d", count);

}