# include<stdio.h>


// only _ is allowed in variables name from all other special characters.
// Constant Characters must be enclosed in single inverted commas ('')

long long int main(){
    int a = 4;
    float b = 5.3;
    char c = 'c';
    char just; 
    printf("Hello world %d %f %c \n", a, b, c);
    printf("%f ", a + b);
    scanf("%c", &just);
    printf("the value of just is: %c", just);
    return 0;
}