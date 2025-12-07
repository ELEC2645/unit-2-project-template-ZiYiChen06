#include <stdio.h>
#include <math.h>
#include "funcs.h"

void convert_frequency(void) {
    printf("\n[Frequency_Conversion]\n");
    printf("This feature will convert between HZ and rad/s.\n");
}

void convert_temperature(void) {
    printf("\n[Temperature Conversion]\n");
    printf("The feature will convert between Celsius and Fahrenheit.\n");
    /* you can call a function from here that handles menu 2 */
}

void convert_dbm_mw(void) {
   int choice;
   double value,result;

   printf("\n[Power Conversion (dBm <-> mW)]\n");
    printf("1.dBm -> mW \n");
    printf("2.mW -> dBm \n");
    printf("Enter your choice: ");
   scanf("%d",&choice);

   if(choice == 1) {
       printf("Enter value in dBm: ");
       if(scanf("%lf",&value)!=1) {
           printf("Invalid input.\n");
           return;
       }
       result = pow(10.0, value / 10.0);
       printf("Result: %.2f dBm = %.4f mW\n", value, result);
   }
    else if(choice == 2) {
       printf("Enter value in mW: ");
       if (scanf("%lf",&value)!=1) {
           printf("Invalid input.\n");
           return;
       }
       if(value <= 0) {
           printf("mW must be positive.\n");
           return;
       }
       result = 10.0 * log10(value);
       printf("Power in dBm: %.6f dBm\n", result);
   } else {
       printf("Invalid choice.\n");
   }
}

void explanation_mode(void) {
    printf("\n[explanation mode]\n");
    printf("This feature will provide explanations.\n");
    /* you can call a function from here that handles menu 4 */
}