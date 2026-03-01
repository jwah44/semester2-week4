
/*
Name: Joshua Momcilovic
Student ID: 201876926
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    int argnumber = argc-1;

    // check number of arguments passed is between 1 and 10
    if(argnumber>10) {
        return 1;
    }

    if(argnumber<1) {
        return 1;
    }

    // define appropriate data to hold your answer
    char buffer[50];

    // process the command-line data using appropriate string functions
    for( int k=1; k<argc; ++k ) { //k=1 so that ./makeString is not printed to the terminal
        
        // check argument length is between 1 and 4 characters
        int len = strlen(argv[k]);

        if(len>4) {
            return 1;
        }

        strcat(buffer, argv[k]);
        if(k<argc-1) { //k<argc-1 so that no extra "-" is appended to the end of the string
            strcat(buffer,"-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}