#include <stdio.h>
#define LEN 10
int deleteList(int array[10], int len)
{
  int minIdx = 0;
  int i;
  for (i = 0; i < len; i++)
  {
    if (array[i] < array[minIdx])
    {
      minIdx = i;
    }
  }

  // 找到后删除元素并使用最后一个元素填补
  int num = array[minIdx];
  array[minIdx] = array[len - 1];
  array[len - 1] = num;
}

int main()
{
  int LList[LEN] = {3, 4, 1, 56, 23, -23, 556, 9, 10, 22};
  return 0;
}
