#include <stdio.h>
#include "staticlist.h"



int main() {
  SqList L;
  bool ret;
  L.data[0] = 1;
  L.data[1] = 2;
  L.data[2] = 3;
  L.length = 3;
  PrintList(L);
  ret = ListInsert(L, 2, 999);
  printf("%d\n", ret);
  PrintList(L);
  puts("_____________________");
  ElemType del;
  bool delRet = ListDelete(L, 4, del);
  if (delRet) {
    printf("after delete: %d \n", del);
    PrintList(L);
  } else {
    printf("删除失败");
  }
  return 0;
}
