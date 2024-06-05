#include <stdio.h>

void hollow_square(int size) {
    int i, j;
    for(i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            int isLeftCol = i == 0;
            int isRightCol = i == size-1;
            int isTopRow = j == 0;
            int isBottomRow = j == size-1;
            if (isLeftCol || isRightCol) { // print vertical line
                printf("*");
            } else if (isTopRow || isBottomRow) { // print horizontal line ----
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void top_pyramid(int height, int marginLeft) {
    int i, j;
    printf("height: %d\n\n", height); 
    for (i = 0; i<height; i++) {
        // padded margin - for diamond
        for(j=0; j<marginLeft;j++) {
            printf(" ");
        }
        
        for (j=height-1; j>i; j--) {
            printf(" ");
        }
        for (j=0;j<=(2*i);j++) {
            printf("X");
        }
      
        printf("\n");
    }
}


void bottom_pyramid(int height, int marginLeft) {
    int i, j;
    for (i = height; i>0; i--) {
        for(j=0; j<marginLeft;j++) {
            printf(" ");
        }
        for (j=0; j < height-i; j++) {
            printf(" ");
        }
        for (j=2*i-1; j>0; j--) {
            printf("X");
        }
        printf("\n");
    }
}

void diamond(int height) {
    printf("diamond: %d\n",height);
    
   
    int center = height /2 + 1;
    
    top_pyramid(center-1, 1);
    
    int i;
    for(i = 0; i<height ;i++) {
        printf("X");
    }
    printf("\n");
    bottom_pyramid(center-1, 1);
    
}

int isValidCol(int height) {
    return height > 2 && height % 2 == 1;
}

int main() {
    int height, isValidHeight = 0;
    do {
        printf("insert height (odd & > 2):");
        scanf("%d", &height);
        isValidHeight = isValidCol(height);
    } while(isValidHeight == 0);
    
    int operation = 0;
    do {
        printf("\n choose operation [1-5]:");
        printf("\n1 hollow square");
        printf("\n2 pyramid");
        printf("\n3 inverted pyramid");
        printf("\n4 diamond");
        printf("\n5 exit");
        printf("\n");
        scanf("%d",&operation);
        
        printf("\n");
        switch(operation) {
            case 1: hollow_square(height); break;
            case 2: top_pyramid(height, 0); break;
            case 3: bottom_pyramid(height, 0); break;
            case 4: diamond(height); break;
        }
    } while(operation != 5);
}
