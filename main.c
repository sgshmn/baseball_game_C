#include <stdio.h>
#include <stdlib.h>

#include "show.h"
#include "enter.h"
#include "game.h"


int main()
{
    // ���� ���� �����ֱ�
    showTitle();

    // ��ȣ �Է��ϸ� �׿� �´� ȭ�� �����ֱ�
    switch (enterKey()) {
        case 's':
            // �����ϱ�
            playGame();
            break;
        default:
            // �� �� ������
            break;
    }

    return 0;
}
