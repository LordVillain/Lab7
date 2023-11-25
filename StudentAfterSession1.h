#pragma once
#include "Student.h"
//#include <ostream>
class StudentAfterSession1 : public Student {
private:
	int _marks1[4];

public:
	//�����������
	StudentAfterSession1(const char* name, int course, int group, const int number, const int marks1[4]);

	//�����������
	StudentAfterSession1(const StudentAfterSession1& other);

	void SetMark(int i, int mark);
	int GetMark(int i);

    friend std::ostream& operator<<(std::ostream& os, const StudentAfterSession1& student);

	double calculateAverage() override;
};

