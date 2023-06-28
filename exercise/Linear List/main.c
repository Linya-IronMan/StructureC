/*
文件说明：
  主函数 - 调试 DS.h 中的其他函数
*/

#include <stdio.h>
#include "../DS.h"

int main(void)
{
  LSeqList L = InitLinearList();
  InsertLinearList(L, 1, 0);
  InsertLinearList(L, 2, 1);
  InsertLinearList(L, 3, 2);
  printf("len: %d, res: %d", L->length, L->data[0]);
  return 0;
}