#include <stdio.h>

void showBars()
{
    // ���� ���
    printf("=========================================\n");
}


void showTitle()
{
    // ���� ���� ���
    showBars();
    printf("             ���ھ߱�����\n");
    showBars();

    // ������ ���
    printf("       s                  else\n");
    printf("    �����ϱ�             ������\n");
    showBars();
}

void show4Boxes()
{
    showBars();

    // 4���� �簢�� ��� ���
    // ���ھ߱��� ���� 4�ڸ���� ���� �����ش�
    printf("      ������������ ������������ ������������ ������������\n");
    printf("      ��    �� ��    �� ��    �� ��    ��\n");
    printf("      ��    �� ��    �� ��    �� ��    ��\n");
    printf("      ������������ ������������ ������������ ������������\n");

    showBars();

}

void showArrows()
{
    // �Է¿� ȭ��ǥ ���
    printf(" >> ");
}

void showValidError()
{
    // ���� �޽��� ���
    printf("�� �ڸ����� ��� �ٸ� 4�ڸ� ���� �Է��ϼ���\n");
}

void showCounts(int inning, int ball, int strike)
{
    printf("%2dȸ %dB %dS\n", inning, ball, strike);
}

void showEnd()
{
    printf("����! �����մϴ�!\n");
}
