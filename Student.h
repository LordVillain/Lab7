#pragma once
#include <cstring>
#include <ostream>
class Student {
public:

    //конструктор
    Student(const char* name, int course, int group, const int number);

    //копирование
    Student(const Student& other);

    // деструктор
    ~Student();
     
    virtual double calculateAverage();

    const char* getName() const;
    void Setname(const char* NewName);

    int GetCourse() const;
    void SetCourse(int newCourse);

    int GetGroup() const;
    void setGroup(int newGroup);

    int Getnumber() const;

    int GetIdentificator() const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);


private:
    int ID;
    static int nextID;
    char* _name;         // Имя
    int _course;         // Курс
    int _group;        // Группа
    const int _number;   // Номер зачетки
    static int generateID(); 
    Student() = delete;
};