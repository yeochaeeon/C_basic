#include <stdio.h>

int main()
{
  int n;
  int lst;
  int count=0;
  int std;
  scanf("%d", &n);
  for (int i=1; i<=n; i++){
    scanf("%d", &lst);
    scanf("%d", &std);
    if(lst == std){
      count = count +1;
    }
    
  }
  printf("%d", count);

}
