/*
Add round brackets to the following C++ expressions to show the order in which the operators will be evaluated:
(i) 80/5+70/6 (ii) -5+-4--3
(iii) 6*7/8*9 (iv) 1-2+3/4*5
(v) -1+23/-4+56
*/

/*
(i) 80 / 5 + 70 / 6
Division (/) has higher precedence than addition (+).
(80 / 5) + (70 / 6)
(ii) -5 + -4 - -3
Unary minus (-) and addition/subtraction have different precedence levels. Unary minus is evaluated right to left whereas addition/subtraction is evaluated left to right.
((-5) + (-4)) - (-3)
(iii) 6 * 7 / 8 * 9
Multiplication (*) and division (/) have the same precedence and are evaluated from left to right.
((6 * 7) / 8) * 9
(iv) 1 - 2 + 3 / 4 * 5
Multiplication (*) and division (/) have higher precedence than addition (+) and subtraction (-). Multiplication and Division are evaluated from left to right. Addition and Subtraction are evaluated from left to right.
(1 - 2) + ((3 / 4) * 5)
(v) -1 + 23 / -4 + 56
Unary minus (-) and division (/) have higher precedence than addition (+). Remember that division is performed left to right.
((-1) + (23 / (-4))) + 56
*/