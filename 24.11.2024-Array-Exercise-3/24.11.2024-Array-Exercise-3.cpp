

#include <iostream>
#include <stdio.h>

int main() {
    int N;
    int A[50]; 
    int product = 1; 
    int hasOdd = 0; 
   
    scanf_s("%d", &N);

    
    if (N <= 0 || N > 50) {
        printf("Error\n");
        return 1;
    }

    
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &A[i]);
    }

   
    for (int i = 0; i < N; i++) {
       
        if (A[i] % 2 != 0) {
            product *= A[i];
            hasOdd = 1; 
        }
    }

    
    if (hasOdd) {
        printf("Sum of odd numbers is %d", product);
    }
    

    return 0;
}

