# Championship (Cormengo vs. Flaminthians)

## Description
Two teams, Cormengo and Flaminthians, participate in a football championship. Each victory counts as three points, and each draw counts as one point. The team with more points is better ranked. In case of a tie in points, the team with the higher goal difference is better ranked. If both the points and the goal difference are the same, the teams are tied in the championship.

## Input Format
The input is described in a single line containing six integers: **Cv**, **Ce**, **Cs**, **Fv**, **Fe**, and **Fs**. These represent, respectively, Cormengo's victories, draws, and goal difference, followed by Flaminthians' victories, draws, and goal difference.

## Output Format
The program must print a single line:
* **'C'** if Cormengo is better ranked.
* **'F'** if Flaminthians is better ranked.
* **'='** if the two teams are tied.

## Examples

| Input | Output |
| :--- | :--- |
| 10 5 100 5 5 100 | C |
| 2 2 5 2 2 10 | F |
| 3 3 10 3 3 10 | = |
| 5 3 5 1 8 11 | C |

---

### Challenge Information
**Source:** TheHuxley  
**Difficulty Level:** 1  
**Topics:** Decision making
