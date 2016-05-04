#include <stdio.h>

double fatorial(double);

double fatorial(double a){
	double x;
	double cont;

	cont = a;
	x = 1;

	while(cont > 0){
	x = x * cont;	
	cont = cont - 1;
	}

	return x;
}


int main() {

	double n;
	double f;
	
	printf("Informe o número: \n");
	scanf("%lf", &n);


	f = fatorial(n);


	printf("F=%lf \n", f);

return 0;
}
