#include <stdio.h>
#include <string.h>
#include "to_fahrenheit_converter.h"
#include "to_celsius_converter.h"

int main(int argc, char *argv[]) {

    int temp;
   
    sscanf(argv[1], "%d", &temp);    
    char *convert_to = argv[2];


    if (argc < 3) {
        printf("At least two arguements expected\n");
    } else if (argc > 3) {
        printf("Too many arguements supplied."
        " Please provide temp and scale of temperature"
        " you want to convert to\nExample:\n40 celsius\n"
        "This would convert 40 fahrenheit to celsius\n");
    } else if (strcmp(convert_to, "celsius") == 0 || strcmp(convert_to, "c") == 0) {
        printf("Converting to Celsius\n");
        to_celsius_converter(temp);
        
    } else if (strcmp(convert_to, "fahrenheit") == 0 || strcmp(convert_to, "f") == 0 ){
        printf("Converting to Fahrenheit\n");
    } else {
        printf("Something went wrong");
    }
}