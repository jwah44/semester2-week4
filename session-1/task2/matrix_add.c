
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    for( int k=0; k<4; ++k) {
      for( int l=0; l<4; ++l) {
         a[k][l] = 1;
         b[k][l] = 1;
      }
    }

    for( int k=0; k<4; ++k) {
      for( int l=0; l<4; ++l) {
         c[k][l] = a[k][l] + b[k][l];
      }
    }

    for( int k=0; k<4; ++k) {
      for( int l=0; l<4; ++l) {
         printf("%f ", c[k][l]);
      }
      printf("\n");
    }



    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    return 0;
 }
