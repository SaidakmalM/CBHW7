/*
 * 7_1.c
 * 
 * Ввести с клавиатуры массив из 5 элементов, найти среднее
 * арифметическое всех элементов массива.
 * 
 */

#include <stdio.h>



int main()
{
	int massiv[5];
	int summa = 0;
		printf("Введите 5 ненулевых чисел : \n");
		for (int i = 0; i < 5; i++)
		{
			scanf("%d", &massiv[i]);
			summa += massiv[i];
		}
		printf("Среднее арифметическое введенных чисел: %.3f", (float) summa / 5);
	return 0;
}
