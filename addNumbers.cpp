/**************************************************************************
 * W. Creelman  December 2014                                             * 
 * Add numbers until users presses a key that isn't a number              * 
  *************************************************************************/
#include <iostream>

int main() {
    float total = 0;
    char strNum[21];        // for user input, will conver to number
    
    // prompt user for numbers 
    printf("Enter numbers one at a time, when finished ");
    printf("press '=' to add them:\n");
    
    // while there is input
    while ((scanf("%s", strNum)) == 1) {
        // break out of loop if not a number
        if (!isdigit(strNum[0]))
            break;
        // add number to total    
        total += atof(strNum);
    }    
    
    // print the total
    printf("The total is %0.2f\n", total);
    
    system("pause");
    return 0;
}
