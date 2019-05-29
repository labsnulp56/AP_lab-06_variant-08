#include "Header.h"
#include <stdio.h>

int kst_students;

int main(void)
{
	system("chcp 1251");
	stud arr[KST];

	puts("¬вед≥ть к≥льк≥сть студент≥в");
	scanf("%d", &kst_students);
	getchar();
	enter(arr);
	qs_struct(arr, 0, kst_students);
	print(arr);
	success(arr, kst_students);
	system("pause");
	return;
}
