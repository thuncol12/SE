/**
 * Project Untitled
 */
#include "Application.h"

/**
 * Application implementation
 */

/**
 * @return Application
 */
// 채용 지원 생성자.
Application::Application(string companyName, int businessNumber, string part, string deadline)
{
  this->companyName = companyName;
  this->businessNumber = businessNumber;
  this->part = part;
  this->deadline = deadline;
  this->numOfApplicants += 1;
}

// 지원 정보 조회. 지원 정보 리스트(회사 이름, 사업자번호, 업무, 인원 수, 신청 마감일)가 출력된다.
void Application::getApplicationDetails()
{
  cout << "4 3 " << companyName << part << numOfApplicants << deadline << endl;
  return;
}

// 지원 취소. 사업자번호에 해당하는 지원서의 cancel 변수를 true로 변경한다.
void Application::cancelApplication()
{
  this->cancel = true;
  return;
}