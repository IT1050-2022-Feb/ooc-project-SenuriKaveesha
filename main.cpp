#include "Exam.h"
#include "Examinee.h"
#include "Result.h"
#include "SystemAdmin.h"
#include "ExamProvider.h"
#include "certificates.h"
#include "ExamSchedule.h"
#include "Feedback.h"
#include "Payment.h"
#include "Report.h"
#include "GuestUser.h"

#include <iostream>
using namespace std;
int main()
{

  char ch;
  Exam *e = new Exam();
  e -> displayExamDetails();

  Result *r = new Result();
  r -> display();;
  Examinee* n = new Examinee("", "",r,e);
  n -> displayExamineeDetails();
  delete n;
  delete e; 
  delete r;

  
  Exam* exam = new Exam();
    exam->displayResultDetails();
    exam->displayPaymentDetails();

  
  Report *r1 = new Report(456, 112);
  SystemAdmin *s = new SystemAdmin();
  s->calFinancialAmount(1000.00, r1);
  s->display();
  delete r1;
  delete s;
  delete exam;
  
  Result* r2 = new Result();
	r2->display();
	ExamProvider* d = new ExamProvider();  
	d->DisplayExamProviderDetails();
	delete d;
	delete r2;

	Result* r3 = new Result();
	r3->display();
	Examinee* E = new Examinee();     
	E->displayExamineeDetails();
	delete E;
	delete r3;

	ExamSchedule* s1 = new ExamSchedule();
	s1->display();
	ExamProvider* d2 = new ExamProvider();   
	d2->DisplayExamProviderDetails();
	delete d2;
	delete s1;

	certificates* mycertificates;
	mycertificates = new certificates();
	mycertificates->displayCertificateDetails();
	delete mycertificates;
	Result* myResults;                      
	myResults = new Result();
	myResults->display();
	delete myResults;

	Exam* exam1;
	exam1 = new Exam();
	exam1->displayResultDetails();                
	delete exam1;


Feedback *fb1 = new Feedback();
Feedback *fb2 = new Feedback();

fb1->displayFeedbackDetails();
fb2->displayFeedbackDetails();
  
delete fb1;
delete fb2;
}