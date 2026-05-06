// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.
#include "logic.h"

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	if (size <= 2) {
		return 0.0;
	}

	int min = array[0], max = array[0];
	double summ = 0;
	double count = 0;

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

	for (int i = 0; i < size; ++i) {
		if (array[i] != min && array[i] != max) {
			summ += array[i];
			count++;
		}
	}

	return count != 0 ? summ / count : 0.0;
}