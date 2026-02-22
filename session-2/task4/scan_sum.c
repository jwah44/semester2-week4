
#include <stdio.h>

int main( void ) {
    char buffer[10];
    int x, y;

    printf("Enter two integers separated by a space:");
    fgets(buffer, sizeof(buffer), stdin);

    if(sscanf(buffer, "%d %d", &x, &y) == 2) {
        int sum = x + y;
        printf("The sum of %d and %d is %d", x, y, sum);
    } else {
    (printf("Invalid input"));
    }

    // define suitable data

    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    return 0;
}