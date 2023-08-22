## 연산자 우선순위 처리
* 우선 순위가 같을 때는 오른쪽부터 처리됨
* 연산자 우선순위표 참고

## 배열
* "같은 type 의 값"들이 연속되어서.....저장...? 암튼...

## 구조체 
```
struct A
{

int a;
char c;
short s; // 이 구조체 덩어리 전체가 하나의 type 임.

} a; // 그래서 이렇게 선언도 가능함.

```

를 선언했을 때 ram에 어떻게 들어갈까?

<pre> i 4바이트 자리를 차지하여 들어가고 그다음 char 1바이트 들어가고 char뒤에 padding 이 생기고 그 뒤에 short 2바이트 들어감.</pre>

```
struct B
{

int i;
long long l;

}
```
<pre>-> 일때도 i 4바이트 차지 , 뒤에 padding  4바이트 존재, 그뒤에 l 바이트 차지함.</pre>
```
struct stack
{

int data[100];
int size;
int top;

};
```
접근할 때 struct stack s;
s.data[0];
s.size ;
s.top;


