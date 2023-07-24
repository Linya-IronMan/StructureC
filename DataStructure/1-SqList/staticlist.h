//
// Created by 陈定涛 on 2023/7/16.
//
#define MaxSize 50
typedef int ElemType; // 让顺序表存储其他类型元素时，可以快速完成代码的修改

typedef struct {
    ElemType data[MaxSize];
    int length; // 顺序表的长度
} SqList;

bool swap(ElemType &a, ElemType &b);

bool ListInsert(SqList &L, int pos, ElemType element);

bool ListDelete(SqList &L, int pos, ElemType &del);

void PrintList(SqList L);
