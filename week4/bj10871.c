#include <stdio.h>

int n,x,num;
int compare(int n,int x);
int main()
{
  scanf("%d %d", &n, &x);// 몇 개인지 받음, 비교해야하는 수 받음

  
  //  scanf("%d", &num); // 수의 목록을 받음
  //  compare(n,x); // 비교를 함
  //  작으면 그 수를 출력하기 
  // 크면 아무것도 안하기 
  for (int i=1; i<=n; i++){

    scanf("%d", &num);
    int result = compare(n,x);
    if(result != 0){
      printf("%d ", result);
    }

  }
}

int compare(int n,int x)
{
  if(num < x){
    return num;
  }
  else{
    return 0;
  }

  
}
