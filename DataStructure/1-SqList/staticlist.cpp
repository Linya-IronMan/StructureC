//
// Created by 陈定涛 on 2023/7/16.
// 使用顺序表（数组）实现线性表
// 静态内存
// 1. ListInsert
// 2. ListDelete
//

#include "staticlist.h"
#include <stdio.h>

// 因为 L 会发生改变，所以 L 要使用引用
// 注意：pos 是位置；而不是下标
bool ListInsert(SqList &L, int pos, ElemType element) {
  // pos 判断越界
  if (pos < 1 || pos > L.length + 1) { return false; }
  // 如果已经满了，不能插入
  if (L.length == MaxSize) { return false; }
  // 插入在中间，需要移动元素

  for (int j = L.length; j>=pos; j--) {
    L.data[j] = L.data[j-1];
  }
  L.data[pos - 1] = element;

  //    将 L.length ++
  L.length++;
  return true;

}

// 注意：删除之后需要获取被删除的值
// 注意：pos 指的是位置而不是下标
bool ListDelete(SqList &L, int pos, ElemType &del) {
//  pos 越界检测
  if (pos <1 || pos > L.length) { return false; }

  // 保存要删除的元素
  del = L.data[pos - 1];
  // 移动被删除的元素之后的元素
  for (int i = pos - 1; i < L.length - 1; i++) {
    // L.data[i+1] 不能去访问越界元素 =》 i + 1 < L.length => i < L.Length - 1
    L.data[i] = L.data[i+1];
  }
  L.length--;
  return true;
}


void PrintList(SqList L) {
  int i;
  for(i = 0; i< L.length; i++) {
    printf("%d ", L.data[i]);
  }
  printf("\n");
}


bool swap(ElemType &a, ElemType &b) {
  ElemType c = a;
  a = b;
  b = c;
  return true;
}
