/*
 * 7_1.c
 * 
 * ����� � ���������� ���ᨢ �� 5 ����⮢, ���� �।���
 * ��䬥��᪮� ��� ����⮢ ���ᨢ�.
 * 
 */

#include <stdio.h>



int main()
{
	int massiv[5];
	int summa = 0;
		printf("������ 5 ���㫥��� �ᥫ : \n");
		for (int i = 0; i < 5; i++)
		{
			scanf("%d", &massiv[i]);
			summa += massiv[i];
		}
		printf("�।��� ��䬥��᪮� ��������� �ᥫ: %.3f", (float) summa / 5);
	return 0;
}
