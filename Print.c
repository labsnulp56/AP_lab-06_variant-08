#include "Header.h"
#include <stdio.h>

extern kst_students;

void print(stud * arr)
{
	for (int i = 0; i < kst_students; i++)
	{
		printf("%s %d %d %lf\n", arr[i].name, arr[i].math, arr[i].eng, arr[i].average_score);
	}
}