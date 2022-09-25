#include <stdio.h>

int main(void){

    float x, y;
    char c;

    scanf("%f %c %f", &x, &c, &y);
    switch(c){
        case '+':
            printf("%.3f\n", x+y);
            break;
        case '-':
            printf("%.3f\n", x-y);
            break;
        case '*':
            printf("%.3f\n", x*y);
            break;
        case '/':
            printf("%.3f\n", x/y);
            break;
    }
}