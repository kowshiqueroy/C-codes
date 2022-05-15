#include<stdio.h>
#include<string.h>



typedef struct student
{
    char Name[20];///student struct
    int Roll;
    int ID;
    float CGPA;
    char Department[10];
    float Semester;
    char Section;
    char Password[10];
    char Status[20];


} Student;


typedef struct teacher{
    char Name[20];
    char Department[10];
    char Password[10];
    char Subject[20];
    int ID;
    float Salary;
    char Status[20];

} Teacher;


typedef struct admin
{
    char Name[20];
    int ID;
    char Password[10];
    char Status[20];
}Admin;

Admin a[];
Teacher t[];
Student s[];
int adminCount=0;
int teacherCount=0;
int studentCount=0;


void main()
{
    printf("As a Student press 1\nAs a Teacher press 2\nAs an Admin press 3\nExit press 0 \nPlease press:");
    int n;
    scanf("%d", &n);


    switch (n)
    {
        case 1: studentFunc();
        break;

        case 2: teacherFunc();
        break;

        case 3: adminFunc();
        break;

        case 0: return 0;
        break;
        default:printf("Wrong Input");
        main();

    }
}


void studentFunc()
{

}
void teacherFunc()
{

}
void adminFunc()
{

    printf("Admin Login\n");
    int id;
    char pass[10];
    printf("Enter Admin ID: ");
    scanf("%d", &id);
    printf("Enter Admin Password: ");
    scanf("%s", pass);

    if (id==1 && !strcmp(pass, "1234" ) && adminCount==0) {
        adminMenu();

    } else {

//printf("\n\nDebug: Id %d\n\n", adminCount);

         int i;
    for (i=0;i<=adminCount;i++) {

          ///  printf("\n\nDebug: Id %d\n\n", a[i].ID);

        if (id== a[i].ID) {

            if (strcmp(pass,a[i].Password)) {

                printf("Wrong password!\n");
                adminFunc();

            } else {

            adminMenu();
            return 0;
            }


        }


    }


         printf("Wrong!\n");
                adminFunc();

    }





}

void adminMenu() {


printf("1. Add\n2. Delete\n3. Logout\n0. Exit");
    int n;
    scanf("%d", &n);
    switch(n) {

    case 1: adminAddChoice();
    break;
    case 2: adminDelete();
    break;
    case 3: adminLogout();
    break;
    case 0: return 0;


    }

}

void adminAddChoice() {

printf("1.Admin\n2.Student\n3.Teacher\n4.Back\n0.Exit");
int n;
scanf("%d",&n);

switch(n) {
case 1: adminAdd(); break;
case 2: studentAdd(); break;
case 3: teacherAdd(); break;
case 4: adminMenu(); break;
default: return 0;




}



}
 void adminAdd(){

    printf("Name: ");
    scanf("%s", a[adminCount].Name);
    printf("ID: ");
    scanf("%d", &a[adminCount].ID);
    printf("Password: ");
    scanf("%s", a[adminCount].Password);

   /// a[adminCount].Status="Working";
    strcpy( a[adminCount].Status,"Working");
    printf("Successful\n");
    adminCount++;
    adminFunc();

    }


    void studentAdd(){

    printf("Name: ");
    scanf("%s", s[studentCount].Name);
    printf("ID: ");
    scanf("%d", &s[studentCount].ID);
     printf("Roll: ");
    scanf("%d", &s[studentCount].Roll);
     printf("CGPA: ");
    scanf("%f", &s[studentCount].CGPA);
    printf("Semester: ");
    scanf("%f", &s[studentCount].Semester);
     printf("Department: ");
    scanf("%s", s[studentCount].Department);
    printf("Section: ");
    scanf("%s", &s[studentCount].Section);
    printf("Password: ");
    scanf("%s", s[studentCount].Password);
    ///s[studentCount].Status="Under-Grad";
    strcpy(s[studentCount].Status,"Under-Grad");



    studentCount++;
    printf("Successful\n");
    adminFunc();

    }
    void teacherAdd(){

    printf("Name: ");
    scanf("%s", t[teacherCount].Name);
    printf("ID: ");
    scanf("%d", &t[teacherCount].ID);
    printf("Password: ");
    scanf("%s", t[teacherCount].Password);
    printf("Salary: ");
    scanf("%f", &t[teacherCount].Salary);
    printf("Subject: ");
    scanf("%s", t[teacherCount].Subject);
    printf("Department: ");
    scanf("%s", t[teacherCount].Department);
    ///t[teacherCount].Status="Working";

    strcpy(t[teacherCount].Status,"Working");

    printf("Successful\n");
    teacherCount++;
    adminFunc();

    }

   void adminDelete(){
printf("Enter 1.Admin 2.Student 3.Teacher: \n");
int m;
scanf("%d", &m);

printf("Enter ID: \n");
int n;
scanf("%d", &n);
int i,j,k;

switch(m) {

case 1:
    for (i=0;i<adminCount;i++) {

        if (n==a[i].ID) {
            ///a[i].Status="Not Working";
            strcpy( a[i].Status,"Not Working");


        }


    }



    break;
case 2:

    for (j=0;j<studentCount;j++) {

        if (n==s[j].ID) {
            //s[i].Status="Graduated";
            strcpy( s[j].Status,"Graduated");

        }


    }

     break;
case 3:

    for (k=0;k<teacherCount;k++) {

        if (n==t[k].ID) {
            ///t[i].Status="Not Working";

            strcpy( t[k].Status,"Not Working");

        }


    }


    break;
default: adminDelete();



}

adminMenu();
    }

   void adminLogout(){

main();

    }
