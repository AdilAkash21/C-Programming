#include<stdio.h>

int main(){
    if(1){
        printf("This is excuted\n");

    }
    if(2345){
        printf("This is also excuted!\n");
    }
    if(2.74){
        printf("This is also excuted!\n");
    }
    if('c'){
        printf("This character inside if is also excuted!\n");
    }
    if(0){
        printf("I am zero - I am not executed\n");
    }
    return 0;
}