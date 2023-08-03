#include <stdio.h>

int main(){
  int count;
  scanf("%d", &count);
  reget:
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    count -= 1;
    if (count > 0 ) goto reget;


  return 0;



}

