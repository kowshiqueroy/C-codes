#include<stdio.h>

void main () {

printf("Press 1 for +, Press 2 for -, Press 3 for *, Press 4 for /, Press 0 for EXIT\n");
int s;
scanf("%d", &s);

switch(s) {

case 1:
    add();
    break;

case 2:
    sub();
     break;

case 3:
    mul();
     break;

case 4:
    div();
     break;

case 0:
    return 0;
     break;



}
printf("\n");
main();
}

void add () {

int a, b;
scanf("%d %d", &a, &b);

int result=a+b;
printf("\n%d", result);
}

void sub () {

int a, b;
scanf("%d %d", &a, &b);

int result=a-b;
printf("\n%d", result);
}

void mul () {

int a, b;
scanf("%d %d", &a, &b);

int result=a*b;
printf("\n%d", result);
}

void div () {

int a, b;
scanf("%d %d", &a, &b);

float result= (float)  a/b;
printf("\n%f", result);
}
