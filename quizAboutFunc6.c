#include<stdio.h>
void store() {
	float values[20], min, sum;
	int i;
	for(i=0; i<4; i++) {
		printf("Enter float %d: ", i+1);
		scanf("%f", &values[i]);
	}
	min = values[0];
	for(i=0; i<4; i++) {
		if(values[i] < min) {
			min = values[i];
		}
		sum += values[i];
	}
}
int main() {
	store();
	return 0;
}
