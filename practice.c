#include <stdio.h>

int main(){

    float num1, num2, num3, average;

        printf("Enter three grades: ");
        scanf("%f" "%f" "%f", &num1, &num2, &num3);

        /*float sum = num1 + num2 + num3;*/ 
        average = (num1 + num2 + num3) / 3 ; 
        
        printf("------------------------------\n");
        printf("Your average is: %f\n", average);
        printf("------------------------------\n");

        if (average >= 98 && average <= 100)
        {
            printf("With Highest Honors"); 
        }
        else if (average >= 95 && average <= 97){
            printf("With High Honors");
        }
        else if (average >= 90 && average<=94){
            printf("With Honors");
        }
        else {
            printf("You're trying keep it up!"); 
        }
    return 0; 
}