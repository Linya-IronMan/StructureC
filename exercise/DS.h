

/*
  文档说明：
    数据结构的代码文档
*/

#include <stdio.h>
#include <stdlib.h>
// C 中使用 bool 类型
#include <stdbool.h>

// 常量区 - 结构体
// #define maxSize 100
const int maxSize = 100; // 推荐这种方法定理常量
typedef int ElemType;

// 全局变量

// 函数的定义与声明
/*
  1. 线性表 - 规定数据类型为 int （ElemType)
    1. 线性表的初始化
    2. 增：想线性表中第 i（1<= i <= maxSize） 个位置插入 x
    3. 删除：删除线性表中值为 x 的元素
    4. 删除：删除线性表中第 i 个位置的元素
    5. 查：查找线性表中值为 x 的元素
    6. 查：查找线性表中第 i 个位置的元素
    7. 改：将线性表中值为 x 的第 1 个元素值改为 y
*/

/**
 * 线性表 - 顺序存储实现
 * 需要一个结构体维护线性表 data length
 */
typedef struct
{
  // ElemType *data[maxSize]; // 错误写法
  ElemType *data;
  int length;
} SeqList, *LSeqList;

// 1. 线性表的初始化
// NOTE：如果一个函数不需要参数，使用 void 作为参数
LSeqList InitLinearList(void)
{
  LSeqList list = (LSeqList)malloc(sizeof(SeqList));
  // NOTE: list 是一个指针类型，访问并修改其中的数据时，需要使用 list->data 这样的写法。
  list->data = (ElemType *)malloc(sizeof(ElemType) * maxSize);
  // NOTE: 循环中如果只有一个语句，实际上是可以省略大括号的。
  for (int i = 0; i < maxSize; i++)
  {
    list->data[i] = 0;
  }
  list->length = 0;
  return list;
}

/**/
// 2. 增：向线性表中第 i（1 <= i <= maxSize） 个位置插入 x
// NOTE: 第 i 个元素，而不是下标为 i 的元素
int InsertLinearList(LSeqList L, ElemType data, int op)
{
  // 检查 op 位置信息是否合法
  // 1. 是否小于 0
  // 2. 是否超过当前长度 + 1 （直接插在尾部）
  // 3. 插入之后长度是否会超过 maxSize
  if (op < 0 || op > L->length || L->length + 1 >= maxSize)
    return 0;

  // 完成插入，并将原本位置元素缓存
  ElemType cache = L->data[op];
  L->data[op] = data;
  L->length += 1;

  // 将后序元素后移一位
  for (int i = op + 1; i < L->length; i++)
  {
    ElemType d = L->data[i];
    L->data[i] = cache;
    cache = d;
  }

  return 1;
}

// https://www.bilibili.com/video/BV1jP411w7S5?t=1853.7&p=5