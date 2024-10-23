// operator precedence
//  1. ()
//  2. ~, ++, --, +, - (unary operators)
//  3. *, /, % (multiplication, division, modulus)
//  4. +, - (addition, subtraction)
//  5. <<, >> (left shift, right shift)
//  6. <, <=, >, >= (relational operators)
//  7. ==, != (equality operators)
//  8. & (bitwise AND)
//  9. ^ (bitwise XOR)
//  10. | (bitwise OR)
//  11. && (logical AND)
//  12. || (logical OR)
//  13. =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |= (assignment operators)
//  14. ?: (conditional operator)
//  15. , (comma operator)
//
//  The precedence of operators determines the order in which operators are evaluated in an expression. Operators with higher precedence are evaluated before operators with lower precedence. For example, in the expression 5 + 3 * 2, the multiplication operator (*) has higher precedence than the addition operator (+), so the expression is evaluated as 5 + (3 * 2) = 11.
//  It is important to understand operator precedence in order to write correct and efficient code. You can use parentheses to override the default precedence and explicitly specify the order of evaluation. For example, in the expression (5 + 3) * 2, the addition operator (+) is evaluated first because of the parentheses, resulting in 8 * 2 = 16.
//  In C++, operators can be classified into different categories based on their precedence. The following table lists the categories of operators in order of decreasing precedence:
//  Category	Operators
//  1.	()	Grouping
//  2.	~ ++ -- + -	Unary operators
//  3.	* / %	Multiplication, division, modulus
//  4.	+ -	Addition, subtraction
//  5.	<< >>	Left shift, right shift
//  6.	< <= > >=	Relational operators
//  7.	== !=	Equality operators
//  8.	&	Bitwise AND
//  9.	^	Bitwise XOR
//  10.	|	Bitwise OR
//  11.	&&	Logical AND
//  12.	||	Logical OR
//  13.	= += -= *= /= %= <<= >>= &= ^= |=	Assignment operators
//  14.	?:	Conditional operator
//  15.	,	Comma operator
