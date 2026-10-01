#include<stdio.h>
int main(){
    for(int j=0;j=5;j++){
        printf("loop started");
        for(int i=0;i<5;i++){                  
            printf("Inner loop started");
            break;
            printf("From inner loop");

        }
        printf("From inside the loop");
        break;
    }
    printf("Program terminated..");
}
