## 연산자 우선순위 처리
* 우선 순위가 같을 때는 오른쪽부터 처리됨
* 연산자 우선순위표 참고 => [study.md](https://github.com/yeochaeeon/C_basic/blob/main/study.md)

<details>
  <summary><code> 연산자 우선순위 예제 </code></summary>
  <div markdown="1">
	  
```c
  
#include <stdio.h>

int main() {
    int x = 5;
    int y;

    y = x++;  // 후위 증가 연산자
    printf("x: %d, y: %d\n", x, y);  // 출력: x: 6, y: 5

    x = 5;    // x 값을 다시 5로 초기화
    y = ++x;  // 전위 증가 연산자
    printf("x: %d, y: %d\n", x, y);  // 출력: x: 6, y: 6

    return 0;
}

```
</details>

## 배열(array)
* "같은 type 의 값"들을 index로 관리하는 것.


## 포인터 예제 - 출력결과 예상하기

<details>
  <summary><code> 1. 하 </code></summary>
  <div markdown="1">
	  
```c
  
#include <stdio.h>

int main( void )
{
	int x = 10;
	int *p = &x;
	printf( "%d", *p );
	return 0;
}

```
</details>

<details>
  <summary><code> 2. 하 </code></summary>
  <div markdown="1">
	  
```c
  
#include <stdio.h>

int main( void )
{
	int x = 10;
	int y = 20;
	int *p1 = &x;
	int *p2 = &y;
	printf( "%d %d", *p1, *p2 );
	return 0;
}

```
</details>

<details>
  <summary><code> 3. 하 </code></summary>
  <div markdown="1">
	  
```c
  
#include <stdio.h>

int main( void )
{
	int x = 10;
	int *p = &x;
	*p = 20;
	printf( "%d", x );
	return 0;
}

```
</details>

<details>
  <summary><code> 4. 중 </code></summary>
  <div markdown="1">
	  
```c
  
#include <stdio.h>

void updateValue( int *p )
{
	*p = 30;
}

int main( void )
{
	int x = 10;
	updateValue( &x );
	printf( "%d", x );
	return 0;
}

```
</details>
<details>
  <summary><code> 5. 중 </code></summary>
  <div markdown="1">
	  
```c
  
#include <stdio.h>

int main( void )
{
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;
    printf( "%d", **p2 );
    return 0;
}

```
</details>
<details>
  <summary><code> 6. 중  </code></summary>
  <div markdown="1">
	  
```c
  
void swap( int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main( void )
{
    int x = 10;
    int y = 20;
    swap( &x, &y );
    printf( "%d %d", x, y );
    return 0;
}

```
</details>
<details>
  <summary><code> 7. 상  </code></summary>
  <div markdown="1">
	  
```c
  
void change( int **q )
{
    int y = 20;
    *q = &y;
}

int main( void )
{
    int x = 10;
    int *p = &x;
    change( &p );
    printf( "%d", *p );
    return 0;
}

```
</details>
<details>
  <summary><code> 8. 상  </code></summary>
  <div markdown="1">
	  
```c
void update( int **p )
{
    int y = 50;
    *p = &y;
}
int main( void )
{
    int x = 10;
    int *p = &x;
    update( &p );
    printf( "%d", x );
    return 0;
}

```
</details>
<details>
  <summary><code> 9. 상  </code></summary>
  <div markdown="1">
	  
```c
  
void update( int **p )
{
    int y = 50;
    *p = &y;
}
int main( void )
{
    int x = 10;
    int *p = &x;
    update( &p );
    printf( "%d", *p );
    return 0;
}

```
</details>
<details>
  <summary><code> 10. 상  </code></summary>
  <div markdown="1">
	  
```c
  
void modify( int **ptr )
{
    int local = 25;
    *ptr = &local;
}
int main( void )
{
    int a = 10;
    int *p = &a;
    modify( &p );

    printf( "%d", *p );

    return 0;
}

```
</details>
	  
##  Array로 Stack을 구현해보자.
<details>
  <summary><code> 예시 skeleton code </code></summary>
  <div markdown="1">
	  
```c
	  
#include <stdio.h>

#define MAX_STACK_SIZE 100

// push data to stack
// data to update : stack, size, top_index
voidpush( int new_data, int stack[], int *top_index, int *cur_size )
{
	// check that stack is full
	if ( TODO )
	{
		printf( "Stack is full\n" );
		return;
	}

	// push data to stack
	// TODO
}


// pop data from stack
// data to update : stack, size, top_index
void pop( int stack[], int *top_index, int *cur_size )
{
	// check that stack is empty
	if ( TODO )
	{
		printf( "Stack is empty\n" );
		return;
	}

	// pop data from stack
	// TODO
}

// return top data
// data to update : none
int top( int stack[], int top_index, int cur_size )
{
	if ( TODO )
	{
		printf( "Stack is empty\n" );
		return 0;
	}

	// TODO
}

// print stack
// data to update : none
void print_stack( int stack[], int cur_size )
{
	printf( "----stack----\n" );
	// check that stack is empty
	if ( TODO )
	{
		printf( "Stack is empty\n" );
		printf( "-------------\n" );
		return;
	}
	// print all stack data
	// ex )
	// ----stack----
	// 1 <- top
	// 3
	// 4
	// 5
	// -------------
	// TODO
	printf( "-------------\n" );
}

int main( void )
{
	int stack[MAX_STACK_SIZE];
	int top_index = -1;
	int cur_size = 0;

	while ( 1 )
	{
		int select;
		printf( "\n0. quit\n" );
		printf( "1. push\n" );
		printf( "2. pop\n" );
		printf( "3. print top\n" );
		printf( "4. print size\n" );
		printf( "5. print stack\n" );
		printf( " > " );
		scanf( "%d", &select );
		switch( select )
		{
			case 0: // quit
				return 0;
			case 1: // push
			{
				int new_data;
				printf( "input new data : " );
				scanf( "%d", &new_data );
				push( new_data, stack, &top_index, &cur_size );
				print_stack( stack, cur_size );
				break;
			}
			case 2: // pop
			{
				pop( stack, &top_index, &cur_size );
				print_stack( stack, cur_size );
				break;
			}
			case 3: // print top
			{
				printf( "Top : %d\n", top( stack, top_index, cur_size ) );
				break;
			}
			case 4: // print current stack size
			{
				printf( "Current size : %d\n", cur_size );
				break;
			}
			case 5: // print stack
			{
				print_stack( stack, cur_size );
				break;
			}
			default :
			{
				printf( "Wrong input!\n" );
				break;
			}
		}
	}

	return 0;
}
```
</details>


## 구조체 
```c
struct A
{

int a;
char c;
short s; // 이 구조체 덩어리 전체가 하나의 type 임.

} a; // 그래서 이렇게 선언도 가능함.

```

를 선언했을 때 ram에 어떻게 들어가나? 

<pre>
i가  4바이트 자리를 차지하여 들어가고
그 다음 char 1바이트 들어가고
char뒤에 padding 이 생기고 
그 뒤에 short 2바이트 들어감.
</pre>

<hr>

```c
struct B
{

int i;
long long l;

}
```
<pre> 
i가  4바이트 차지,
그 뒤에 padding  4바이트 존재, 
그 뒤에 8 바이트 차지함.
</pre>

<hr>

```c
struct stack
{

int data[100];
int size;
int top;

}s;
```
으로 선언 후 ,
접근할 때 


```c
struct stack s;
s.data[0];
s.size ;
s.top;
```
이런 식으로 접근할 수 있음.


