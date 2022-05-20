#include "Result.h"
#include "ExamSchedule.h"
#pragma once

class ExamProvider
{
private:

	char ExamProviderID[10];

	char ExamProviderPassword[20];

	char ExamProviderEmail[20];
	Result* Rslt;
	ExamSchedule* Exshd;

public:
  ExamProvider();
	ExamProvider(const char ID[],const char password[], const char Email[], Result* r, ExamSchedule *s1);
	void DisplayExamProviderDetails();
};

