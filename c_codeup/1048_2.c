#include <stdio.h>

int main()
{
  int a,b,c,i;
  
  scanf("%d %d", &a ,&b);
  c=1;
  for (i=0; i<b ; i++){
    c=c*2;
  }
  
  printf("%d\n",a*c);
  return 0;
}
