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


} Student;


typedef struct teacher{
    char Name[20];
    char Department[10];
    char Password[10];
    char Subject[20];
    int ID;
    float Salary;

} Teacher;


typedef struct admin
{
    char Name[20];
    int ID;
    char Password[10];
}Admin;

Admin a[];
Teacher t[];
Student s[];
int adminCount=0;


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

    case 1: adminAdd();
    break;
    case 2: adminDelete();
    break;
    case 3: adminLogout();
    break;
    case 0: return 0;


    }

}
 void adminAdd(){

    printf("Name: %d", adminCount);
    scanf("%s", a[adminCount].Name);
    printf("ID: ");
    scanf("%d", &a[adminCount].ID);
    printf("Password: ");
    scanf("%s", a[adminCount].Password);
    adminCount++;
    adminFunc();

    }

   void adminDelete(){


    }

   void adminLogout(){

main();

    }
