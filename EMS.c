#include<stdio.h>
#include<string.h>


typedef  struct emp1 {

char name[30];
char pos[20];

}emp;


void main(){

printf("SHIKHO Employee Management System\n");
printf("Press 1 for ADD, Press 2 for UPDATE, Press 3 for REMOVE, Press 4 for SEARCH, Press 5 for VIEW, Press 0 for EXIT\n");
int s;
scanf("%d", &s);

switch(s) {

case 1:
    add();
    break;

case 2:
   update();
     break;

case 3:
   removef();
     break;

case 4:
    search();
     break;

     case 5:
    view();
     break;

case 0:
    return 0;
     break;



}
printf("\n");
main();


}




void add() {

printf("add is working");

emp a;

char n[40], p[30];

scanf("%s %s", &n, &p);

printf("\n\n%s %s\n\n", n, p);

strcpy(a.name,n);
strcpy(a.pos,p);

printf("\n\n%s %s\n\n", a.name, a.pos);

}

void update()
{
  printf("update is working");
}

void removef() {

printf("remove is working");

}

void search(){

printf("search is working");

}

void view() {

printf("view is working");

}
