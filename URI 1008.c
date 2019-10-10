#include <stdio.h>
 
int main() {
 
    float recebe, sal;
	int hrs, nf;
	scanf("%d", &nf);
	scanf("%d", &hrs);
	scanf("%f", &recebe);
	sal = hrs * recebe;
	printf("NUMBER = %d\n", nf);
	printf("SALARY = U$ %.2f\n", sal);
 
    return 0;
}