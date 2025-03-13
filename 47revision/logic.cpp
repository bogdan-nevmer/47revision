// Сумма элементов [The sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"

int absolut(int number) {

	return number < 0 ? -number : number;

}


int get_first_max_index(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (absolut(array[i])>absolut(array[index])) {
			index = i;

		}
	}

	return index;
}


int get_first_min_index(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (absolut(array[i]) < absolut(array[index])) {
			index = i;

		}
	}

	return index;
}



int sum_between_first_min_max(int* array, int size){
	
	int imax = get_first_max_index(array, size);
	int imin = get_first_min_index(array, size);

	if (imin>imax) {
		int t = imin;
		imin = imax;
		imax = t;
	}

	int sum = 0;

	for (int i = imin+1; i < imax; i++)
	{
		sum += array[i];
	}

	return sum;
}