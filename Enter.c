#include "Header.h"
#include <stdio.h>

extern kst_students;

void enter(stud * arr)
{
	for (int i = 0; i < kst_students; i++)
	{
		printf("%s", "��'� ");
		gets(arr[i].name);
		printf("%s", "��� �� ���������� ");
		scanf("%d", &arr[i].math);
		printf("%s", "��� �� ��������� ");
		scanf("%d", &arr[i].eng);
		arr[i].average_score = (arr[i].math + arr[i].eng) / 2;
		getchar();
	}
}