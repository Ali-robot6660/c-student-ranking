#include <stdio.h>
#include <ctype.h>    // For toupper
#include <string.h>   // For strcpy
#include "RangFunction.h" 

/*
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
};
*/




int main() {
	int n;
	char V;
	printf("How you want to enter information, yourself or computer? (I / C): "); //»п–Єг	
	scanf(" %c", &V);
	V = toupper(V);
	struct Students s[100];           // Array to hold up to 100 students			ѕеЄл
	if (V == 'I') {												// User Input      „огон 
		printf("How many students do you want to enter? ");
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("Enter name: ");
			scanf("%s", s[i].name);
			printf("Enter age: ");
			scanf("%d", &s[i].age);
			printf("Enter Gender (M / F): ");
			scanf(" %c", &s[i].gender);
			printf("Enter grades (Korean, English, Math): ");
			scanf("%d %d %d", &s[i].g.kor, &s[i].g.eng, &s[i].g.math);
		}
	}
	else if (V == 'C') {										// Computer Input
		n = 5;
		char names[5][50] = { "Alice", "Ali", "Charlie", "David", "Eva" };  //ѕеЄл
		int ages[5] = { 20, 27, 22, 23, 24 };
		char genders[5] = { 'F', 'M', 'M', 'M', 'F' };
		int kor_grades[5] = { 85, 90, 78, 88, 92 };
		int eng_grades[5] = { 80, 85, 88, 90, 95 };
		int math_grades[5] = { 90, 92, 84, 86, 94 };
		for (int i = 0; i < n; i++) {                   //„очан all info students  
			strcpy(s[i].name, names[i]);
			s[i].age = ages[i];
			s[i].gender = genders[i];
			s[i].g.kor = kor_grades[i];
			s[i].g.eng = eng_grades[i];
			s[i].g.math = math_grades[i];
		}
	}else {
		printf("Invalid input. Please enter 'I' or 'C'.\n");
		return 1;
	}



	

	printf("\nStudent Information:\n");				
		for (int i = 0; i < n; i++) {                       // ѕанѕокћун - ÷икл | Print all info students
			printf("Name: %-7s | Age: %d | Gender: %c | Grades - Korean: %d | English: %d | Math: %d |\n",
				s[i].name, s[i].age, s[i].gender, s[i].g.kor, s[i].g.eng, s[i].g.math); // „урЄг
		}
		printf("\n\n");

		GPA_user(s, n);	                                    // ’амсу Calculate GPA for students
		Rang(s, n);											// Calculate Rank for students
		Rang_sort(s, n);									// Sort by Rank 
		for (int i = 0; i < n; i++) {                       // Print all info students
			printf("Name: %-7s | GPA: %.2f | Rank: %d |\n",
				s[i].name, s[i].gpa, s[i].rank);
		}

	return 0;
}