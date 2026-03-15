# Student Performance - Grades Calculation

This program reads three grades from a student, calculates the arithmetic mean, and determines their academic status based on specific threshold values.

## Rules

The student's status is decided according to the following criteria:

* **Approved:** Mean is **greater than or equal to 7**.
* **Reprobated:** Mean is **less than 3**.
* **Final Exam:** Mean is **between 3 and 7** (3 $\le$ Mean < 7).

## Input Format

* Three real numbers representing the grades, separated by a newline.

## Output Format

* A single message indicating the status: `aprovado`, `reprobado`, or `prova final`.
* The output must end with a newline.

## Examples

| Input | Output |
| :--- | :--- |
| 8.0 <br> 7.0 <br> 9.0 | aprovado |
| 2.0 <br> 2.5 <br> 3.0 | reprovado |
| 5.0 <br> 6.0 <br> 4.0 | prova final |

