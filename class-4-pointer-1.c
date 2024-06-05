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
// why
// usage in embed
int main() {
    int number=543;
    int *ptr1=&number;
    
    float number2 = 5.6;
    float *ptr2 = &number2;
    // disadv need to define
    printf("\nnumber: %f, ptr: %f ptr-value:%f", number2, ptr2, *ptr2);
    number2 = 15.6;
    printf("\nnumber: %f, ptr: %f ptr-value:%f", number2, ptr2, *ptr2);
    
    
    
    return 0;
}

// 1. When to use pointer when normal?
// calculate priorly how many bytes in code
// if there is no mem avail, we can prepare 
// stored in heap

// 2. so the pointer memory stored continuously, right?
// continuosly
// disadv, need larger cont memo

// 3. free clear 24 bytes temporary
// does that mean clear that pointer or on any address on the program