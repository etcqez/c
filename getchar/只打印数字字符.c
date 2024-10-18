#include <stdio.h>

int main() {
  char ch = '\0';
  while ((ch = getchar()) != EOF) {
    // 字符可以比较大小,因为g本质是数字
    // 不是数字跳过,是数字打印
    if (ch < '0' || ch > '9')
      continue;
    putchar(ch);
  }
  return 0;
}