#include <stdio.h>
// 定义uint类型
typedef unsigned int uint;

int typedef定义类型别名() {
  uint num1 = 0;
  printf("%d\n", sizeof(num1));
}

void test1() {
  static int a = 0;
  a++;
  printf("%d ", a);
}

int main() {
  typedef定义类型别名();
  for (int i = 0; i < 10; i++) {
    test1();
  }
}
