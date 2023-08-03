#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);
  for (int i=1; i<=input; i++){
    if (i%3==0){
       printf("X ");
       }
    else{
       printf("%d ", i);
       }
  }
}
