/**************************************************************************
 * W. Creelman  December 2014              * 
 * First github file to start standard i/o *  
 * Read in 3 integers and print average    * 
  *******************************************/
#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    
    // Ask for, then get three integers from user. 
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // calculate and print the average
    printf("The average is %0.2f\n", (num1 + num2 + num3) / 3.0);
    
    system("pause");
    return 0;
}
