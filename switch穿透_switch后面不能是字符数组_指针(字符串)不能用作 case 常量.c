#include <stdio.h>
int main() {
//   char a[]= {'a','b'};
  char a='a';
  // 如果a==常量1, 执行语句块1, 如果没有break, 直接进入到语句块2, 而不会判断常量2
  // switch后面不能是字符数组
  switch (a) {
  case 'a':
    printf("a\n");
  case 'b':
    printf("b\n");
  case 'c':
    printf("c\n");
// // 指针(字符串)不能用作 case 常量
//   case "c":
    // printf("c\n");
//case只能是常量, 且不能是float, double
//   case 2.2:  
//     printf("c\n");
  }
}