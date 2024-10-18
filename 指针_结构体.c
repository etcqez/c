#include <stdio.h>

// 定义结构体
struct Stu {
  char name[20];
  int age;
  char sex[10];
};
// 打印结构体
void print(struct Stu *ps) {
  printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);
  printf("%s %d %s\n", ps->name, ps->age, ps->sex);
}
// 创建结构体对象
struct Stu s = {"zhangsan", 20, "nan"};
int main() {
  print(&s);
  return 0;
}