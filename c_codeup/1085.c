#include <stdio.h>

int main(){
  float h,b,c,s;
  scanf("%f %f %f %f", &h, &b, &c, &s );
  double result = ((((h*b*c*s)/1024)/1024)/8);
  printf("%.1f MB\n", result );
}
