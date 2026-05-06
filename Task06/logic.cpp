// Task 06 [The sorting from the specified range]
// Сортировка из указанного промежутка
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая сортирует часть элементов заданного вектора
// в указанном диапазоне порядковых номеров либо по возрастанию, 
// либо по убыванию.
#include "logic.h"

void sort_in_range(int* array, int size, int start, int end, bool type) {
	if (size <= 0) {
		return;
	}
	if (start < 0 || start >= size || end < 0 || end >= size) {
		return;
	}
	if (start > end) {
		int temp = start;
		start = end;
		end = temp;
	}

	for (int i = 0; i < (end - start); i++) {
		for (int j = start; j < end - i; j++) {
			bool need_swap = false;
			if (type) {
				if (array[j] > array[j + 1]) need_swap = true;
			}
			else {
				if (array[j] < array[j + 1]) need_swap = true;
			}

			if (need_swap) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
