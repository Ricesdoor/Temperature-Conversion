#include <stdio.h>
#include <ctype.h>

int main (){

    char unit;
    float temp;
    printf("\n-----TEMPERATURE CONVERTER-----");
    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nType the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = temp * 1.8 + 32;
        printf("\nThe temperature in Fahrenheit is %f", temp);

    } 
    else if (unit == 'F'){
        printf("\nType the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp - 32) / 1.8;
                    printf("\nThe temperature in Celsius is %f", temp);
    }
    else {
        printf("\nInvalid unit!");
    }

    return 0;
}