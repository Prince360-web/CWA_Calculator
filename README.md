# CWA Calculator

This C program calculates the Cumulative Weighted Average (CWA) for a student based on their course scores and credits.

## Features

- Calculates the Weighted Average for the current semester
- Computes the Cumulative Weighted Average (CWA) across multiple semesters
- Handles variable number of courses and credits
- User-friendly command-line interface

## How to Use

1. Compile the program:
   ```
   gcc -o cwa_calculator main.c -lm
   ```

2. Run the executable:
   ```
   ./cwa_calculator
   ```

3. Follow the prompts to enter your academic information:
   - Number of completed semesters
   - Number of courses in the recent semester
   - For each course:
     - Score
     - Number of credits
   - Previous CWA (if not the first semester)

4. The program will display:
   - Total weighted marks
   - Total credits offered
   - Weighted Average for the current semester
   - Updated CWA

## Input Requirements

- All numerical inputs should be floating-point numbers
- Course scores are typically on a scale of 0-100
- Credits are usually whole numbers, but the program accepts fractional credits if needed

## Calculations

- Weighted Score for a course = Course Score * Course Credits
- Weighted Average = Sum of Weighted Scores / Total Credits
- CWA = Previous CWA + ((Current Weighted Average - Previous CWA) / Total Semesters)

## Note

This program assumes that the CWA calculation follows a specific formula. Please verify that this formula matches your institution's method for calculating CWA.

## Dependencies

- Standard C libraries: stdio.h, stdlib.h, ctype.h, string.h, math.h

## Compilation

Compile the program using a C compiler such as GCC. Make sure to link the math library:

```
gcc -o cwa_calculator main.c -lm
```

