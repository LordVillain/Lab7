#include "StudentAfterSession2.h"

//конструктор
StudentAfterSession2::StudentAfterSession2(const char* name, int course, int group, const int number, const int marks1[4], const int marks2[5])
    : StudentAfterSession1(name, course, group, number, marks1)
{
    for (int i = 0; i < 5; ++i) {
        _marks2[i] = marks2[i];
    }
}

//копирование
StudentAfterSession2::StudentAfterSession2(const StudentAfterSession2& other)
    : StudentAfterSession1(other)
{
    for (int i = 0; i < 5; ++i) {
        _marks2[i] = other._marks2[i];
    }
}


void StudentAfterSession2::SetMark(int i, int mark) {
    _marks2[i - 1] = mark;
}
int StudentAfterSession2::GetMark(int i) {
    return _marks2[i - 1];
}


std::ostream& operator<<(std::ostream& os, const StudentAfterSession2& student) {
    os << static_cast<const Student&>(student) << std::endl;
    os << "Grades: ";
    for (int i = 0; i < 5; i++) {
        os << student._marks2[i] << " ";
    }
    os << std::endl;
    return os;
}



double StudentAfterSession2::calculateAverage(){
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += _marks2[i];
    }
    return static_cast<double>(sum) / 5;

}