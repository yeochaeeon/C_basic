#include <stdio.h>

int main()
{
  int input;
  int sum = 0;
  scanf("%d", &input);
  for(int i=1; sum < input; i++ ){
    sum = sum + i;
  }
  printf("%d\n", sum);
}
