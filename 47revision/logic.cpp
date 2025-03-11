// Сумма элементов [The sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"



int sum_between_first_min_max(int* array, int size){
	int max = array[0];
	int first_max_index = -1;
	int min = array[0];
	int first_min_index = -1;


	
	


	
	for (int i = 0; i < size; i++)
	{
		if (first_max_index == -1 || array[i] > max) {
			first_max_index = i;
		}
	}


	for (int i = 0; i < size; i++)
	{
		if (first_min_index == -1 || array[i] < min) {
			first_min_index = i;

		}
	}

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}