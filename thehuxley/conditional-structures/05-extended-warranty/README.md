# Extended Warranty Calculation - A Favorita

A Favorita store sells home appliances and electronics and offers its customers the option to purchase an extended warranty. This program calculates the total amount to be paid based on the product value and the chosen warranty plan.

## Rules

The total price is calculated according to the selected extended warranty period:

* **Simple Warranty (0 years):** No extra cost. The customer pays only the product value.
* **1-Year Extended Warranty:** An extra fee of **3%** of the product value is added.
* **2-Year Extended Warranty:** An extra fee of **5%** of the product value is added.

## Input Format

1. A real number representing the product value.
2. An integer representing the number of extended warranty years (0, 1, or 2).

## Output Format

* A real value formatted to exactly two decimal places.

## Examples

| Input | Output |
| :--- | :--- |
| 550 <br> 2 | 577.50 |
| 1000 <br> 0 | 1000.00 |
| 200 <br> 1 | 206.00 |

---
