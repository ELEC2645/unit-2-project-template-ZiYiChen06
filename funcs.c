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
    int choice;
    printf("\n=== Unit Explanations ===\n");
    printf("1. Hz \n");
    printf("2. rad/s \n");
    printf("3. dBm \n");
    printf("4. mW \n");
    printf("5. Temperature Units \n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    printf("----------\n");

    switch (choice) {

        case 1:
            printf("[Hz]\n");
            printf("Hz indicates how many cycles happen in one second.\n");
            printf("Common in AC signals, filters, and digital systems.\n");
            printf("Formula: rad/s = 2 * pi * Hz\n");
            break;

        case 2:
            printf("[rad/s]\n");
            printf("rad/s shows how fast something rotates or oscillates.\n");
            printf("Used in control systems and mechanical motion.\n");
            printf("Formula: Hz = rad/s / (2π)\n");
            break;

        case 3:
            printf("[dBm]\n");
            printf("dBm is a logarithmic unit referenced to 1 mW.\n");
            printf("Used in wireless communication and RF circuits.\n");
            printf("Formula: mW = 10^(dBm / 10)\n");
            break;

        case 4:
            printf("[mW]\n");
            printf("mW is a linear unit that measures power.\n");
            printf("Used in electronics, sensors, and communication systems.\n");
            printf("Formula: dBm = 10 * log10(mW)\n");
            break;

        case 5:
            printf("[Temperature]\n");
            printf("°C and °F are units for measuring temperature.\n");
            printf("Used in sensors and environmental monitoring.\n");
            printf("Formulas:\n");
            printf("  °F = (°C * 9/5) + 32\n");
            printf("  °C = (°F - 32) * 5/9\n");
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    printf("------------\n");
}
void rc_filter_helper(void)
{
    double R, C, fc;

    printf("\n[RC Filter Helper]\n");
    printf("Enter resistance R: ");
    if (scanf("%lf", &R) != 1 || R <= 0) {
    printf("Invalid resistance value.\n");
        return;
    }

    printf("Enter capacitance C : ");
    if (scanf("%lf", &C) != 1 || C <= 0) {
    printf("Invalid capacitance value.\n");
        return;
    }
    fc = 1.0 / (2.0 * pi * R * C);
    printf("Cutoff Frequency: %.2f Hz\n", fc);
}