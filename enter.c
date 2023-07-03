#include <stdio.h>

#include "show.h"

#define LEN 4

char enterKey()
{
    // Ű �Է��ؼ� Ű ��ȯ
    char key;

    showArrows();
    scanf("%c", &key);
    return key;
}

void enterNumber(int* number)
{
    // ���� �Է�
    // ���ڸ� �Է¹޾� �Ѱܹ��� ��ġ�� �����Ѵ�
    int temp;

    // iterater
    int i;

    showArrows();
    scanf("%d", &temp);

    // 1�� �ڸ����� ���ʷ� �ִ´�
    // 1000�� �ڸ��� �ε��� 0 �� �����ϵ��� �Ѵ�
    for (i = LEN - 1; i >= 0; i--) {
        number[i] = temp%10;
        temp /= 10;
    }
}
