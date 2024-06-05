// Online C compiler to run C program online
#include <stdio.h>


// pointer 
// -- also called var
// -- X contain value
// -- V address of another variable
// syntax:
// data_type *pointer_name = &another_var;
// int number = 453
// int *pointer= &number;
void swapPointer(int *ptr1, int *ptr2) {
   int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void swapValue(int n1, int n2) {
    printf("\nN1: %d N2: %d", n1,n2);
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int n1 = 1, n2=7;
    swapValue(n1,n2);
    printf("\nSwap value\nN1: %d N2: %d", n1,n2);
    
    // pass address of
    swapPointer(&n1, &n2);
    printf("\nSwap pointer\nN1: %d N2: %d", n1,n2);
    return 0;
}