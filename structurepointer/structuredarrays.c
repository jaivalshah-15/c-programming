#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    printf("Array of Structures\n");
    struct Student class1[90];

    class1[0].roll = 1;
    class1[0].marks = 91.6;
    strcpy(class1[0].name,"Harry");

    printf("The first student is %s and his roll no is %d and his marks are %.1f\n", class1[0].name, class1[0].roll, class1[0].marks);
    
    class1[1].roll = 2;
    class1[1].marks = 99.5;
    strcpy(class1[1].name, "Rohan");

    printf("The second student is %s and his roll no is %d and his marks are %.1f\n", class1[1].name, class1[1].roll, class1[1].marks);
    
    return 0;
}