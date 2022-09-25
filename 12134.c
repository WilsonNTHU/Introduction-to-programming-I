#include <stdio.h>

int main(void){
    int a, b, answer;
    int temp_1, temp_2, temp_3, temp_4;

    scanf("%d.%d %d.%d", &temp_1, &temp_2, &temp_3, &temp_4);

    a = temp_1*100 + temp_2;
    b = temp_3*100 + temp_4;
    answer = a*b;
    printf("%d.%04d\n", answer/10000, answer%10000);
    return 0;
}