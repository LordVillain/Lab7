#pragma once
#include "Student.h"
#include "StudentAfterSession1.h"
#include <ostream>
class StudentAfterSession2 : public StudentAfterSession1 {
private:
	int _marks2[5];

public:
	//конструктор
	StudentAfterSession2(const char* name, int course, int group, const int number, const int marks1[4] , const int marks2[5]);

	//копирование
	StudentAfterSession2(const StudentAfterSession2& other);

	void SetMark(int i, int mark);
	int GetMark(int i);

	friend std::ostream& operator<<(std::ostream& os, const StudentAfterSession2& student);

	double calculateAverage() override;
};

