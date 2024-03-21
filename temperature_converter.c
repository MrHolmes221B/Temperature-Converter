#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
