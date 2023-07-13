//
// Created by 陈定涛 on 2023/7/10.
//

#include "func.h"

int printstar(int i) {
    printf("*******************");
    printf("printstar %d\n", i);
    return i + 3;
}

void print_message() {
    printf("how do you do \n");
    printstar(3);
}
