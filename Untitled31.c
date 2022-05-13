#include<stdio.h>

typedef struct CAR
{

    int sit;
    char model;
    float price;

} Nissan;


void main()
{
    Nissan t;
    scanf("%s", &t.model);
    scanf("%f", &t.price);
    scanf("%d", &t.sit);

    printf("%c %f %d",t.model, t.price, t.sit);

}
