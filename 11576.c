#include <stdio.h>

int main(void){
    int x, hour, minute, carry;

    scanf("%d", &x);
    hour = (x / 100) % 24;
    minute = (x % 100) % 60;
    carry = (x % 100) / 60; 

    if((hour + carry)%24 >= 12)
        printf("%02d:%02d p.m.", hour + carry, minute);
    else
        printf("%02d:%02d a.m.", hour + carry, minute);

    return 0;
}