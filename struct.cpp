#include <iostream>
#include <cstring>
struct Student
{
    char name[4];
    int born;
    bool male;
};

int main()
{
    struct Student stu;
    strcpy(stu.name, "Yu");
    stu.born = 2000;
    stu.male = true;

    struct Student stu2 = {"asd", 2000, true};

    struct Student students[1000];

    students[50].born = 2002;

    printf("%p\n", students);

    printf("%p\n", &students);
    return 0;
}
