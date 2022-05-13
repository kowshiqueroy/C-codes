
#include<stdio.h>

int largestNumber (int m, int n, int z)

{
    if (m>n && m> z) {
        return m;
    }

    else if (n>m && n> z) {
        return n;
    }

    else {

        return z;
    }
}



void main ( )
{
    int a , b , c ;
    scanf("%d %d %d", &a, &b, &c);

    int k = largestNumber(a,b,c);

    printf("%d", k);

}
