/**
 * Project Untitled
 */

#include <string>
#include "Application.h"
#include "ApplicationManagement.h"
#include "ApplicationManageUI.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Member.h"
#include "MemberManagement.h"
#include "MemberManagementUI.h"
#include "Recruitment.h"
#include "RecruitmentList.h"
#include "RecruitmentManage.h"
#include "RecruitmentManageUI.h"
#include "Statistic.h"

 /**
  * Application implementation
  */


  /**
   * @return Application
   */
Application::Application(string companyName, int businessNumber, string part, string deadline) {
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->part = part;
    this->deadline = deadline;
    this->numOfApplicants += 1;
}

void Application::getApplicationDetails() {
    cout << "4 3 " << companyName << part << numOfApplicants << deadline << endl;
    return;
}

void Application::cancelApplication() {
    this->cancel = true;
    return;
}