// Task 02 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее арифметическое ненулевых 
// элементов вектора.

double calculate_arithmetical_mean_of_nonzero_elements(int* array, int size) {
	if (size <= 0) {
		return 0.0;
	}
	double summ = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) != 0) {
			summ += *(array + i);
			count++;
		}
	}
	
	return count != 0 ? summ / count : 0;
}