/*********************************************
 * W. Creelman  December 2014                * 
 * Read name is lastName, firstName format   * 
 * and print in firstName lastName format    *
 * Assuming good input 
  *******************************************/
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char line[52], firstName[25], lastName[25];
    char *pComma;
    
    // Ask for, "lastname, firstname" from user. 
    printf("Enter your name in \"lastName, firstName\" format: ");
    gets(line);
    
    // find comma, and copy parts of input line to names
    pComma = strchr(line, ',');
    if (pComma) {
        strncpy(lastName, line, pComma-line);
        lastName[pComma-line] = '\0';
        strcpy(firstName, pComma+2);
        
        // print in first name first order
        printf("Hello %s %s\n", firstName, lastName);
    }
        
    system("pause");
    return 0;
}
