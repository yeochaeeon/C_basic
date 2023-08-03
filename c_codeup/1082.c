#include <stdio.h>

int main()
{
  int input;
  scanf("%X", &input);
  for (int i=1; i<=0xF;i++){
    printf("%X*%X=%X\n", input, i, input*i);
  }
}
