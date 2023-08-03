#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);
  num -= 1;
  while(num != -1){
    printf("%d\n", num);
    num -= 1;
  }
}
