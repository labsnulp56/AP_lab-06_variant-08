#include "Header.h"
#include <stdio.h>

extern kst_students;

void enter(stud * arr)
{
	for (int i = 0; i < kst_students; i++)
	{
		printf("%s", "Ім'я ");
		gets(arr[i].name);
		printf("%s", "Бал із математкии ");
		scanf("%d", &arr[i].math);
		printf("%s", "Бал із англійської ");
		scanf("%d", &arr[i].eng);
		arr[i].average_score = (arr[i].math + arr[i].eng) / 2;
		getchar();
	}
}