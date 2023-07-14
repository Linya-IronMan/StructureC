#include <stdio.h>
struct student {
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};
int main() {
    struct student s = {1001, "level", 'M', 20, 85.4, "Shenzhen"};
    struct student sarr[3];

    int i;
    printf("%d %s %c %d %f %s \n", s.num, s.name, s.sex, s.age, s.score, s.addr);
    for(i=0; i<3; i++) {
        scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);
    }

    for (i=0; i< 3; i++) {
        printf("world: %d %s %c %d %f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
    }
    return 0;
}
