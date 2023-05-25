/**
 * Project Untitled
 */

#ifndef _RECRUITMENT_H
#define _RECRUITMENT_H
#include <string>
using namespace std;

class Recruitment
{
private:
  string part;
  int numOfDesired;
  string deadline;
  int numOfApplicants = 0;
  string companyName;
  int businessNumber;

public:
  Recruitment(string part, int numOfDesired, string deadline, string companyName, int businessNumber);
  string getRecruitmentInfo(); // �ش� ä���� ���� ��ȯ
};

#endif //_RECRUITMENT_H