#include <stdio.h>

// Length: Kilometers to Miles
void lengthConverter() {
    float km;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    printf("%.2f km = %.2f miles\n", km, km * 0.621371);
}

// Weight: Kilograms to Pounds
void weightConverter() {
    float kg;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    printf("%.2f kg = %.2f pounds\n", kg, kg * 2.20462);
}

// Temperature: Celsius to Fahrenheit
void temperatureConverter() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("%.2f°C = %.2f°F\n", c, (c * 9 / 5) + 32);
}

// Time: Hours to Minutes and Seconds
void timeConverter() {
    int hours;
    printf("Enter time in hours: ");
    scanf("%d", &hours);
    printf("%d hours = %d minutes = %d seconds\n", hours, hours * 60, hours * 3600);
}

int main() {
    int choice;

    printf("==== Unit Converter ====\n");
    printf("1. Length (km to miles)\n");
    printf("2. Weight (kg to pounds)\n");
    printf("3. Temperature (Celsius to Fahrenheit)\n");
    printf("4. Time (hours to minutes & seconds)\n");
    printf("Choose an option (1–4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: lengthConverter();
         break;
        case 2: weightConverter();
         break;
        case 3: temperatureConverter();
         break;
        case 4: timeConverter();
         break;
        default: printf("Invalid choice.\n");
    }

    return 0;
}
