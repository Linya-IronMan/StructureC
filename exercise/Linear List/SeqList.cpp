// List：线性表
// Sequence：顺序存储实现

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10

typedef int ElemType;

typedef struct
{
  int *data;           // 存储空间的基地址
  int length;          // 当前长度
} Sqlist, *SqlistLink; // 顺序表的结构类型为Sqlist

int InitSeqList(Sqlist &L)
{
  L.data = (ElemType *)malloc(sizeof(int) * MaxSize);
  L.length = 0;
  int i;
  for (i = 0; i < MaxSize; i++)
  {
    L.data[i] = 0;
    L.length++;
  }
  return 1;
}

int InsertSeqList(Sqlist &L, int value)
{
}

void PrintSeqList(Sqlist L)
{
  for (int i = 0; i < MaxSize; i++)
  {
    printf("PrintSeList: %i \n", L.data[i]);
  }
}

int main()
{
  Sqlist L;
  InitSeqList(L);
  PrintSeqList(L);
  L.data[34] = 11;
  int length = 0;
  printf("-=======---==========: %i %i \n", L.length, L.data[33]);
  return 0;
}