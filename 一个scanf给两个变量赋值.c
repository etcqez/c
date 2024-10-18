#include <stdio.h>

int main(void) {
  int num1 = 0;
  int num2 = 0;
  // scanf不能加\n
  scanf("%d %d", &num1, &num2);
  printf("num1+num2=%d\n", num1 + num2);
  return 0;
}
