/*
������ȯ������ �������α׷��� ������� �����Ͽ� �ذ��غ���.
�Ž������� �ݾ��� 1~15������ ��ȭ��Ű�鼭 ���������� 1���� �ִ°Ϳ��� ������
1��, 5���� ���� ��, 1��, 5��, 12�� ���� �� ������ ���������� �ϳ��� ������Ű�鼭
�ظ� ã�ư���.
*/
#include <stdio.h>

int main() {
	int set[4] = { 1,5,12,50 };
	int count[16];
	int coin[16];
	int charge, i, j;

	charge = 15;
	j = 0;

	/* ���� �������� ������������ ���ĵǾ� �ִٴ� ���� �����Ͽ�
	���� ���� ���������� �Ž��� �ݾ׺��� ũ�� �Ұ����ϴ�.*/
	if (set[j] > charge) {
		printf("impossible");
		return 0;
	}

	// ���� ���� ���� ������ �̿��� �ʱ�ȭ
	for (i = 0; i < set[j]; i++)
	{
		count[i] = 0;
		coin[i] = -1;
	}

	return 0;
}