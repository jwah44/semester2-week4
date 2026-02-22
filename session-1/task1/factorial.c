
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    for(int k=0; k<20; ++k) {
      f[k] = 1;
      for(int l=1; l<=k; ++l) {
         f[k] *= l;
      }
    }
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for(int k=0; k<20; ++k) {
      printf("factorial(%d) =  %d\n", k, f[k]);
    }



    return 0;
 }
