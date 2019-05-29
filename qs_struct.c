#include "Header.h"

void quick_struct(stud *arr, int count)
{
	qs_struct(arr, 0, count - 1);
}

void qs_struct(stud *arr, int left, int right)
{
	register int i, j;
	double x;
	stud temp;
	i = left; j = right + 1;

	x = arr[(left + right) / 2].average_score;
	do {
		while (((arr + i)->average_score > x) && (i < right)) i++;
		while ((x >(arr + j)->average_score) && (j > left)) j--;
		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++; j--;
		}
	} while (i <= j);
	if (left < j) qs_struct(arr, left, j);
	if (i < right) qs_struct(arr, i, right);
}