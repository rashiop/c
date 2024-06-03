// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h> 

void hwOne() {
    printf("\n -- 1. Check even odd\n");
    int luckyNumber;
    printf("\nPlease enter your lucky number:");
    scanf("%d", &luckyNumber);
    
    int isOdd = luckyNumber % 2 == 1;
    printf("\nYour lucky number %d is %s", luckyNumber, isOdd ? "odd" : "even");
}

void hwTwo() {
    printf("\n -- 2. Check vowel\n");
    char initial;
    printf("\nPlease enter your initial (1 char):");
    scanf("%c", &initial);
    
    initial = tolower(initial);
    int isVowel = 0;
    if (initial == 'a' || initial == 'i' || initial == 'u' || initial == 'o' || initial == 'e') {
      isVowel = 1;
    }
    printf("\nYour initial %c is %s", initial, isVowel ? "vowel" : "consonant");
}

void hwThree() {
    printf("\n -- 3. Swapping value\n");
    int data1 = 65;
    int data2 = 69;
    printf("\nInitial value\ndata1: %d\ndata2: %d", data1, data2);
    
    
    // arithmetic solution
    data1 = data1 + data2; // 134
    data2 = data1 - data2; // 65
    data1 = data1 - data2; // 69
    printf("\nSwapped value\ndata1:%d\ndata2:%d", data1, data2);
    
    
    // reset value
    data1 = 65;
    data2 = 69;
    // comparison ? 
    // no idea yet

    // EXOR gate solution
    
}

int main() {
    printf("Homework\n\n");
    // hwOne();
    // hwTwo();
    hwThree();
}