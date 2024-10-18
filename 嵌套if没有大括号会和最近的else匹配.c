#include <stdio.h>

int reverse() {
  int a = 0;
  int b = 2;
  if (a == 1) {
    if (b == 2){
      printf("hehe\n");
    }
  } else {
    printf("reverse里面\n");
    printf("haha\n");
  }
}

int main() {
  int a = 0;
  int b = 2;
  if (a == 1)
    if (b == 2)
      printf("hehe\n");
  // 实际和里面的if匹配
  else
    printf("haha\n");
  reverse();
  return 0;
}