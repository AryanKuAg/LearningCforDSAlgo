#include<stdio.h>

void just(int *yo){

    *yo = 1456789;

}

int main(){
    int i = 4;
    int * j = &i;
    
    // for (int k = 0 ; k < 100000; k++){

    //     printf("The value of index %d is : %d\n", k, *(j + k));
    // }
    just(&i);

    printf("The value of i is : %d", i);
    return 0;
}