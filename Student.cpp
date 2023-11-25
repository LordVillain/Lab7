#pragma once
#include <cstring>
#include <ostream>

#include "Student.h"

int Student::nextID = 1;

    //конструктор
    Student::Student(const char* name, int course, int group, const int number)
        : _course(course), _group(group), _number(number), ID(generateID()) {
        // Определение длины строки имени
        int Length = 0;
        while (name[Length] != '\0') {
            Length++;
        }
        // Выделение памяти и копирование имени
        _name = new char[Length + 1];
        for (int i = 0; i <= Length; i++) {
            _name[i] = name[i];
        }
    }

    //копирование
    Student::Student(const Student& other)
    : _course(other._course), _group(other._group), _number(other._number), ID(generateID()) {
        // Определение длины строки имени
        int Length = 0;
        while (other._name[Length] != '\0') {
            Length++;
        }
        // Выделение памяти и копирование имени
        _name = new char[Length + 1];
        for (int i = 0; i <= Length; i++) {
            _name[i] = other._name[i];
        }
    }

    // деструктор
    Student::~Student() {
        delete[] _name;
    }



    const char* Student::getName() const {
        return _name;
    }
    void Student::Setname(const char* NewName) {
        delete[] _name;

        int length = 0;
        while (NewName[length] != '\0') {
            length++;
        }

        _name = new char[length + 1];

        for (int i = 0; i <= length; i++) {
            _name[i] = NewName[i];
        }

    }

    int Student::GetCourse() const {
        return _course;
    }
    void Student::SetCourse(int newCourse) {
        _course = newCourse;
    }

    int Student::GetGroup() const {
        return _group;
    }
    void Student::setGroup(int newGroup) {
        _group = newGroup;
    }

    int Student::Getnumber() const {
        return _number;
    }
    int Student::GetIdentificator() const{ return nextID - 1; }

    std::ostream& operator<<(std::ostream& os, const Student& student)
    {
        os << "ID: " << student.ID << std::endl;
        os << "Name: " << student._name << std::endl;
        os << "Course: " << student._course << std::endl;
        os << "Group: " << student._group << std::endl;
        os << "Student ID: " << student._number << std::endl;
        return os;
    }

    int Student::generateID() {
        return nextID++;
    }

    double Student::calculateAverage() { return 0; };


