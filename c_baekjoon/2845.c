#include <stdio.h>

int main()
{
  int per, space, total;
  int news;
  scanf("%d %d", &per, &space);
  total = per * space;
  
  for (int i =1; i<=5; i++){
    scanf( "%d", &news);
    printf("%d ", news-total );
  }

}
