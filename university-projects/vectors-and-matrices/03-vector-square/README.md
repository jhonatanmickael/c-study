# Exercise 03 - Component Squaring

This exercise consists of developing a program in C that reads a sequence of real numbers from the standard input, stores them inside a one-dimensional array, computes the square of each individual component, and records the results into a secondary array.

## Problem Statement

Create a program that reads a set of 10 real numbers and stores them inside a vector. The program must calculate the square of each component of this vector, storing each processed result into a separate, second vector. After completion, the program must print all components of both generated sets on the screen.

## Compilation and Execution

Since this program utilizes the `<math.h>` library for power calculations, you must explicitly link the math library using the `-lm` flag during compilation.

To compile the program, run the following command in your terminal:

```bash
gcc q03.c -o main -lm

## Input and Output Examples

**Example 1:**
- Input: 1.0 2.0 3.5 4.0 5.0 -2.0 0.0 1.5 10.0 0.5
- Output:
  Original vector:
  1.00 2.00 3.50 4.00 5.00 -2.00 0.00 1.50 10.00 0.50
  Squared vector:
  1.00 4.00 12.25 16.00 25.00 4.00 0.00 2.25 100.00 0.25

---
UFAL - Programação 1
