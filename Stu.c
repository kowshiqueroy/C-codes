#include <stdio.h>
#include <string.h>
int count=0;
typedef struct s
{
    char name[10];
    int roll;
    float cgpa;
    char pass[10];


} student;
student a[];

void addStudent ()
{

    printf("Enter roll: ");
    scanf("%d", &a[count].roll);

    printf("Enter CGPA: ");
    scanf("%f", &a[count].cgpa);

    printf("Enter Password: ");
    scanf("%s", a[count].pass);


    count++;
}

void viewAll()
{


    int i;
    for (i=0; i<count; i++)
    {

        printf("Roll: %d CGPA: %f \n", a[i].roll, a[i].cgpa);

    }
}

///this is for login
void loginStudent ()
{



    printf("Enter Your Roll: ");
    int r;
    scanf("%d", &r);
    printf("Enter Your Password: ");
    char p[20];
    scanf("%s", p);

    int i;
    for (i=0; i<count; i++)
    {

        if (r==a[i].roll) ///roll matching
        {

            int k= strcmp(p,a[i].pass);

            if (k==0) ///pass matching
            {

                printf("Welcome to the UAP Student portal");

            }
            else
            {
                printf("Wrong password");
                main();
            }
        }
        else
        {
            printf("Wrong Roll");
        }

    }

}
void main()
{

    printf("\nFor adding a student please input 1 or 2 for viewing or 3 for login\n");
    int choiceInput;
    scanf("%d", &choiceInput);

    switch (choiceInput)
    {

    case 1:
        addStudent();
        break;
    case 2:
        viewAll();
        break;
    case 3:
        loginStudent(); ///login func
        break;
    default:
        return ;

    }

    main();

}
