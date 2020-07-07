#include<stdio.h>
#include<string.h>
#include<conio.h>

///Define a structure called polynomial with following properties: 
//-term_count stores number of terms the polynomial has. A polynomial can store a maximum of 10 terms. 
//-coefficients is an array of real values and stores each term’s coefficient value. 
//-exponents is an array of integer values and stores each term’s exponent value. 
//-coefficients and exponents are parallel arrays, i.e. coefficients[i] • xexponents[i]. 
//Write a function that scans a polynomial from user. 
//Write a function that print a polynomial on console. 
//Test your code in a program. 
//Scan a polynomial from user and display it on console. 
//Write a function that sums two polynomials. 
//Write another function that assigns a polynomial to another polynomial. 

struct polynominal{
	
	int coefficient[10];
	int exponents[10];
	char term_count[10];
	
};
void assign(struct polynominal pp2,int size){
	
	int i;
	printf("\nEnter terms of polynominal:(for exit press '.')");
	
	for(i=0;i<size;i++){
	    scanf(" %c",&pp2.term_count[i]);
		if(isalpha(pp2.term_count[i])==0){
			break;
		}
	}
	printf("\nEnter coefficients of new polynominal:");
	for(i=0;i<size;i++){
		scanf("%d",&pp2.coefficient[i]);
	}
	printf("\nEnter exponents of new polynominal:");
	for(i=0;i<size;i++){
		scanf("%d",&pp2.exponents[i]);
	}
	
	printf("\nNew polynominal:\n");
	int j;
	for(j=0;j<size;j++){
		printf("%d(%c)",pp2.coefficient[j],pp2.term_count[j]);
		if(pp2.exponents[j]!=0){
				printf("^%d",pp2.exponents[j]);
		}
	
		if(j<size-1){
			printf("+ ");
		}
	}
	printf("= %d",0);
	
	
}
void sum_polynomial(struct polynominal pol,struct polynominal pp){
	
	int i,size1=0;
    printf("\nEnter terms of polynominal:(for exit press '.')");
	
	for(i=0;;i++){
	    scanf(" %c",&pol.term_count[i]);
		if(isalpha(pol.term_count[i])==0){
			break;
        }
        size1++;
	}
	printf("\nEnter coefficients of polynominal:");
	
	for(i=0;i<size1;i++){
		scanf("%d",&pol.coefficient[i]);	
	}
	
	printf("\nEnter exponents of polynominal:");
	
	for(i=0;i<size1;i++){
		scanf("%d",&pol.exponents[i]);
	}
	printf("\n");
	
    int j;
    for(j=0;j<size1;j++){
    	if(pol.exponents[j]==pp.exponents[j] && pol.term_count[j]==pp.term_count[j]){
    		int coef=pol.coefficient[j]+pp.coefficient[j];
    		printf("%d(%c)^%d  ",coef,pol.term_count[j],pol.exponents[j]);
		}
		else {
			printf("%d(%c)^%d + ",pol.coefficient[j],pol.term_count[j],pol.exponents[j]);
			printf("%d(%c)^%d  ",pp.coefficient[j],pp.term_count[j],pp.exponents[j]);
		}
		if(j<size1-1){
			printf(" + ");
		}
	}
		printf("= %d",0);
	
	
}

int main(){
	
	struct polynominal p;
	struct polynominal p2;
    int i,count=0;
    printf("Enter terms of polynominal:(for exit press '.')");
	
	for(i=0;;i++){
	    scanf(" %c",&p.term_count[i]);
		if(isalpha(p.term_count[i])==0){
			break;
		}
		count++;
	}
	printf("\nEnter coefficients of polynominal:");
	
	for(i=0;i<count;i++){
		scanf("%d",&p.coefficient[i]);	
	}
	
	printf("\nEnter exponents of polynominal:");
	
	for(i=0;i<count;i++){
		scanf("%d",&p.exponents[i]);
	}
	printf("\n");
	int j;
	for(j=0;j<count;j++){
		printf("%d(%c)",p.coefficient[j],p.term_count[j]);
		if(p.exponents[j]!=0){
				printf("^%d",p.exponents[j]);
		}
	
		if(j<count-1){
			printf("+ ");
		}
	}
	printf("= %d",0);

    sum_polynomial(p2,p);
    assign(p,count);

	return 0;
}
