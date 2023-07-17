#include <stdio.h>

int main()
{ 

  int a,b,c,d,e;
  scanf("%1d%1d%1d%1d%1d", &a,&b,&c,&d,&e );
  // 반드시 각각 %1d 로 받아야 한다 
  // 그렇지 않으면 5자리수를 입력 했을때 첫번째 %d에
  // 다섯자리수를 모두 할당하여 계산하기 때문.
  printf("[%d]\n",a*10000);
  printf("[%d]\n",b*1000);
  printf("[%d]\n",c*100);
  printf("[%d]\n",d*10);
  printf("[%d]\n",e);
  return 0;
}
