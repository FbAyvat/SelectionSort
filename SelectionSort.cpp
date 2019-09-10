/*
Regarding Time Complexity in Selection Sort, the best and worst case are the same. No matter what, selection sort has a time complexity of O(N²).
And what about Space Complexity in selection sort, it only requires 1 extra temporary variable. O(1)
*/

#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void swap_index(int* num1, int* num2) {
	int swap_temp = *num1;
	*num1 = *num2;
	*num2 = swap_temp;

}

void print_array(const int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		cout << temp_array[i];
		cout << "\n";
	}
}

void initialize_array(int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		temp_array[i] = (rand() % 100);
	}
}

void selection_sort(int temp_array [], int length_of_array) {

	for (size_t i = 0; i < length_of_array; i++)
	{
		int temp_min = temp_array[i];

		for (size_t j = 0; j < length_of_array; j++)
		{
			if (temp_min < temp_array[j])
			{
				swap_index(&temp_array[i], &temp_array[j]);
			}
		}
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int selection_array[10]{ 0 };
	int length_of_array = sizeof(selection_array) / sizeof(selection_array[0]);

	initialize_array(selection_array, length_of_array);

	print_array(selection_array, length_of_array);

	selection_sort(selection_array, length_of_array);

	print_array(selection_array, length_of_array);

	return 0;
}


