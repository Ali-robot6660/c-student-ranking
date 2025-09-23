#ifndef RANGFUNCTION_H
#define RANGFUNCTION_H

struct Grades {
	int kor;
	int eng;
	int math;
};

struct Students {
	char name[50];
	int age;
	char gender;
	struct Grades g;
	float gpa;
	int rank;
};

void GPA_user(struct Students s[], int n);

void Rang(struct Students s[], int n);

void Rang_sort(struct Students s[], int n);

#endif