/*
 * 7_3.c
 * 
 * ����� ���ᨢ �� 12 ����⮢ 
 * � �믮����� 横���᪨� ᤢ�� 
 * ������ �� 4 �����.
 * 
 * 
 */

#include <stdio.h>

void shift_right(int massiv[], int size)
{
	int x;
	x = massiv[size-1];
	for (int i = size - 1; i > 0; i--)
		massiv[i] = massiv[i-1];
	massiv[0] = x;
}

int main()
{
	printf("������ 12 �ᥫ �१ �஡��: \n");
	int i; int massiv[12];
		for(i = 0; i < 12; i++)
			scanf("%d", &massiv[i]);
		for(int i = 0; i < 4; i++)
			shift_right(massiv, 12);
		for(int i = 0; i < 12; i++)
			printf("%d ", massiv[i]);
		printf("\n");
	return 0;
}


