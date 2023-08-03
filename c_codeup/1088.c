#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);
  for (int i=0; i<=input; i++ ){
    if(i%3 == 0){
      continue;
    }
    else{
      printf("%d ", i);
    }
  }
}
