#include <stdio.h>
/*
 * const修饰的实际上是常变量
 * 不能放在数组的中括号中
 */
void const常变量() {
  const int n = 10;
  // 数组的小括号需要常量
  // int arr[n] = {0};
  int arr[10] = {0};
}

void define定义的标识符常量() {
#define MAX 100
  printf("%d\n", MAX);
}

void 枚举常量() {
  enum Color { RED, GREEN, BLUE };
  enum Color c = RED;
  printf("颜色枚举常量: %d\n", c);
}

int main() {
  const常变量();
  define定义的标识符常量();
  枚举常量();
}
