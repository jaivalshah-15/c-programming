#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    float marks;
    char name[20];
};

int main(){
    // int roll[30];
    // char name[30][10];
    // float marks[30];
    // In order to create a variable of type int we do something like: 
    int a;

    // In a similar way in order to create a variable of type "struct Student" we do something like:
    struct Student harry;
    harry.roll = 34;
    harry.marks = 45.2;
    strcpy(harry.name, "Harry");

    printf("%d %f %s", harry.roll, harry.marks, harry.name);

    return 0;
}