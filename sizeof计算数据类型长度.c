#include <stdio.h>

int cal_size() {
  printf("%zu\n", sizeof(char));
  // %zu: 打印一个sizeof返回的无符号整型
  printf("%zu\n", sizeof(int));
  // 只有一个值时括号可以省略
  int arr [10] = {0};
  printf("%zu\n", sizeof arr );
  return 0;
}

int main() { cal_size(); }
