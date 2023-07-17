#include <stdio.h>

int main()
{

  char data[2001];
  fgets( data, 2000, stdin); 
  // stdin : 키보드로 입력받는다. 
  printf("%s",data); 
  //%s 는 strinn 출력타입 그니까 문장이다. 
  //만약 %s 로 받으면 첫 단어 까지만 출력된다 .
  return 0; 
}
