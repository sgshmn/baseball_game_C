#include <stdio.h>
#include <stdlib.h>

#include "show.h"
#include "enter.h"
#include "game.h"


int main()
{
    // 게임 제목 보여주기
    showTitle();

    // 번호 입력하면 그에 맞는 화면 보여주기
    switch (enterKey()) {
        case 's':
            // 게임하기
            playGame();
            break;
        default:
            // 그 외 나가기
            break;
    }

    return 0;
}
