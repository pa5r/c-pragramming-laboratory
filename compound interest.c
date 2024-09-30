#include <stdio.h>

int main()
{
    double principal,rate,time,ci,amount;
    scanf("%lf %lf %lf",&principal,&rate,&time);
    ci=amount-principal;
    printf("compound interest:%lf",ci);

    return 0;
}
