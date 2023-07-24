/**
 * 线性表的链式存储
 */
#include <stdio.h>
#include "linklist.h"

int main() {
  LinkList L;
  LNode *search;
  // list_head_insert(L);
  list_tail_insert(L);
  print_list(L);
//  search = GetElem(L, 2);
//  if(search != NULL) {
//    printf("Succeeded in searching by serial number\n");
//    printf("%d", search->data);
//  }
//
//  search = LocateElem(L, 6);
//  if(search != NULL) {
//    printf("search by value succeeded\n");
//    printf("%d, proceed: %d\n", search->data, L->data);
//  }
  printf("======\n");
  ListDelete(L, 4);
  print_list(L);
  return 0;
}
