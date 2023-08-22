## 전처리 과정 : # 이 붙어있는 애들을 처리 해줌
```더 공부하긔.. 뭔지 정확히 모르겠음```
<hr>

* main.s : 어셈블리어 가 나옴 (기계어 코드)

* lvim main.o : 이상한 코드가 나옴 (기계어라서 해독 할 수 없음)

* ls -alt : 시간순 
* ls -lart : 시간 역순
* gcc -E ./main.c -o main.i -> main.i 생성


-> 기계어 코드를 사람이 알아볼 수 있게 일대일 대응 시켜 놓은게 어셈블리어.

# [20230703 assign]

**local 에서 갱신된 내용 repo에 적용하기**

1. git add .
2. git commit -m " message "
3. git push

# [20230710 study]

**scanf("%d", &a);**

```형식지정자```

<pre>
%d : 정수형
%s : 문자열
%c : 문자 하나
%f : 실수형 
.
.
. 등등등 많음
</pre>

* 정수 타입 (부호가 있는 signed)
  * char :1
  * short :2
  * int :4
  * long :8
  * longlong :8
* (부호 없는 unsigned)
  * 앞에 unsigned를 붙여주면 됨


* 실수
  * float :4
  * double :8
  * long double :   
```c
#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  printf("%d", a);

  return 0;
}
```
**위 코드에서 scanf 에만 &을 써주는 이유?** <br>
-> 그런게 있음 뭔지 아는데 쓰기 귀찮다.. 그치만 중요한거라서 질문만 적어두기..

## 숫자의 범위를 고려하여 자료형을 선택해야한다 

<pre>
 char : 1byte 
 short : 2byte
 int : 4byte
 long long : 
 .
 .
 .
</pre>
 


# [20230710 assign]

git push 자꾸 git push 가 안됨
왜냐 .. local 이랑 remote 랑 다른 내용이 있었는데 그냥 냅다 push 하니까 충돌이 일어난 것..
push 하기전에 pull 을 해주고 충돌을 없애줬어야 했는데. 그거 안하고 막 푸시함..
근데 나중에  git pull 을 하니까 얘가 안먹어 .. 
git pull --rebase 하니까 갑자기 먹으면서 문제해결 

1. git pull --rebase
2. git pull
3. git add .
4. git commit -m "message"
5. git push
해결!!!!





## <포인터의 개념>

이 오류에서 포인터의 개념 조금.. &a 라는 것은 a라는 변수의 주소를 나타내는 값인데 int 가 아나라는 내용의 오류인듯 
-> printf 에는 &a 가 아닌 a를 매개변수로 해야함.
(습관적으로 &을 자꾸 붙임..)
![error code](https://github.com/yeochaeeon/C_basic/assets/129289883/a1154a83-e929-4aab-9048-0d2c64cd678c)

![pointer](https://github.com/yeochaeeon/C_basic/assets/129289883/ecb4d26b-5877-4b64-b6e5-3406e571c11a)







* < 정수,실수 출력시 >
특정한 자리수로 맞추어서  출력시키고 싶을때
 * {정수} 출력의 경우:
   * %Nd: N자리수로 출력합니다. 예를 들어, %5d는 5자리 수로 출력합니다. 만약 출력값이 지정한 자리수보다 작다면 앞에 공백이 채워집니다. 예를 들어, printf("%5d",42);는 "___42"와 같이 출력됩니다.
   * 참고: 출력하는 자리수를 지정하기 위해 %4d와 같은 형식을 사용할 수 있는데, 빈칸을 0으로 출력하기 위해서는 %04d와 같은 형식을 사용하면 된다. <br>
 * {실수} 출력의 경우:
   * %.Nf: 소수점 아래 N자리까지 출력합니다.
   * 예를 들어, %.2f는 소수점 아래 2자리까지 출력합니다. 만약 소수점 아래 자리수가 모자랄 경우 0으로 채워집니다. 예를 들어, printf("%.2f", 3.14159);는 "3.14"와 같이 출력됩니다.
 * {문자열} 출력의 경우:
   * %Ns: N자리수로 출력합니다. 만약 문자열의 길이가 N보다 작다면, 지정한 자리수에 맞추어 출력됩니다.
   * 예를 들어, printf("%10s", "Hello");는 " Hello"와 같이 출력됩니다(남은 칸은 공백으로 처리되어 출력됨.
   
* < 실수에서의 비트표현 범위>





# [20230724]
## *비트단위 연산자
**Codeup - 1060**

* 비트단위(bitwise)연산자는 
<pre>
 ~ (bitwise not)
 & (bitwise and)
 | (bitwise or)
 ^ (bitwise xor)
 << (bitwise left shift)
 >> (bitwise right shift)
</pre>
  가 있다. 
 * 예제 :
   3, 5 를 이진수로 표현 했을 때 겹치는 비트만을 1로 출력하고자 할 때
   -> 3 & 5

# [20230731]

## *scanf 의 입력방식
**Codeup - 1079**

* 과제 질문 내용
  
```while 안에서의 scanf ```
<pre>
공백을 포함한 입력을 받을때, (ex ; 6 7 0 8 4 5 6)
while 문안에 scanf("%d" ,&a) 가 있으면 알아서 공백을 기준으로 6 7 0 8 ... 이렇게 돌아가면서 입력값을 처리함 
근데 이제  scanf("%d" ,&a) ; 후에
while( )이런 식으로 되어있으면 입력값 첫번째 값만 가져와서 그대로 그 값만 가지고 while 문을 돌린다. 
</pre>


# [20230821 study]

## 연산자 우선순위

![스크린샷 2023-08-22 160616](https://github.com/yeochaeeon/C_basic/assets/129289883/86dc5a30-49da-4745-b987-c242d025b7fe)
![스크린샷 2023-08-22 160630](https://github.com/yeochaeeon/C_basic/assets/129289883/466a6f39-5e12-493e-9701-1968e223d4e9)

