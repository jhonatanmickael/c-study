# Root Calculation (Bhaskara's Formula)

## Problem Description
The goal of this exercise is to implement a procedure that calculates the roots of a quadratic equation.

The program must be structured to use a procedure that receives the equation coefficients as parameters and returns the resulting roots also via parameters (pass-by-reference), provided it is possible to perform the calculation within the set of real numbers.

---

## Input Format
* The program should receive three real values representing the coefficients $a$, $b$, and $c$ of the quadratic equation ($ax^2 + bx + c = 0$).

## Output Format
* The program should display the obtained values for roots $x_1$ and $x_2$.
* If it is not possible to calculate real roots (e.g., when delta is negative or $a$ equals zero), the program should inform that the calculation cannot be performed.

---

## Execution Examples

**Example 1:**
```text
Input:
1.0 -5.0 6.0
Output:
x1 = 3.00
x2 = 2.00
