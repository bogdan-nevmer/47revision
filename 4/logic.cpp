// Количество локальных минимумов и максимумов
// [The Number of local minima and maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"
#include <cmath>

void count_local_min_and_max(int* array, int size, int* min_count, int* max_count) {
	*min_count = 0;
	*max_count = 0;

	for (int i = 1; i < size;++i)
	{
		if (array[i] < array[i - 1] && array[1] < array[i + 1]) {
			min_count++;
		}

	}
	for (int i = 1; i < size; i++)
	{
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			max_count++;
		}
		
	}
}