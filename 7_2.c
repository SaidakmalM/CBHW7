/*
 * 7_2.c
 * 
 * Ввести с клавиатуры массив из 5 элементов, 
 * найти минимальный из них
 * 
 */

#include <stdio.h>

int main()
{
	int massiv[5];
	int minimum = 32767;
		printf("Введите 5 целых чисел : \n");
		for (int i = 0; i < 5; i++)
		{
			scanf("%d", &massiv[i]);
			if (massiv[i] < minimum)
				minimum = massiv[i];
		}
		printf("Минимальное из введенных чисел: %d", minimum);
	return 0;
}
