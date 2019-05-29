#include "Header.h"
extern kst_students;

void success(stud *arr)
{
	int x_stud = 0, rezult = 0, t = 0, all_stud = kst_students;
	for (t = 0; t < kst_students; ++t)
		if ((arr + t)->average_score > 0 && (arr + t)->average_score > 71)
			x_stud++;
	rezult = ((x_stud * 100) / all_stud);
	puts("---------------------------------------------------------------------------");
	printf("Відсоток студентів, рейтинговий бал яких не меше 71 = %d\%% \n", rezult);
}