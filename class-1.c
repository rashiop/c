// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int cats = 10; // 4B
    float weight = 66.68; // 4B
    char me = 'P'; // 1B
    char name[] = "Poppy";
    printf("%d %f me:%c name:%s", cats, 66.68, me, name);

    int data1=55,data2=46;
    //comparison
    // t.= 1, f=0
    printf("\n%d true:", data1<data2);
    printf("\n%d false", data1>data2);
    printf("\n NOT: %n ", !data2);
    printf("\n EXOR: %n", data1 ^ data2);
    
    // and  or   exor --2IP 1OP, not -- 1IP, OP
    // &&   ||      ^           !
    // not 
    
    // logical operation
    // gate => buat nyalain lampu misalnya tergantung gate mana
    // IP1 IP2 AND(*) OR(+) EXOR(DIFF IP -1) NOT(1 input ! output)
    // 0   0   0   0   0   
    // 0   1   0   1   1
    // 1   0   0   1   1
    // 1   1   1   1   0
    
    
    // int data1, data2, data3, total=0; // declaration of var
    // scanf("%d", &data1); // scan output from terminal
    // total+=data1;
    // scanf("%d", &data1); // scan output from terminal
    // total+=data1;
    // scanf("%d", &data1); // scan output from terminal
    // total+=data1;
    // printf("total=%d");
    
    // // print
    // printf("data1=%d %d",data1,data2);
  
    
    // // 1. increment decrement
    // // pre: symbol before var --data
    // // post: symbol after var data++
    // data2++;
    // printf("\ndata2 %d", data2);
    // data2--;
    // printf("\ndata2 %d", data2);
    // printf("\ndata2 %d", --data2);
    // // 2. arithmetic
    // // multiply
    // printf("\nadd result: %d", data1+data2);
    // printf("\nmultiply result: %d", data1*data2);
    // printf("\ndivide result: %.3f", data1/data2);
    // printf("\nmodulo result: %d", data1%data2);
    
    // 3. assignment
    // data2 += 10;
    // printf("\n\n\n");
    // printf("Assignemment:%d",data2);
    
}


// Operators:
// 1. increment decrement
// 2. arithmetic + - * / %
// 3. assignment += *= /= %= -=
// 4. relational comparison < > <= >= == !=
// 5. logical AND(&&) OR(||) XOR(^) NOT(!) - only 1 input & 1 output
// 6. bitwise
// 7. conditional

// 1.if
// 2.if else
// 3.else if 
// 4.nested if
// 5.switch case



// number system
// binary -- 0
// octal 0-7
// decimal 0-9
// hex -- 0-15(f)