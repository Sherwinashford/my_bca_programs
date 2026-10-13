#include <stdlib.h> 2 
#include <stdio.h>  
3
/* The main thing that this program does. */ 4 
int main(int argc, [[maybe_unused]] char* argv[argc+1]) { 
// Declarations 5 
double A[5] = { 6 
[0] = 9.0, 7 
[1] = 2.9, 
[4] = 3.E+25, 8 
[3] = .00007, 
};
9 
// Doing some work 10 
for (size_t i = 0; i < 5; ++i) {  11 
printf("element %zu is %g, \tits square is %g\n", 
i,
A[i], 12 
A[i]*A[i]); 13 
}
14 
return EXIT_SUCCESS; 15 
}