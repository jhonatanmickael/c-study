# Exercise 16 - City Census Statistics

This exercise consists of developing a procedure in C to process census data collected from an indeterminate number of citizens, applying concepts of loops with sentinel values and returning multiple statistical values using pass-by-reference.

## Problem Statement

Create a procedure that reads the salary and number of children for an indeterminate number of people. The data input stops when a sentinel value condition is met (e.g., a negative salary is entered). 

The procedure must calculate and return, via parameters (pointers), the following metrics:
- The average salary of the population.
- The average number of children.
- The highest salary found.
- The percentage of people with a salary up to R$ 350.00.

## Input and Output Examples

**Example 1:**
- Input: 
  1000.00 2
  500.00 3
  300.00 1
  200.00 0
  -1 0
- Output: 500.00 1.50 1000.00 50.00

**Example 2:**
- Input: 
  350.00 1
  350.00 2
  -1 0
- Output: 350.00 1.50 350.00 100.00

---
UFAL - Programação 1
