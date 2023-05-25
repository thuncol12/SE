/**
 * Project Untitled
 */

#include "ApplicationManagement.h"

/**
 * ApplicationManagement implementation
 */

// (일반회원) 본인의 지원 정보를 조회한다.
void ApplicationManagement::showApplyInfo(GeneralMember *GM)
{
  Application *AppList;
  AppList = GM->listApplication();

  for (int i = 0; i < GM->getNumOfApplication(); i++)
  {
    AppList[i].getApplicationDetails();
  }

  return;
}

// (일반회원) 본인의 지원 정보 통계를 출력한다.
void ApplicationManagement::searchApplyStatistic(RecruitmentList *RList)
{
  Statistic *Stat = new Statistic(RList);
  Stat->getApplyStatistic();
  return;
}

// (일반회원) 회사이름으로 채용 정보를 검색한다.
Recruitment ApplicationManagement::showSearchResult(string companyName, RecruitmentList *RList)
{
  Recruitment *rec = NULL;
  for (int i = 0; i < RList->getNumOfRecruitments(); i++)
  {
    if (companyName.compare(RList->listRecruitments()[i].getCompanyName()) == 0)
    {
      string str = "";
      str = companyName + " " + RList->listRecruitments()[i].getCompanyName() + " ";
      str += RList->listRecruitments()[i].getRecruitmentInfo();
      cout << str << endl;
      rec = &RList->listRecruitments()[i];
    }
  }
  return *rec;
}

// (일반회원) 사업자번호로 채용 지원한다. Application 생성자 호출.
void ApplicationManagement::addNewApplication(GeneralMember *GM, int bNum, Recruitment *rec)
{
  Application app = Application(rec->getCompanyName(), bNum, rec->getPart(), rec->getDeadline());
  GM->addApplication(app);
  return;
}

/**
 * @return bool
 */
// (일반회원) 지원 취소.
void ApplicationManagement::cancelApply(Application *app)
{
  app->cancelApplication();
  return;
}