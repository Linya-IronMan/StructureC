//
// Created by 陈定涛 on 2023/7/18.
// 线性表的链式存储实现
//
#include "linklist.h"


LinkList list_head_insert(LinkList &L) {
  // malloc 需要引入 stdlib.h 否则会标红
  // TODO: 什么时候使用 . 语法访问属性，什么时候使用 -> 语法？
  // 注意：需要先创建一个头节点
  L = (LinkList)malloc(sizeof(LNode));
  L->next = NULL;

  int i = 1;
  while(i++ <= 5) {
    // 循环创建 malloc 可能会消耗大量空间；好像并没有，每个申请的空间都是实际有用的。
    LNode* new_node = (LNode *)malloc(sizeof(LNode));
    new_node->next = L->next;
    L->next = new_node;
    scanf("%d", &new_node->data);
  }
  return L;
}

LinkList list_tail_insert(LinkList &L) {
//  创建头节点
  L = (LNode *)malloc(sizeof(LNode));
  L->next = NULL;
  LNode *tail = L;

  ElemType d;
  scanf("%d", &d);
// TODO: 问题，如何使用 while + scanf 连续输入，并对输入内容进行判断
// TODO: 注意：此处的输入可以连续输入 1 2 3 4 5 9999 而无需输入一个数字就换行
  while(9999 != d ) {
    LNode *new_node = (LNode*)malloc(sizeof(LNode));
    new_node->next = NULL;
    new_node->data = d;
    tail->next = new_node;
    tail = new_node;
    scanf("%d", &d);
  }

  return L;
}

void print_list(LinkList L) {
  LNode* p = L->next;
  while(p != NULL) {
    printf("%d", p->data);
    p = p->next;
  }
}

LNode* GetElem(LinkList L, int pos) {
  int i = 1;
  while(i<=pos && L!=NULL) {
    L = L->next;
    i++;
  }
  return L;
}

LNode* LocateElem(LinkList L, ElemType value) {
  L = L->next;
  while(L != NULL && L->data != value) {
    L = L->next;
  }
  return L;
}

bool ListFrontInsert(LinkList &L, int locate, ElemType value ) {
  LNode *p = GetElem(L, locate-1);
  if (!p) return false;
  LNode *new_node = (LNode *)malloc(sizeof(LNode));
  new_node->data = value;
  new_node->next = p->next;
  p->next = new_node;
  return true;
}

bool ListDelete(LinkList &L, int pos) {
  LNode *previous = GetElem(L, pos - 1);
  if(NULL == previous) return false;
  LNode *delete_node = previous->next;
  previous->next = previous->next->next;
  free(delete_node);

  return true;
}