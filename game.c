#include <stdio.h>

#include "show.h"
#include "enter.h"
#include "compute.h"

#define LEN 4

void playGame()
{
    // 포인터 초기화용 변수
    int tmp1[LEN];
    int tmp2[LEN];

    // 입력숫자와 문제의 포인터
    int* number = tmp1;
    int* problem = tmp2;

    int i;

    int ball, strike; // Ball Strike
    int inning = 1; // 이닝 수. 한국말로는 몇회

    // 문제 만들어서 problem에 저장
    makeProblem(problem);


    // 정답 확인용 코드
    // strike ball 이 제대로 나오는지 확인할 때 쓴 코드
    // 답 배열을 출력해서 확인한다.
    //for(i = 0; i < LEN; i++) {
    //    printf("%d", problem[i]);
    //}
    //printf("\n");

    // 답이 4자리라는 것을 보여준다
    show4Boxes();

    while(1) {

        // 숫자 입력해서 number에 저장한다
        enterNumber(number);

        if(!isValid(number)) {
            // 에러 메세지 보여주기
            // 에러가 발생하면 다시 입력하도록 한다
            showValidError();
            continue;
        }

        // 스트라이크 개수 세기
        strike = countStrike(problem, number);

        // 볼 개수 세기
        ball = countBall(problem, number, strike);

        // 이닝 스트라이크 볼 보여주기
        showCounts(inning, ball, strike);

        if(strike == LEN) {
            // 게임 끝
            showEnd();
            break;
        }
        // 이닝수 올리기
        inning++;


    }
    showBars();


}
