/*
 * 7_3.c
 * 
 * Считать массив из 12 элементов 
 * и выполнить циклический сдвиг 
 * ВПРАВО на 4 элемента.
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
	printf("Введите 12 чисел через пробел: \n");
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


