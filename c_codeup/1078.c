#include <stdio.h>


int main(){
  int num;
  scanf("%d", &num);
  int a = 1;
  int sum = 0;

  while( a<= num ){
    if (a%2 == 0){
      sum = sum + a;
      a += 1;
    }
    else{
      a +=1;
    }
    
  }
  printf("%d\n", sum);
}
