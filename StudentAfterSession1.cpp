#include "StudentAfterSession1.h"

//конструктор
StudentAfterSession1::StudentAfterSession1(const char* name, int course, int group,const int number, const int marks1[4])
    : Student(name, course, group, number)
{
    for (int i = 0; i < 4; ++i) {
        _marks1[i] = marks1[i];
    }
}

//копирование
StudentAfterSession1::StudentAfterSession1(const StudentAfterSession1& other)
    : Student(other)
{
    for (int i = 0; i < 4; ++i) {
        _marks1[i] = other._marks1[i];
    }
}


void StudentAfterSession1::SetMark(int i, int mark) {
    _marks1[i - 1] = mark;
}
int StudentAfterSession1::GetMark(int i) {
    return _marks1[i - 1];
}


std::ostream& operator<<(std::ostream& os, const StudentAfterSession1& student) {
    os << static_cast<const Student&>(student) << std::endl;
    os << "Grades: ";
    for (int i = 0; i < 4; i++) {
        os << student._marks1[i] << " ";
    }
    os << std::endl;

    return os;
}



double StudentAfterSession1::calculateAverage() {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += _marks1[i];
    }
    return static_cast<double>(sum) / 4;
}

