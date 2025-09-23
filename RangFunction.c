#include "RangFunction.h"


void GPA_user(struct Students s[], int n) {
	for (int i = 0; i < n; i++) {             // Панпокмун - Цикл
		s[i].gpa = (s[i].g.kor + s[i].g.eng + s[i].g.math) / 3.0;
	}     

}


void Rang(struct Students s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		s[i].rank = 1; // Initialize rank
		for(j = 0; j < n; j++) {
			if (s[i].gpa < s[j].gpa) {
				s[i].rank++;
			}
		}
	}
}



void Rang_sort(struct Students s[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (s[j].rank > s[j + 1].rank) {
				// Swap the entire student structure
				struct Students temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

