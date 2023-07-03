#include <stdio.h>

#include "show.h"

#define LEN 4

char enterKey()
{
    // 키 입력해서 키 반환
    char key;

    showArrows();
    scanf("%c", &key);
    return key;
}

void enterNumber(int* number)
{
    // 숫자 입력
    // 숫자를 입력받아 넘겨받은 위치에 저장한다
    int temp;

    // iterater
    int i;

    showArrows();
    scanf("%d", &temp);

    // 1의 자리부터 차례로 넣는다
    // 1000의 자리가 인덱스 0 을 차지하도록 한다
    for (i = LEN - 1; i >= 0; i--) {
        number[i] = temp%10;
        temp /= 10;
    }
}
