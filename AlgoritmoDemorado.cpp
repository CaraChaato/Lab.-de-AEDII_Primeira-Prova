#include<stdio.h>
#include<time.h>
int main (){
    int i;
    for (i=1 ; i <= 100 ; i*=100){
        if ( i==30 ){
            break;
        }
        else{
            printf ("%2d\n" ,2*i);
        }
    }
    printf("fim do laco!\n");
    return 0;   