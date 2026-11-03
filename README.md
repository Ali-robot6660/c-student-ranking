# C Student Ranking

A console program in C that stores students' data, calculates each student's GPA
from three subjects and ranks the students from best to worst.

## Features

- Enter students yourself (`I`) or use built-in sample data (`C`)
- Each student has a name, age, gender and grades in Korean, English and Math
- GPA = average of the three grades
- Rank is calculated by GPA, then the list is sorted by rank

Uses nested structures (`struct Students` contains `struct Grades`) and passes arrays of structures to functions.

## Project structure

```
c-student-ranking/
├── main.c                  # input and output
├── RangFunction.c / .h     # structures, GPA, ranking and sorting
└── CMakeLists.txt
```

## Build and run

With CMake:

```bash
cmake -S . -B build
cmake --build build
./build/RangStudents
```

Or directly with GCC:

```bash
gcc main.c RangFunction.c -o ranking
./ranking
```

## Example (built-in data)

```
How you want to enter information, yourself or computer? (I / C): C

Student Information:
Name: Alice   | Age: 20 | Gender: F | Grades - Korean: 85 | English: 80 | Math: 90 |
Name: Ali     | Age: 27 | Gender: M | Grades - Korean: 90 | English: 85 | Math: 92 |
Name: Charlie | Age: 22 | Gender: M | Grades - Korean: 78 | English: 88 | Math: 84 |
Name: David   | Age: 23 | Gender: M | Grades - Korean: 88 | English: 90 | Math: 86 |
Name: Eva     | Age: 24 | Gender: F | Grades - Korean: 92 | English: 95 | Math: 94 |


Name: Eva     | GPA: 93.67 | Rank: 1 |
Name: Ali     | GPA: 89.00 | Rank: 2 |
Name: David   | GPA: 88.00 | Rank: 3 |
Name: Alice   | GPA: 85.00 | Rank: 4 |
Name: Charlie | GPA: 83.33 | Rank: 5 |
```

## Author

Khujaev Qurbonali — a learning project to practise structures, arrays of structures and sorting in C.
