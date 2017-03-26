#include <iostream>

class Student {
public:
    Student() {
        _code = 0;
        _name = "";
        _next = 0;
    }
public:
    int _code; // member m_ / _
    std::string _name;
    Student *_next; // 4 bytes
};

int main() {
    Student student1;
    student1._code = 1;
    student1._name = "Student 1";
    
    Student student2;
    student2._code = 2;
    student2._name = "Student 2";
    student1._next = &student2;
    
    Student student3;
    student3._code = 3;
    student3._name = "Student 3";
    student2._next = &student3;
    
    return 0;
}
