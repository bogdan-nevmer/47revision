// Количество локальных минимумов и максимумов
// [The Number of local minima and maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"
#include <cmath>




int count_colac_min(int* array, int size) {
	int count = 0;

	if (size > 1 && array[0] < array[1]) {
		count++;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i]<array[i-1]&&array[i]<array[i+1]) {
			count++;
		}
	}

	if (size > 1 && array[size-1] < array[size-2]) {
		count++;
	}

	return count;
}


int count_colac_max(int* array, int size) {

	int count = 0;

	if (size > 1 && array[0] > array[1]) {
		count++;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			count++;
		}
	}

	if (size > 1 && array[size - 1] > array[size - 2]) {
		count++;
	}
	return count;
}



void count_local_min_and_max(int* array, int size, int* min_count, int* max_count) {
	*min_count = count_colac_min;
	*max_count = count_colac_max;

	return *max_count, *min_count;
}