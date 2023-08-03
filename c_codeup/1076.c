#include <stdio.h>

int main()
{
  char x;
  char n;
  scanf("%c", &x);
  n = 'a';
  while ( n == x || n<x ){
    printf("%c ", n);
    n += 1;
  }
}
