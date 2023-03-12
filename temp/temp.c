#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	if (argc != 2) {
		printf("Wrong number of parameters supplied. \n");
		exit(1);
	}

	float temp_input;
	float temp_output;
	char param_f[] = "-f";
	char param_c[] = "-c";

	if (!strcmp(argv[1], param_f)) {
		printf("Temperature in Fahrenheit: \n");
		scanf("%f", &temp_input);
		temp_output = (temp_input - 32) * 5 / 9;
		printf("Temperature in Celcius: %.2f\n", temp_output);


	}
	else if (!strcmp(argv[1], param_c)) {
		printf("Temperature in Celcius: \n");
		scanf("%f", &temp_input);
		temp_output = (temp_input * 9 / 5) + 32;
		printf("Temperature in Fahrenheit: %.2f\n", temp_output);
		
	}
	else {
		printf("Argument not recognized. Please supply -f for inputs in Fahrenheit or -c for inputs in Celcius.\n");		
	}
	
	return 0;
}