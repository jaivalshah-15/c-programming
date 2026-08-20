#include<stdio.h>
#include<string.h>

union Student{
    int roll;
    float marks;
    char name[20];
};

struct Student2{
    int roll;
    float marks;
    char name[20];
};

int main(){ 
    union Student s1;
    s1.roll = 83;
    printf("Roll: %d\n", s1.roll);

    s1.marks = 91.83;
    printf("Marks: %.2f\n", s1.marks);

    strcpy(s1.name, "Harry");
    printf("Name: %s\n", s1.name);

    printf("size of Student: %d\n", sizeof(union Student));
    printf("size of Student2: %d\n", sizeof(struct Student2));



    // printf("Roll: %d\n", s1.roll);
    // printf("Marks: %.2f\n", s1.marks);
    // printf("Name: %s\n", s1.name);

    return 0;
}