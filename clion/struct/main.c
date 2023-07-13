#include <stdio.h>
// struct student {
//     int num;
//     char name[20];
//     char sex;
//     int age;
//     float score;
//     char addr[30];
// };

struct student_type1 {
  double score;
  short age;
};

struct student_type2 {
  double score;
  int height;
  short age;
};

struct student_type3 {
  int height;
  char sex;
  short age;
};


typedef struct student {
  int num;
  char name[20];
  char sex;
} stu, *pstu;

int main() {
    
    // struct student s = {1001, "level", 'M', 20, 85.4, "Shenzhen"};
    // struct student sarr[3];
    //
    // int i;
    // printf("%d %s %c %d %f %s \n", s.num, s.name, s.sex, s.age, s.score, s.addr);
    // for(i=0; i<3; i++) {
    //     scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);
    // }
    //
    // for (i=0; i< 3; i++) {
    //     printf("world: %d %s %c %d %f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
    // }
    // return 0;
    // struct student_type1 s1;
    //
    // struct student_type2 s2;
    //
    // struct student_type3 s3;
    //
    // printf("s1 size=%d\n", sizeof(s1));
    //
    // printf("s2 size=%d\n", sizeof(s2));
    //
    // printf("s3 size=%d\n", sizeof(s3));

    struct student s = {100, "wangle", 'M'};
    // struct student sarr[3] = {1001, "lilei", 'M', 1005, "zhangsan", 'M', 1007, "lili", 'F'};
    struct student sarr[3] = {{1001, "lilei", 'M'}, {1005, "zhangsan", 'M'}, {1007, "lili", 'F'}};
    struct student *p;
    int num;
    p = &s;
    printf("%d %s %c\n", p->num, p->name, p->sex);
    p = sarr;
    printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);
    
    printf("%d %s %c\n", p->num, p->name, p->sex);

    printf("---------------------------------\n");

    p = p + 1;
    printf("%d %s %c\n", p->num, p->name, p->sex);

    
    return 0;
}

