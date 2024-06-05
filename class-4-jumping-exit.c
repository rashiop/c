// Online C compiler to run C program online
#include <stdio.h>

void jumpingContinue(int len, int stop) {
    for (int i=0; i<=len; i++) {
        if (i==stop) {
            printf("STOP!,");
            continue;
        }
        printf("%d",i);
    }
}


void jumpingBreak(int len, int stop) {
    for (int i=0; i<=len; i++) {
        if (i==stop) {
            printf("STOP!");
            break;
        }
        printf("%d,",i);
    }
}

void jumpingGoto(int number) {
    if (number%2 == 0) {
        goto even;
    } else {
        goto odd;
    }
    
    even:
        printf("%d number is even", number);
        return;
    odd:
        printf("%d number is odd", number);
        return;
}


int main() {
   
  jumpingBreak(10, 3);
  printf("\n");
  jumpingGoto(99);
  printf("\n");
  jumpingContinue(10,3);
   
    return 0;
}