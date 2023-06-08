#include<iostream>

struct Student
{
    char name[4];
    int born;
    bool male;
};

int main(int argc, char const *argv[])
{
    int *p1 = new int;

    int *p2 = new int();

    int *p5 = new int {5};

    Student * ps1 = new Student;

    int *pa1 = new int[16];

    int *pa4 = new int[16]{1,2,3};

    delete p1;

    delete p2;

    return 0;
}
