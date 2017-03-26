#include <iostream>

class Student {
public:
    Student() {
        _code = 0;
        _name = "";
    }
public:
    int _code; // member m_ / _
    std::string _name;
};

int main() {
    Student student;
    Student *studentPtr = &student;
    return 0;
}
