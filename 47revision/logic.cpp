// Сумма элементов [The sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"



int sum_between_first_min_max(int* array, int size){
	int max = array[0];
	int max_index = -1;
	int min = array[0];
	int min_index = -1;


	
	


	
	for (int i = 0; i < size; i++)
	{
		if (abs(array[i]) > abs(array[index])) {
			max = array[i];
			max_index = i;
		}
	}


	for (int i = 0; i < size; i++)
	{
		if (abs(array[i]) < abs(array[index])) {
			min = array[i];
			min_index = i;

		}
	}

	if (min_index > max_index) {
		int t = min_index;
		min_index = max_index;
		max_index = 0;
	}

	int sum = 0;
	for (int i = min_index; i < max_index; i++)
	{
		sum += array[i];
	}
	return sum;
}