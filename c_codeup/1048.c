#include <stdio.h>
#include <math.h>

int main()
{
  int a,b;
  int square;
  scanf("%d %d", &a, &b);
  square = pow(2,b);
  printf("%d", a*square );
  return 0;
}
