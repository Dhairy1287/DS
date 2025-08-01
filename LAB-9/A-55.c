#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    char branch[50];
    int batch_no;
};

int main() {

    struct Student student1;

   
    student1.roll_no = 101;
    strcpy(student1.name, "John Doe");
    strcpy(student1.branch, "Computer Science");
    student1.batch_no = 2023;

    
    struct Student *ptr = &student1;

    printf("Roll No: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Branch: %s\n", ptr->branch);
    printf("Batch No: %d\n", ptr->batch_no);

    return 0;
}

