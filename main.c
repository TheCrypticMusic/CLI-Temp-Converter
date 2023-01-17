#include <stdio.h>
#include <string.h>
#include "to_fahrenheit_converter.h"
#include "to_celsius_converter.h"

int main(int argc, char *argv[])
{

    float temp;
    float result;

    sscanf(argv[1], "%f", &temp);
    char *convert_to = argv[2];

    if (argc < 3)
    {
        printf("At least two arguements expected\n");
    }
    else if (argc > 3)
    {
        printf("Too many arguements supplied."
               " Please provide temp and scale of temperature"
               " you want to convert to\nExample:\n40 celsius\n"
               "This would convert 40 fahrenheit to celsius\n");
    }
    else if (strcmp(convert_to, "celsius") == 0 || strcmp(convert_to, "c") == 0)
    {
        printf("Converting to Celsius\n");
        result = to_celsius_converter(temp);
        printf("%.2f°C\n", result);
    }
    else if (strcmp(convert_to, "fahrenheit") == 0 || strcmp(convert_to, "f") == 0)
    {
        result = to_fahrenheit_converter(temp);
        printf("%.2f°F\n", result);
    }
    else
    {
        printf("Something went wrong.\n");
    }
}