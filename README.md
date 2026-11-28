# CodeAlpha CGPA Calculator

A console-based CGPA Calculator developed using C++ as part of the CodeAlpha internship program.

## Project Structure

```text
CodeAlpha_CGPA_Calculator/
├── include/
│   ├── Course.h
│   └── GradeConverter.h
├── src/
│   ├── Course.cpp
│   ├── GradeConverter.cpp
│   └── main.cpp
├── tests/
│   └── test_grade.cpp
├── .gitignore
└── README.md
```

## Features

### Course Class
- Stores course name, credit hours, letter grade, and grade point.
- Provides course information.

### GradeConverter Class
Supports three grade input methods:

1. Letter grade to grade point.
2. Percentage to letter grade.
3. Percentage to grade point.

Also validates directly entered grade points.

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

## Testing

The `tests/` directory contains tests for the GradeConverter class.

Compile and run the tests from the project root:

```bash
g++ -std=c++17 -Iinclude tests/test_grade.cpp src/GradeConverter.cpp -o test_grade.exe
./test_grade.exe
```

## Project Status

- [x] Project structure
- [x] Course class
- [x] GradeConverter class
- [x] Grade conversion tests
- [ ] CGPA calculation
- [ ] User input handling
- [ ] Final application testing