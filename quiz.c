#include<stdio.h>
#include<math.h> //I used this to include the necessary library for pow()

void power() {
	int base, exponent;
	printf("Base : ");
	scanf("%d", &base);
	printf("Exponent: ");
	scanf("%d", &exponent);
	int result = pow(base, exponent);
	printf("%d power %d is %d ", base, exponent, result);
}
void store() {
	float values[3], difference, greatest, smallest;
	int i;
	for(i=0; i<3; i++) {
		printf("Enter float %d: ", i+1);
		scanf("%f", &values[i]);
	}
greatest = values[0];
smallest = values[0];
for(i=0; i<3; i++) {
	if(values[i] < smallest) {
		smallest= values[i];
	}
	if (values[i] > greatest) {
		greatest = values[i];
	}
}
difference = greatest - smallest;
printf("The difference is %f", difference );
}
int main () {
	store();
	printf("\n\n");
	power();
	return 0;
}
