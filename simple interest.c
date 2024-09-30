#include <stdio.h>

int main()
{
    float  principal, rate,time,si;
    scanf("%f%f%f",&principal,&rate,&time);
      si=principal*rate*time/100;
    printf("simple interest:%.2f",si);

    return 0;
}
