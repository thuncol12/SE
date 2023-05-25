/**
 * Project Untitled
 */

#ifndef _APPLICATION_H
#define _APPLICATION_H
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Application
{
public:
  Application(string companyName, int businessNumber, string part, string deadline);
  void getApplicationDetails();
  void cancelApplication();
  Application() {}

private:
  string companyName;      // 회사이름.
  int businessNumber;      // 사업자번호.
  string part;             // 업무.
  string deadline;         // 신청 마감일.
  int numOfApplicants = 0; // 인원수.
  bool cancel;             // 지원 취소 관련 변수.
};

#endif //_APPLICATION_H