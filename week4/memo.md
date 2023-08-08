## 배열 입력받을 때 메모리에 어떻게 들어가는가...?
```
int arr[3]={10,20,30}
char arr2[5]="abcd"
char arr3[5]={a,b,c,d}

```
**문자열의 마지막에는 null값이 있다는 것 유의**




```
#include <stdio.h>

int main( void ){
    printf( "Hello , world !");
    return 0;
}
```
* int : return type 
* main : function name
* void :  parameter

## 왜 함수를 씀...?

* 유지보수 편함
* 뭐 ...1. 첫번째 이유 까먹음
* 

## 두 매개변수를 받아서 덧셈하는 함수 작성  &  함수호출 

```
int plus(int a, int b)
{
    return a+b ;
}

int main( void )
{
    int result = plus(1,2); /// 함수를 호출함 
    printf("hello, world\n");
    return 0;
    printf("result is %d\n", result );
}

int plus

```
## 선언 vs. 정의 
* 차이가 있음~




