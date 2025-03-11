// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.


double calculate_arithmetical_mean_of_nonsero_elements(int* array, int size) {
	int cnt = 0;
	double avg=0;
	for (int i = 0; i < size; ++i)
	{
		if (array[i] != 0) {
			++cnt;
			avg += array[i];
		}
	
		avg /= cnt;
	}
	return avg;
}