#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <emscripten/emscripten.h>
#include <math.h>

double EMSCRIPTEN_KEEPALIVE fib2(int n) { 
    double sqrt_5 = sqrt(5);
    double phi_plus =  (1 + sqrt_5)/2;
    double phi_minus =  (1 - sqrt_5)/2;

    double phi_plus_n = pow(phi_plus,n);
    double phi_minus_n = pow(phi_minus,n);

    double result = (phi_plus_n - phi_minus_n)/ (sqrt_5);

    return result;
}


int fib1(int n) {
     int a =  0 ;
     int b =  1;

     for(int i=0; i < n; i++) {
         int t = a+b;
         a = b;
         b = t;
     }
     return b;
}


int main(int argc, char **argv) {
    //printf("%f \n", fib1(129));
    //printf("%f \n", fib2(129));
    //printf("%f \n", pow(2,10));
    printf(" webasm module loaded \n");
    return 0;
}


int EMSCRIPTEN_KEEPALIVE roll_dice() {
    srand(time(NULL));
    return rand() % 6 + 1;
}

