/*
 * 7_4.c
 * 
 * ����� ���ᨢ �� 10 ����⮢ 
 * � �����஢��� ��� �� ��᫥���� ���.
 * 
 * 
 */

#include <stdio.h>

void massiv_sort(int massiv[], int size)
{
	int k,l;
	for(k = 0; k < size; ++k)
	{
		for(l = 0; l < size; ++l)
		{
			if(massiv[k]%10 > massiv[l]%10)
			{
				int x = massiv[k];
					massiv[k] = massiv[l];
					massiv[l] = x;
			}
		}
	}
}

int main()
{
	printf("������ 10 �ᥫ �१ �஡��: \n");
	int i; int massiv[10];
		for(i = 0; i < 10; i++)
			scanf("%d", &massiv[i]);
		
		massiv_sort(massiv, 10);
		
		for(int i = 9; i >= 0; i--)
			printf("%d ", massiv[i]);
		printf("\n");
	return 0;
}


