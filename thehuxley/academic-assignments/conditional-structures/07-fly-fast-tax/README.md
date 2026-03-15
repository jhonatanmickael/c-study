# Fly Fast Baggage Tax (Taxa de Bagagem)

The airline Fly Fast has strict rules regarding passenger baggage. This program calculates the tax based on the weight of the luggage or informs if the weight exceeds the allowed limit.

---

## Challenge Description

The weight limits and tax rules are as follows:

| Weight (Peso) | Rule (Regra) |
| :--- | :--- |
| Up to 20 kg | No fee is charged. |
| Between 21 kg and 25 kg | Fee of R$ 12.50 per exceeding kg. |
| Between 26 kg and 30 kg | Fee of R$ 32.75 per exceeding kg. |
| Above 30 kg | Weight not allowed by the company. |

---

## Input Format

* A single real value (double/float) representing the baggage weight.

## Output Format

* A real value with two decimal places representing the tax.
* OR the message `PESO LIMITE EXCEDIDO` (Baggage limit exceeded) in uppercase if the weight is above 30 kg.

---

## Examples

| Input (Entrada) | Output (Saída) |
| :--- | :--- |
| 20.0 | 0.00 |
| 25.0 | 62.50 |
| 27.0 | 229.25 |
| 31.0 | PESO LIMITE EXCEDIDO |

---

