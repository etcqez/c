#include <stdio.h>
#include <string.h>

int main() {
  char arr[10] = "abcdef";
  // 字符串后面隐藏了一个\0
  // []会自动根据后面的内容确定大小
  char arr1[] = "abcdef";
  // 这种写法没有\0, printf会一直打印直到遇到\0
  // 字符用单引号
  char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
  char arr5[] = {'a', 'b', 'c', 'd', 'e', 'f', 0};
  // 不完全初始化, 结尾自动补0
  char arr4[4] = {'a', 'b', 'c'};
  printf("%s %d\n", arr1, strlen(arr1));
  printf("%s %d\n", arr2, strlen(arr2));
  printf("%s %d\n", arr3, strlen(arr3));
  printf("不完全初始化的结果是: %d\n", strlen(arr4));
  printf("最后补\\0的结是是: %d\n", strlen(arr3));
  printf("最后补0的结果是: %d\n", strlen(arr4));

  // \0只适用于字符数组, 整型数组有存在\0
  int arr10[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("没有\\0的int数组长度: %d\n", sizeof(arr10));

  return 0;
}
