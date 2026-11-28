# CodeAlpha CGPA Calculator

A console-based CGPA Calculator developed using C++ as part of the CodeAlpha internship program.

## Project Structure

```text
CodeAlpha_CGPA_Calculator/
├── include/
│   ├── Course.h
│   ├── GradeConverter.h
│   └── CGPACalculator.h
├── src/
│   ├── Course.cpp
│   ├── GradeConverter.cpp
│   ├── CGPACalculator.cpp
│   └── main.cpp
├── tests/
│   ├── test_grade.cpp
│   └── test_cgpa.cpp
├── .gitignore
└── README.md
```

## Features

### Course Class
- Stores course name, credit hours, letter grade, and grade point.
- Provides course information through getter methods.
- Displays individual course details.

### GradeConverter Class
Supports three grade input methods:

1. Letter grade to grade point.
2. Percentage to letter grade.
3. Percentage to grade point.

Also validates directly entered grade points.

### CGPACalculator Class
- Adds and stores multiple courses.
- Calculates the total number of courses.
- Calculates total credit hours.
- Calculates CGPA using the weighted average of course grade points.
- Displays course details and CGPA calculation results.
- Handles the case where no courses have been added.

### Console Application
- Accepts multiple courses from the user.
- Supports both letter-grade and percentage-based input.
- Validates course names, credit hours, grade choices, letter grades, and percentages.
- Displays course details and calculates the final CGPA.

## Grading System

| Letter Grade | Percentage | Grade Point |
|---|---:|---:|
| A+ | 90–100 | 4.00 |
| A | 85–89 | 3.75 |
| B+ | 80–84 | 3.50 |
| B | 75–79 | 3.25 |
| C+ | 70–74 | 3.00 |
| C | 65–69 | 2.75 |
| D+ | 60–64 | 2.50 |
| D | 50–59 | 2.25 |
| F | 0–49 | 0.00 |

## CGPA Formula

CGPA is calculated using the weighted average of course grade points:

\[
CGPA = \frac{\sum (CreditHours \times GradePoint)}{\sum CreditHours}
\]

## Technologies
- C++
- GCC Compiler
- Git and GitHub
- Visual Studio Code


## Compilation and Execution

Compile the application from the project root directory:

```bash
g++ -std=c++17 -Wall -Wextra -Iinclude src/main.cpp src/Course.cpp src/GradeConverter.cpp src/CGPACalculator.cpp -o CGPA_Calculator.exe
```

Run the application in Windows PowerShell:

```powershell
.\CGPA_Calculator.exe
```


## Testing

The `tests/` directory contains tests for the `GradeConverter` and `CGPACalculator` classes.

### GradeConverter Tests

Compile and run from the project root:

```bash
g++ -std=c++17 -Wall -Wextra -Iinclude tests/test_grade.cpp src/GradeConverter.cpp -o test_grade.exe
./test_grade.exe
```

### CGPACalculator Tests

Compile and run from the project root:

```bash
g++ -std=c++17 -Wall -Wextra -Iinclude tests/test_cgpa.cpp src/CGPACalculator.cpp src/Course.cpp -o test_cgpa.exe
./test_cgpa.exe
```

## Project Status

- [x] Project structure
- [x] Course class
- [x] GradeConverter class
- [x] Grade conversion tests
- [x] CGPACalculator class
- [x] CGPA calculation
- [x] CGPA calculation tests
- [x] User input handling
- [x] Final application testing
