#include<stdio.h>
typedef struct book
{
    int page;
    float price;
    char firstword;
} book;
void main()
{
    book a;

    scanf("%d",&a.page);
    scanf("%d",&a.price);
    scanf(" %s",&a.firstword);
    printf("%d %d", a.page, a.price);
    printf("\n%c",a.firstword);

}
