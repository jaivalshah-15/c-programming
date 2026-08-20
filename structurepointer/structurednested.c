#include<stdio.h>
#include<string.h>

struct Address{
    int pincode;
    char city[30];
};

struct Student{
    char name[30];
    struct Address addr;
};

void printStudent(struct Student);

int main(){
    printf("Nested Structures\n");
    struct Student std;
    // std.name = "Harry"; // You must not do this 
    strcpy(std.name, "Harry");
    std.addr.pincode = 344564;
    strcpy(std.addr.city, "Delhi");
    printStudent(std);
    return 0;
}

void printStudent(struct Student std){
    printf("The name of student is: %s\n", std.name);
    printf("The pin of student is: %d\n", std.addr.pincode);
    printf("The city of student is: %s\n", std.addr.city); 
}