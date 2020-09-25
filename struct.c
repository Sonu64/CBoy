#include <stdio.h>

struct student
{
     int rollNumber;
     char name[100];
     char department[100];
     char course[100];
     int yearOfJoining;
};


// this one uses pointer to a struct param
void namesFromYearOfJoining(struct student*, int);

//this one does not uses pointer to struct
void printData(struct student, int);
void printInformation(struct student);


int main()
{
    // the question is of 450 elements, I did for 3
    // the question wanted me to write only the functions, namesFromYearOfJoining(() and printInformation()
    struct student students[3] = {
        {12, "Sonu", "CSE", "Game Development and AI", 2021},
        {34, "Eshita", "Nutrition", "Biological Sciences", 2021},
        {56, "Sangit", "Physics", "Mechanics", 2022}
    };

    int requiredYear, requiredRollNumber;

    printf("Enter year of joining to find: ");
    scanf("%d", &requiredYear);
    /* as the array has 3 elements, we have to pass each individual element to each function. So, 3 times */
    for(int i = 0; i < 3; i++)
    {
        namesFromYearOfJoining(&students[i], requiredYear);
    }


    printf("Enter Roll number to print Data: ");
    scanf("%d", &requiredRollNumber);
    for(int i = 0; i < 3; i++)
    {
        printData(students[i], requiredRollNumber);
    }



    return 0;
}

void namesFromYearOfJoining(struct student *student, int requiredYear) // student is a pointer to a structure of type "struct student"
{   
    if(student->yearOfJoining == requiredYear)
    {
        printf("%s\n", student->name);
    }
}

void printData(struct student students, int requiredRollNumber)
{

    if(students.rollNumber == requiredRollNumber)
    {   
        printInformation(students);
    }
}

void printInformation(struct student studentData)
{
    printf("%s\n", studentData.name);
    printf("%d\n", studentData.yearOfJoining);
    printf("%d\n", studentData.rollNumber);
    printf("%s\n", studentData.course);

}



