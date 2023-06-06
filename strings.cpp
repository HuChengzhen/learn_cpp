#include<iostream>
#include<cstring>
using namespace std;
int main() {
    cout << strlen("asdf");
    char name[] = "测试";

    cout << '\n';

    cout << name;

    strncpy(name, "asdfasdf", 2);
}