#include <stdio.h>

int main() {
	float CelsiusTemp, FahrenheitTemp;

    	//getting the Celsius temperature from the user
    	printf("Insert the temperature value in °F: ");
    	scanf("%f", &FahrenheitTemp);

		//Calculating the Fahrenheit temperature
		CelsiusTemp = (FahrenheitTemp - 32) / 1.8;

		//Printing the result
		printf("The temperature value in °C is: %f\n", CelsiusTemp);
}
