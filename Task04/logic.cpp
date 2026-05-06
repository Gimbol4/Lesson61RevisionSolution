// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.
#include "logic.h"

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	if (size <= 0) {
		return 0.0;
	}
	
	int min = 0, max = 0;
	int summ = 0, int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (min > array[i]) {
			min = array[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (max < array[i]) {
			max = array[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (array[i] != min && array[i] != max) {
			summ += array[i];
			count++;
		}
	}
	return summ / count;
}