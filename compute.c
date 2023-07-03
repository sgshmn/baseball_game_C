#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 4

void makeProblem(int* problem)
{
    // ���� �����
    // �� 4�ڸ��� ���� ���� �޶�� �Ѵ�
    int i, j;

    // ������ ���� ����ϱ� ���� �ð����� �����Ѵ�
    srand(time(NULL));

    for(i = 0; i < LEN; i++) {

        // 0~9 �� �ϳ�
        problem[i] = rand() % 10;

        for(j = 0; j < i; j++) {
            if( problem[j] == problem[i] ) {
                // ���ڸ� ���� ������ �ٽ� �̴´�
                i--;
                break;
            }
        }
    }

}
int countStrike(int* problem, int* number) {

    // strike ���� ����
    int cnt = 0;
    int i;

    // ���� ��ġ�� ��� ���ƾ� �Ѵ�
    for(i = 0; i < LEN; i++) {
        if(problem[i] == number[i]) {
            cnt++;
        }
    }

    return cnt;
}


int countExist(int* problem, int* number) {

    // ��Ʈ����ũ �� ���� ���� �� ���ϱ�
    // ��ġ�� ������� ���� ���� � �ִ��� Ȯ���ϸ� �ȴ�
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
    // �� ���� ���ϱ�
    // ��ġ ������� ���� ���� �� ���� - ��ġ�� ���� �� ����
    return countExist(problem, number) - strike;
}

int isValid(int* number) {

    // �Է��� ������ �� �ڸ����� ��� �ٸ��� Ȯ���ϱ�
    int i, j;
    for(i = 0; i < LEN - 1; i++) {
        for(j = i + 1; j < LEN; j++) {

            // �Ѱ��� ������ ������ 0�� ��ȯ�Ѵ�
            if(number[i] == number[j])
                return 0;
        }
    }
    // ��� �ٸ��� 1�� ��ȯ�Ѵ�
    return 1;
}
