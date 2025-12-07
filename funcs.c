#include <stdio.h>
#include <math.h>
#include "funcs.h"
#define pi 3.1415926535

void convert_frequency(void) {
    int choice;
    double value, result;

    printf("\n[Frequency Conversion]\n");
    printf("1. Hz -> rad/s \n");
    printf("2. rad/s -> Hz \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter frequency in Hz: ");
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input.\n");
            return;
        }
        if (value < 0) {
            printf("Frequency cannot be negative.\n");
            return;
        }
        result = 2.0 * pi * value;
        printf("Result: %.2f Hz = %.2f rad/s\n", value, result);
    }
    else if (choice == 2) {
        printf("Enter frequency in rad/s: ");
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input.\n");
            return;
        }
        if (value < 0) {
            printf("Frequency cannot be negative.\n");
            return;
        }
        result = value / (2.0 * pi);
        printf("Result: %.2f rad/s = %.2f Hz\n", value, result);
    }
    else {
        printf("Invalid choice.\n");
    }
}

void convert_temperature(void) {
    int choice;
    double value, result;

    printf("\n[Temperature Conversion]\n");
    printf("1. Celsius -> Fahrenheit\n");
    printf("2. Fahrenheit -> Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input. Please enter a numeric value.\n");
            return;
        }

        result = (value * 9.0 / 5.0) + 32.0;

        printf("Result: %.2f °C = %.2f °F\n", value, result);
    }
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        if (scanf("%lf", &value) != 1) {
            printf("Invalid input. Please enter a numeric value.\n");
            return;
        }

        result = (value - 32.0) * 5.0 / 9.0;

        printf("Result: %.2f °F = %.2f °C\n", value, result);
    }
    else {
        printf("Invalid choice.\n");
    }
}
   void convert_dbm_mw(void) {
    int choice;
    double value, result;

    printf("\n[Power Conversion (dBm <-> mW)]\n");
    printf("1. dBm -> mW\n");
    printf("2. mW -> dBm\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter power in dBm: ");

        if (scanf("%lf", &value) != 1) {
            printf("Invalid input.\n");
            return;
        }
        result = pow(10.0, value / 10.0);

        printf("Result: %.2f dBm = %.4f mW\n", value, result);
    }
    else if (choice == 2) {
        printf("Enter power in mW: ");

        if (scanf("%lf", &value) != 1) {
            printf("Invalid input.\n");
            return;
        }

        if (value <= 0) {
            printf("mW must be positive.\n");
            return;
        }
        result = 10.0 * log10(value);

        printf("Result: %.4f mW = %.2f dBm\n", value, result);
    }

    else {
        printf("Invalid choice.\n");
    }
}

void explanation_mode(void) {
    printf("\n[explanation mode]\n");
    printf("This feature will provide explanations.\n");
}