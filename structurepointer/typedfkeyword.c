#include<stdio.h>

typedef struct Student{
    int roll;
    float marks;
    char name[20];
} Student;

typedef int myInt; // nickname or alias for int now is myInt

int main(){
    // typedef stands for type definition and it allows us to create a nickname or alias for an existing data type. 
    printf("Typedef in C\n");
    Student s1;
    Student s2;
    myInt a=123;
    int b=4;
    printf("The value of a is %d and b is %d\n", a, b);
    return 0;
}