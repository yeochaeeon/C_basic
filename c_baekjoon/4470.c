#include <stdio.h>

int main()
{
  int num;
  char sntn[51];

  scanf("%d", &num);

  getchar();
  
  for (int i=1; i<=num ; i++){
        
    fgets(sntn, 51, stdin);
    printf("%d. ",i );
    printf("%s", sntn);

  }
  return 0;
}



