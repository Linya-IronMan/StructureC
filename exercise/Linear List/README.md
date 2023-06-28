# 线性表的顺序表示

# 定义

顺序表也就是数组，但是这个数组却有两种定义方式。
- 静态分配内存
- 动态分配内存

```C++
typedef int ElemType;

typedef struct
{
  int data[MaxSize];           // 存储空间的基地址
  int length;          // 当前长度
} Sqlist, *SqlistLink; // 顺序表的结构类型为Sqlist

int InitSeqList(Sqlist &L)
{
  L.data = (ElemType *)malloc(sizeof(int) * MaxSize);
  int i;
  for (i = 0; i < MaxSize; i++)
  {
    L.data[i] = 0;
  }
  return 1;
}
```