#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strupr(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void strlwr(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void strrev(char *str) {
    int length = 0;
    char *end_ptr = str;

    // Find the end of the string and calculate its length
    while (*end_ptr != '\0') {
        end_ptr++;
        length++;
    }

    // Swap characters from the beginning with characters from the end
    end_ptr--; // Move end_ptr back to the last character (excluding the null terminator)
    char *start_ptr = str;
    while (start_ptr < end_ptr) {
        char temp = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = temp;
        start_ptr++;
        end_ptr--;
    }
}

// @stedy - to download codeblock on macOS, we’ll need to use Xcode too -> more info: https://sourceforge.net/projects/codeblocks/

// Strrev, strlwr, strupr, strcat(1,2), strcpy, strcmp
// void factorial() {
//     // while
//     int factorial = 5, result = 1;
//     // might not run the true condition
//     while(factorial > 0) {
//         result *= factorial;
//         factorial--;
//     }
//     printf("factorial 5 is %d\n", result);
    
//     // reseting
//     result = 1, factorial=5;
//     // at least run 1x
//     do {
//         result *= factorial;
//         factorial--;
//     } while(factorial > 0);
//     printf("factorial 5 is %d", result);
// }

// void array() {
//     // arr: same data type
//     int number[] = {1,2,3,4};
//     int length = sizeof(number) / sizeof(number[0]);
//     printf("idx-1: %d\narr size: %d", number[1], length);
    
//     number[1] = 5;
//     printf("\nidx-1: %d", number[1]);
    
    
//     for(int idx=0; idx<length;idx++) {
//         printf("%d,", number[idx]);
//     }
// }

// void arraySort(int isAscending) {
//     int length = 7;
//     int number[length];
//     for(int i=0; i<7;i++) {
//         scanf("%d",&number[i]);
//     }
    
    
    
//     int temp = number[0];
//     int swapped = 0;
//     for (int i=0; i<length; i++) {
//         for (int j=0; j<length-1; j++) {
//             if (isAscending == 0 && number[j]<number[j+1]) {
//                 temp = number[j];
//                 number[j] = number[j+1];
//                 number[j+1] = temp;
//                 swapped=1;
//             } else if (isAscending == 1 && number[j]>number[j+1]) {
//                 temp = number[j];
//                 number[j] = number[j+1];
//                 number[j+1] = temp;
//                 swapped=1;
//             }
//         }
//         if (swapped == 0) {
//             break;
//         }
//     }
    
//      for(int i=0; i<length;i++) {
//         printf("%d", number[i]);
//     }
// }

void stringMethod() {
    char str[10];
    char str1[10] ="WeLcome";
    printf("insert:\n");
    scanf("%s", str);
    printf("\nCompare:%d", strcmp(str1, str));
    strupr(str);
    strlwr(str1);
    printf("\nUpper:%s Lower:%s", str, str1);
    strrev(str);
    printf("\nreversed: %s",str);
}

int main() {
    // array();
    // arraySort(0);
    stringMethod();
    
    return 0;
}