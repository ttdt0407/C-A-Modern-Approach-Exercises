#include <stdio.h>

int main(void)
{
    int first3, second3, third4;
    int validInput;

    do 
    {   
        printf("Enter phone number[(xxx) xxx-xxxx]: ");
        validInput = scanf("(%3d) %3d-%4d", &first3, &second3, &third4); //reads input value in the loop to avoid infinite loops
        while (getchar() != '\n'); //loops until meet "enter"
        
        if(validInput != 3) // checks the condition of scanf
        {
            printf("The input is not valid!\nPlease enter again\n");
        }
       
    } while (validInput != 3);

    printf("You entered %03d.%03d.%04d", first3, second3, third4);

    return 0;
}