#include <stdio.h>

#include "show.h"
#include "enter.h"
#include "compute.h"

#define LEN 4

void playGame()
{
    // ������ �ʱ�ȭ�� ����
    int tmp1[LEN];
    int tmp2[LEN];

    // �Է¼��ڿ� ������ ������
    int* number = tmp1;
    int* problem = tmp2;

    int i;

    int ball, strike; // Ball Strike
    int inning = 1; // �̴� ��. �ѱ����δ� ��ȸ

    // ���� ���� problem�� ����
    makeProblem(problem);


    // ���� Ȯ�ο� �ڵ�
    // strike ball �� ����� �������� Ȯ���� �� �� �ڵ�
    // �� �迭�� ����ؼ� Ȯ���Ѵ�.
    //for(i = 0; i < LEN; i++) {
    //    printf("%d", problem[i]);
    //}
    //printf("\n");

    // ���� 4�ڸ���� ���� �����ش�
    show4Boxes();

    while(1) {

        // ���� �Է��ؼ� number�� �����Ѵ�
        enterNumber(number);

        if(!isValid(number)) {
            // ���� �޼��� �����ֱ�
            // ������ �߻��ϸ� �ٽ� �Է��ϵ��� �Ѵ�
            showValidError();
            continue;
        }

        // ��Ʈ����ũ ���� ����
        strike = countStrike(problem, number);

        // �� ���� ����
        ball = countBall(problem, number, strike);

        // �̴� ��Ʈ����ũ �� �����ֱ�
        showCounts(inning, ball, strike);

        if(strike == LEN) {
            // ���� ��
            showEnd();
            break;
        }
        // �̴׼� �ø���
        inning++;


    }
    showBars();


}
