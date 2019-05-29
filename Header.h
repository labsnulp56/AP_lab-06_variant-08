#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define KST 25

typedef struct student {
	char name[20];
	int math;
	int eng;
	double average_score;
}stud;

void enter(stud * arr);
void print(stud * arr);
void qs_struct(stud *arr, int left, int right);
void quick_struct(stud *arr, int count);
void success(stud *arr);

