/*
 * 7_2.c
 * 
 * ����� � ���������� ���ᨢ �� 5 ����⮢, 
 * ���� ��������� �� ���
 * 
 */

#include <stdio.h>

int main()
{
	int massiv[5];
	int minimum = 32767;
		printf("������ 5 楫�� �ᥫ : \n");
		for (int i = 0; i < 5; i++)
		{
			scanf("%d", &massiv[i]);
			if (massiv[i] < minimum)
				minimum = massiv[i];
		}
		printf("�������쭮� �� ��������� �ᥫ: %d", minimum);
	return 0;
}
