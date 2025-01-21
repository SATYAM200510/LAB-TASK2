#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    
    struct Student student1, student2;
    float averageMarks;


    printf("Enter the name of the first student: ");
    scanf(" %s", &student1.name); 
    printf("Enter the age of the first student: ");
    scanf("%d", &student1.age);     
    printf("Enter the total marks of the first student: ");
    scanf("%f", &student1.totalMarks); 

    
    printf("\nEnter the name of the second student: ");
    scanf(" %s", &student2.name); 
    printf("Enter the age of the second student: ");
    scanf("%d", &student2.age);      
    printf("Enter the total marks of the second student: ");
    scanf("%f", &student2.totalMarks); 

    
    printf("\nProfile of the first student:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    
    printf("\nProfile of the second student:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);


    averageMarks = (student1.totalMarks + student2.totalMarks) / 2;


    printf("\nThe average of total marks: %.2f\n", averageMarks);

    return 0;
}
