#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers = NULL; // 정수를 저장할 동적 배열의 포인터 변수
    int num;
    int count = 0; // 입력된 정수의 개수를 카운트하는 변수
    int capacity = 1; // 동적 배열의 현재 용량 (초기값은 1)

    numbers = (int*)malloc(capacity * sizeof(int)); // 용량이 1인 동적 배열 할당

    if (numbers == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }


    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break; // 0이 입력되면 루프를 종료하여 입력을 마칩니다.
        }

        // 동적 배열의 용량을 확인하고, 필요하면 두 배로 늘립니다.
        if (count >= capacity) {
            capacity *= 2;
            numbers = (int*)realloc(numbers, capacity * sizeof(int));

            if (numbers == NULL) {
                printf("메모리 할당 오류\n");
                return 1;
            }
        }

        numbers[count] = num; // 입력받은 정수를 동적 배열에 저장합니다.
        count++; // 입력된 정수의 개수를 증가시킵니다.
    }

    // 입력된 정수를 출력합니다.
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
        printf("\n");
    }
    
    // 동적 배열의 메모리를 해제합니다.
    free(numbers);

    return 0;
  }
