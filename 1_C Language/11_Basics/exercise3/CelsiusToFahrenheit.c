#include <stdio.h>

int main() {
	float CelsiusTemp, FahrenheitTemp;

    	//getting the Celsius temperature from the user
    	printf("Insert the temperature value in °C: ");
    	scanf("%f", &CelsiusTemp);

		//Calculating the Fahrenheit temperature
		FahrenheitTemp = (CelsiusTemp * 1.8) + 32;

		//Printing the result
		printf("The temperature value in °F is: %f\n", FahrenheitTemp);
}
