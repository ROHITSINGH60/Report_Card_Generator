#include <stdio.h>
#include<unistd.h>

int main() {

    //Declaration of variables
    char name[20], section, grade = 'G';
    int std, m1, m2, m3, m4, m5, total;

    //User friendly experience
    puts("Welcome to the report card generator");
    sleep(2);
    puts("Please enter the following details to get your report printed");
    sleep(1);

    //Details of student
    puts("Enter your name");
    scanf("%[^\n]%*c", name);

    puts("Enter your standard");
    scanf("%d", &std);

    while ((getchar()) != '\n');

    puts("Enter your section");
    scanf("%c", &section);

    puts("Enter your Mathematics marks");
    scanf("%d", &m1);

    puts("Enter your English marks");
    scanf("%d", &m2);

    puts("Enter your Hindi marks");
    scanf("%d", &m3);

    puts("Enter your Science marks");
    scanf("%d", &m4);

    puts("Enter your Social Science marks");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    //Calculating grade
    if (total > 500)
    {
        printf("Warning!Total marks can't be greater than 500!,please try again\n");
        return 1;
    }
    if (total < 0)
    {
        printf("Warning!Total marks can't be less than 0!,please try again\n");
        return 2;
    }


    if ( total > 449 && total < 501)
    {
        grade = 'A';
    }
    else if ( total > 399 && total < 450)
    {
        grade = 'B';
    }
    else if ( total > 349 && total < 400)
    {
        grade = 'C';
    }
    else if ( total > 299 && total < 350)
    {
        grade = 'D';
    }
    else if ( total > 199 && total < 300)
    {
        grade = 'E';
    }
    else if ( total > 0 && total < 200)
    {
        grade = 'F';
    }


    printf("\n");


    puts("Thank You for submitting your details. Your report is getting printed. Please wait for few seconds.");
    sleep(5);

    //Printing Report
    puts("---------------------------------------------");
    puts("\tJawahar Navodaya Vidyalaya");
    puts(" \t  Annual Report Card ");
    puts("\n");
    printf("\tName:%s\n", name);
    printf("\tStandard:%d\n", std);
    printf("\tSection:%c\n", section);
    puts("\n");
    puts("\tMarks Secured out of 100");
    printf("\tMathematics:%d\n", m1);
    printf("\tEnglish:%d\n", m2);
    printf("\tHindi:%d\n", m3);
    printf("\tScience:%d\n", m4);
    printf("\tSocial Science:%d\n", m5);
    puts("\n");
    printf("\tTotal marks secured:%d\n", total);
    printf("\tGrade: %c\n", grade);
    puts("---------------------------------------------");

    return 0;
}