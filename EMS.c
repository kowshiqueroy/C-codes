#include<stdio.h>
#include<string.h>

int counter=0;


typedef  struct emp1 {

char name[100]; //Employee Name
char pos[100]; //Employee Position
int eid; //Employee ID
char j[100]; //Employee Joining Date
float s; //Employee Salary
int nid; //Employee NID

}emp;

emp a[];
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





char n[100], p[100], j[100];
int e,nid;
float s;
printf("Enter Name: ");
scanf("%s", &n);

//printf("Enter EID: ");
//scanf("%d", &e);

printf("Enter Position: ");
scanf("%s", &p);

printf("Enter -14/2/2022- Joining date:  ");
scanf("%s", &j);

printf("Enter Salary: ");
scanf("%f", &s);

printf("Enter NID: ");
scanf("%d", &nid);

//printf("\n\n%s %s\n\n", n, p);

strcpy(a[counter].name,n);
strcpy(a[counter].pos,p);
strcpy(a[counter].j,j);
a[counter].eid=counter+1;
a[counter].s=s;
a[counter].nid=nid;


printf("Successfully Added");

counter++;

}

void update()
{
  printf("Update Employee ID: ");
  int u;

  scanf("%d", &u);


char n[100], p[100], j[100];
int e,nid;
float s;
printf("Enter Name: ");
scanf("%s", &n);

//printf("Enter EID: ");
//scanf("%d", &e);

printf("Enter Position: ");
scanf("%s", &p);

printf("Enter -14/2/2022- Joining date:  ");
scanf("%s", &j);

printf("Enter Salary: ");
scanf("%f", &s);

printf("Enter NID: ");
scanf("%d", &nid);

//printf("\n\n%s %s\n\n", n, p);

strcpy(a[u-1].name,n);
strcpy(a[u-1].pos,p);
strcpy(a[u-1].j,j);
//a[u-1].eid=a;
a[u-1].s=s;
a[u-1].nid=nid;


printf("Successfully Updated");

}

void removef() {

printf("remove is working");

}

void search(){

printf("Search Employee ID: ");
  int u;

  scanf("%d", &u);

    printf("\n\nName: %s\nEID: %d\nPosition: %s\nJoined: %s\nSalary: %f\nNID: %d\n\n", a[u-1].name, a[u-1].eid, a[u-1].pos, a[u-1].j, a[u-1].s, a[u-1].nid);

}

void view() {
    int i;

    for (i=0; i<counter; i++) {


        printf("\n\nName: %s\nEID: %d\nPosition: %s\nJoined: %s\nSalary: %f\nNID: %d\n\n", a[i].name, a[i].eid, a[i].pos, a[i].j, a[i].s, a[i].nid);

    }



}