## linked list

* 메모리상에 연속적으로 존재하는 애들이 아님
* 동적으로 메모리를 할당받음
* 포인터로 연결된 list 

## 왜 linked list 를 쓰냐?

* 0.1.2.3.4 가 순서대로 있는 배열의 경우 사이에 새로운 데이터를 넣고 싶을 때 , 많은 cost가 소모됨 ()
* linked list 는 새로운 데이터를 추가하기가 매우 쉬움
* 어째서냐? 포인터만 새로 가리켜주면 되기 때문에
* 

## linked list로 Stack 구현 ( double..? linke list ? )

* 공간을 하나 만들어주고 데이터(1) push 후  top이 그 공간을 가리키게 함
* 새로운 데이터 push : 첫 데이터(1)가 두번째 데이터(2)를 가리키게 만들고 탑이 그 새로운 데이터(2)를 가리키게 함 . 
*  


```c

Struct Node {

int data;
Struct Node* next;
Struct Node* prev;
//sfdf
}

```
## 공간 할당

```c

#include <stdio.h>
#include <stdlib.h>
Struct Node //냐미
{

    int data;
    Struct Node *next;
    Struct Node *prev;

};

int main (void)
{
    Struct Node * node_ptr = NULL;
    node_ptr =  ( Struct Node * ) malloc ( sizeof( Struct Node ) );
    
    return 0;  
}

```

