// Task 05 [The sum of elements between first extreme elements]
// Сумма элементов между первыми экстримальными элементами  
// 
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет сумму элементов вектора, расположенных
// между первыми максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"
#include <cmath>

int sum_between_first_min_max(int* array, int size) {
    if (size <= 2) return 0;

    int first_max_abs_idx = 0;
    int first_min_abs_idx = 0;

    for (int i = 1; i < size; ++i) {
        if (abs(array[i]) > abs(array[first_max_abs_idx])) {
            first_max_abs_idx = i;
        }
        if (abs(array[i]) < abs(array[first_min_abs_idx])) {
            first_min_abs_idx = i;
        }
    }
    int start_idx = (first_max_abs_idx < first_min_abs_idx) ? first_max_abs_idx : first_min_abs_idx;
    int end_idx = (first_max_abs_idx < first_min_abs_idx) ? first_min_abs_idx : first_max_abs_idx;

    long long sum = 0;
    for (int i = start_idx + 1; i < end_idx; ++i) {
        sum += array[i];
    }

    return sum;
}