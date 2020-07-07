# Polynominal-sum-and-assign-
Define a structure called polynomial with following properties: 
- term_count stores number of terms the polynomial has. A polynomial can store a maximum of 10 terms.  
- coefficients is an array of real values and stores each term’s coefficient value.  
- exponents is an array of integer values and stores each term’s exponent value.  
- coefficients and exponents are parallel arrays, i.e. coefficients[i] ∙ xexponents[i].  
Write a function that sums two polynomials. 
int sum_polynomial(const polynomial_t*p, const polynomial_t*q, polynomial_t*r);  
Write another function that assigns a polynomial to another polynomial. 
void assign_polynomial(polynomial_t*p, const polynomial_t*q);
