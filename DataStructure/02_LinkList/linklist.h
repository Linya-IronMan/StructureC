//
// Created by 陈定涛 on 2023/7/18.
/**
 * 线性表的链式存储
 */
//

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    LNode *next;
}LNode, *LinkList;

/**
 * 链表头插法插入数据
 * 这是一个根据 scanf 输入不断插入并建立一个完整链表的过程
 * 并不是向一个链表中插入一个数据
 * 当输入指定的数字时，结束输入，结束链表的建立。
 * 头插法是将元素的
 * @param L LinkList LNode*
 */
LinkList list_head_insert(LinkList &L);
// or
LinkList list_head_insert(LNode* &L);

/**
 * 尾插法
 * 需要增加一个尾指针，将新的数据放到尾指针后面
 * @param L
 */
LinkList list_tail_insert(LinkList &L);
LinkList list_tail_insert(LNode *&L);
// TODO: 问题，这里不写 &L 引用，就不能修改了么？
// TODO: 可以修改，但是对 L 的修改不会返回...
void print_list(LinkList L);

/**
 * 链表查找：按位置查找
 * 注意：按位置查找以头节点为位置 0
 */

LNode* GetElem(LinkList L, int pos);

/**
 * 定位某一个值 —— 按值查找
 */
LNode* LocateElem(LinkList L, ElemType data);

/**
 * 在第 i 个位置插入新的节点
 * @param L
 * @param locate
 * @param value
 * @return bool
 */
bool ListFrontInsert(LinkList &L, int locate, ElemType value);

/**
 *
 * @param L
 * @param pos
 * @return boo
 */
bool ListDelete(LinkList &L, int locate);