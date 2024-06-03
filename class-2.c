// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // session 2
    // int score;
    // scanf("%d", &score);
    
    // if (score == 100) {
    //     printf("grade:o");
    // } else if (score >= 90 && score <= 99) {
    //     printf("grade:a+");
    // } else if (score >= 80 && score <= 89) {
    //     printf("grade:a");
    // } else if (score >= 70 && score <= 79) {
    //     printf("grade:b+");
    // } else if (score >= 60 && score <= 69) {
    //     printf("grade:c");
    // } else if (score >= 50 && score <= 59) {
    //     printf("grade:d");
    // }  else if (score == 0) {
    //     printf("grade:absent");
    // } else {
    //     printf("grade:fail");
    // }
    
    // use arithmetic assignment
    // check the main digit
    // if (score == 0) {
    //      printf("grade:absent");
    // } else {
    //     int main_digit = score / 10;
    //     printf("\nmain_digit: %d or %d", main_digit,score);
    //     switch(main_digit) {
    //         case 10: 
    //             printf("grade:o");break;
    //         case 9:
    //             printf("grade:a+");break;
    //         case 8:
    //             printf("grade:a");break;
    //         case 7:
    //             printf("grade:b+");break;
    //         case 6:
    //             printf("grade:c");break;
    //         case 5:
    //             printf("grade:d");break;
    //         default:
    //             printf("grade:fail"); break;
    //     }
    // }
    
    
    
    
    // int data1 = 5, data2=6, data3 = 7;
    // if (data1 >= data2 && data1>=data3) {
    //     printf("data1");
    // } else {
    //     if (data2 >= data3) {
    //         printf("data2");
    //     } else {
    //         printf("data3");
    //     }
    // }
    
    // ternary
    // int org_id=4753, org_pass=564;
    // int log_id;
    // int log_pass;
    // printf("\nlog_id: ");
    // scanf("%d", &log_id);
    
    // (log_id == org_id) ? 
    //     (
    //         printf("\nlog_pass:"),
    //         scanf("%d", &log_pass),
    //         (org_pass == log_pass) ? 
    //          printf("login success")
    //          : printf("invalid password")
    //     )
    //     : printf("invalid userid org:%d user:%d",org_id, log_id);
             
         
         
  
    // if (org_id == log_id) {
    //     printf("\nlog_pass: ");
    //     scanf("%d", &log_pass);
    //     if (org_pass == log_pass) {
    //         printf("login success");
    //     } else {
    //         printf("invalid password");
    //     }
    // } else {
    //     printf("invalid userid org:%d user:%d",org_id, log_id);
    // }
    
    // printf("\nEnter operation (+-*/%)");
    // char opr;
    // scanf("%c", &opr);
    
    // int data1, data2;
    // printf("\nEnter data1:");
    // scanf("%d", &data1);
    // printf("\nEnter data2: ");
    // scanf("%d", &data2);
   
    // switch(opr) {
    //     case '+': 
    //         printf("data1 %c data2 = %d", opr, data1+data2);
    //         break;
    //     case '-': 
    //         printf("data1 %c data2 = %d", opr, data1-data2);
    //         break;
    //     case '*': 
    //         printf("data1 %c data2 = %d", opr, data1*data2);
    //         break;
    //     case '/': 
    //         printf("data1 %c data2 = %d", opr, data1/data2);
    //         break;
    //     case '%': 
    //         printf("data1 %c data2 = %d", opr, data1%data2);
    //         break;
    //     default: 
    //         printf("incorrect operator");
    //         break;
    // }
    
    // LOOP
    // entry ctrl loop - for (initial; testCondition; ++/--)
    // entry ctrl loop - while(testCondition) {conditionUpdate}
    // exit ctrl loop - do{} while
    
    // int iter, start=2, end = 100;
    // for (iter = start; iter <= end; iter++) {
    //     if (iter % 2 == 0){
    //         printf("%d,", iter);
    //     }
    // }
    
    // 5!
    // 5 * 4 * 3 * 2 * 1
    // int factorial;
    // printf("\nFactorial of:");
    // scanf("%d",&factorial);
    
    // int value = 1, iter;
    // for (iter = factorial; iter > 0; iter--) {
    //   value *= iter;
    // }
    // printf("\nThe value of %d! is %d", factorial, value);
    
    
    // iter = factorial;
    // int value2 = 1;
    // while(iter > 0) {
    //     value2*= iter;
    //     iter--;
    // }
    // printf("\nThe value of %d! is %d while", factorial, value2);
    
    
    // iter = factorial;
    // int value3 = 1;
    // do {
    //     value3*= iter;
    //     iter--;
    // } while(iter > 0);
    // printf("\nThe value of %d! is %d do-while", factorial, value3);
    
    
    // print the number
    // 1. get the number from user
    // 2. check if strong number fact(num1) + fact(numb2) + ...
    // 3. check if armstrong number (num^3)
    // example:
    // 153 = armstrong number
    // 145 = strong number
    
    // int factorial(int digit) {
    //     int value=1,iter=digit;
    //     while(iter > 0) {
    //         value*= iter;
    //         iter--;
    //     }
    // }
    // int powerOfThree(int digit) {
    //     return digit * digit * digit;
    // }
    // int input, number, sum=0, mod=0;
    // printf("\nEnter number:"),scanf("%d", &input);
    // number = input;
    // printf("\n\nResult:");
    // int strongSum = 0;
    // int amstrongSum = 0;
    // while(number > 0) {
    //     mod= number%10;
    //     strongSum += factorial(mod);
    //     amstrongSum += powerOfThree(mod);
    //     number/=10;
    // }
    // printf("\nstrongSum=%d input=%d, is strong number: %s", strongSum, input, strongSum == input ? "yes" : "no");
    // printf("\narmstrongSum=%d input=%d, is armstrong number: %s", amstrongSum, input, amstrongSum == input ? "yes" : "no");
    
    
    // nested loop -- patterns
    // int row, col;
    // for (row = 1;row<=4;row++) {
    //     for(col=1; col<=4;col++){
    //         printf("%c", 64+col);
    //     }
    //     printf("\n");
    // }
    
    // int iter1, iter2;
    // int row = 6, col=6;
    // for (iter1=1; iter1 <=row;iter1++) {
    //     for(iter2=1; iter2<=col;iter2++) {
    //         if (iter2 > iter1) {
    //             break;
    //         }
            
    //         printf("%c",64+iter2);
            
    //     }
    //     printf("\n");
    // }
    
    
    // int iter1, iter2;
    // int row = 6, col=6;
    // for (iter1=1; iter1 <=row;iter1++) {
    //     int num = 1;
    //     for(iter2=col; iter2>0;iter2--) {
    //         if (iter1> iter2) break;
    //         printf("%c",64+num);
    //         num++;
            
    //     }
    //     printf("\n");
    // }
    
    // half diamond
    //  123456
    //   23456
    //    3456
    //     456
    //  123456

    void printBottomHalf() {
        int iter1, iter2;
        int row = 6, col=6;
    
        for (iter1=1; iter1 <=row;iter1++) {
            int num = 1;
            for(iter2=col; iter2>0;iter2--) {
                // half bottom
                if (iter1< iter2) {
                    printf(" ");
                } else {
                    printf("%d",num);
                }
                
                num++;
            }
            printf("\n");
        }
    }
    void printTopHalf() {
        int iter1, iter2;
        int row = 6, col=6;
    
        for (iter1=1; iter1 <=row;iter1++) {
            int num = 1;
            
            for(iter2=col; iter2>0;iter2--) {
                if (num < iter1) {
                    printf(" ");   
                } else {
                    printf("%d",num);
                }
                num++;
            }
            printf("\n");
        }
    }
    
    
    // printTopHalf();
    // printf("\n");
    // printBottomHalf();
    
    
    
}