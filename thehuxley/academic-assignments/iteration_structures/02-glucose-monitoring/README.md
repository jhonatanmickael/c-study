# Glucose Monitoring

## Description
Genival is concerned about diabetes and was advised by his doctor to measure his glucose levels throughout the day. This program receives multiple glucose readings until a value of **0** is entered, then calculates the average glucose level for that day.

## Classification Criteria
* **Glicose Normal**: Average is less than 110.
* **Glicose Muito Alta**: Average is 200 or more.
* **Glicose Alterada**: All other cases (between 110 and 199).

## Input Format
Consists of several integers representing glucose readings, ending when **0** is informed.

## Output Format
A single line containing one of the following messages based on the calculated average:
* **Glicose Normal**
* **Glicose Alterada**
* **Glicose Muito Alta**

## Examples

| Input | Output |
| :--- | :--- |
| 100 <br> 95 <br> 112 <br> 87 <br> 102 <br> 0 | Glicose Normal |
| 250 <br> 200 <br> 300 <br> 0 | Glicose Muito Alta |
| 110 <br> 150 <br> 0 | Glicose Alterada |

---

### Challenge Information
**Source:** TheHuxley
**Difficulty Level:** 1
**Topics:** Iteration, While Loops, Conditionals, Arithmetic Mean
