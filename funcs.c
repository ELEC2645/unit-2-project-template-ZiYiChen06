#include <stdio.h>
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
    printf("\n[Power Conversion]\n");
    printf("This feature will convert between dBm and mW.\n");
    /* you can call a function from here that handles menu 3 */
}

void explanation_mode(void) {
    printf("\n[explanation mode]\n");
    printf("This feature will provide explanations.\n");
    /* you can call a function from here that handles menu 4 */
}