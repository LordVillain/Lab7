#pragma once
#include <cstring>
#include <ostream>
class Student {
public:

    //�����������
    Student(const char* name, int course, int group, const int number);

    //�����������
    Student(const Student& other);

    // ����������
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
    char* _name;         // ���
    int _course;         // ����
    int _group;        // ������
    const int _number;   // ����� �������
    static int generateID(); 
    Student() = delete;
};