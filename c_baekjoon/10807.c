#include <stdio.h>

int main()
{
  int n;
  int cnt = 0;
  int std;
  int a[100];

  scanf("%d", &n);

  for (int i=1; i<=n; i++){
    scanf("%d", &a[i]);
  }
  scanf("%d", &std);  

   
  for (int i=1; i<=n; i++){
    if (a[i] == std){
      cnt += 1 ;
    }
  }

  printf("%d\n", cnt );

  return 0;
}
