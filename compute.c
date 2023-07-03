#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 4

void makeProblem(int* problem)
{
    // 문제 만들기
    // 각 4자리의 수가 서로 달라야 한다
    int i, j;

    // 무작위 수를 출력하기 위해 시간값을 조정한다
    srand(time(NULL));

    for(i = 0; i < LEN; i++) {

        // 0~9 중 하나
        problem[i] = rand() % 10;

        for(j = 0; j < i; j++) {
            if( problem[j] == problem[i] ) {
                // 앞자리 수와 같으면 다시 뽑는다
                i--;
                break;
            }
        }
    }

}
int countStrike(int* problem, int* number) {

    // strike 개수 세기
    int cnt = 0;
    int i;

    // 값과 위치가 모두 같아야 한다
    for(i = 0; i < LEN; i++) {
        if(problem[i] == number[i]) {
            cnt++;
        }
    }

    return cnt;
}


int countExist(int* problem, int* number) {

    // 스트라이크 볼 개수 합한 값 구하기
    // 위치에 상관없이 같은 값이 몇개 있는지 확인하면 된다
    int cnt = 0;
    int i, j;

    for(i = 0; i < LEN; i++) {
        for(j = 0; j <LEN; j++) {
            if(problem[i] == number[j]) {
                cnt++;
                break;
            }
        }
    }

    return cnt;

}

int countBall(int* problem, int* number, int strike)
{
    // 볼 개수 구하기
    // 위치 상관없이 값이 같은 것 개수 - 위치도 같은 것 개수
    return countExist(problem, number) - strike;
}

int isValid(int* number) {

    // 입력한 숫자의 각 자릿수가 모두 다른지 확인하기
    int i, j;
    for(i = 0; i < LEN - 1; i++) {
        for(j = i + 1; j < LEN; j++) {

            // 한개라도 같은게 있으면 0을 반환한다
            if(number[i] == number[j])
                return 0;
        }
    }
    // 모두 다르면 1을 반환한다
    return 1;
}
