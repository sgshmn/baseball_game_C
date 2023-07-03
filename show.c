#include <stdio.h>

void showBars()
{
    // 막대 출력
    printf("=========================================\n");
}


void showTitle()
{
    // 게임 제목 출력
    showBars();
    printf("             숫자야구게임\n");
    showBars();

    // 선택지 출력
    printf("       s                  else\n");
    printf("    게임하기             나가기\n");
    showBars();
}

void show4Boxes()
{
    showBars();

    // 4개의 사각형 모양 출력
    // 숫자야구의 답이 4자리라는 것을 보여준다
    printf("      ┌────┐ ┌────┐ ┌────┐ ┌────┐\n");
    printf("      │    │ │    │ │    │ │    │\n");
    printf("      │    │ │    │ │    │ │    │\n");
    printf("      └────┘ └────┘ └────┘ └────┘\n");

    showBars();

}

void showArrows()
{
    // 입력용 화살표 출력
    printf(" >> ");
}

void showValidError()
{
    // 에러 메시지 출력
    printf("각 자릿수가 모두 다른 4자리 수를 입력하세요\n");
}

void showCounts(int inning, int ball, int strike)
{
    printf("%2d회 %dB %dS\n", inning, ball, strike);
}

void showEnd()
{
    printf("정답! 축하합니다!\n");
}
