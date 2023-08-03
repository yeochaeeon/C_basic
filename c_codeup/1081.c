#include <stdio.h>

int main()
{
  int i,j;
  int input, jnput;
  scanf("%d %d", &input, &jnput);
  for(i=1; i <=input ; i++ ){
    for(j=1; j<=jnput; j++){
      printf("%d %d\n", i,j);
    }
  }
}
