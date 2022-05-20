#include "ExamProvider.h"
#include <iostream> 
#include <cstring>
using namespace std;

  ExamProvider::ExamProvider(){
    
  }
	ExamProvider :: ExamProvider(const char ID[],const char password[], const char Email[], Result* r2, ExamSchedule *s1) {

		strcpy(ExamProviderID, ID);

		strcpy(ExamProviderPassword, password);

		strcpy(ExamProviderEmail, Email);

		Rslt = r2;
		Exshd = s1;

	}

	void ExamProvider :: DisplayExamProviderDetails()
	{
		cout << "Exam provider ID :" << ExamProviderID << endl;
		cout << "Exam provider password :" << ExamProviderPassword << endl;
		cout << "Exam provider Email :" << ExamProviderEmail << endl;
		Rslt->display();
		Exshd->display();
	}