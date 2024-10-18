#include <stdio.h>
int main() {

  // getchar的返回值是int
  //   int ch = getchar();
  //   printf("%c\n", ch);
  //   // 打印一个字符
  //   putchar(ch);
  //   ch = 0;
  //   while ((ch = getchar()) != EOF) {
  //     putchar(ch);
  //   }
  char password[20] = {0};
  printf("请输入密码:>");
  // 输入1234 asdf\ngetchat获取一个字符_getchar的返回值是int_scanf不会读取\\n和空格进入输入缓冲区, scanf不会读取\n和空格, 只会拿到1234
  scanf("%s", password);
  // getchar只读取一个字符, 剩下asdf
  //   getchar();
  int ch = 0;
  // 循环读取, ch等于\n退出, 此时已读取到\n
  while ((ch = getchar()) != '\n') {
    ;
  }
  printf("请确认密码(Y/N):");
  int ret = getchar();
  if ('Y' == ret) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}