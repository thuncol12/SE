/**
 * Project Untitled
 */

#include "ApplicationManageUI.h"

/**
 * ApplicationManageUI implementation
 */

// (일반회원) 지원 정보 조회를 선택.
void ApplicationManageUI::selectApplyInfo(GeneralMember *mem)
{
  ApplicationManagement *applyInfo = new ApplicationManagement();

  applyInfo->showApplyInfo(mem);

  return;
}

// (일반회원) 지원 통계 조회를 선택.
void ApplicationManageUI::selectApplyStatistic(RecruitmentList *RList)
{
  ApplicationManagement *applicationManage = new ApplicationManagement();

  applicationManage->searchApplyStatistic(RList);
  return;
}

// (일반회원) 지원 취소 선택.
void ApplicationManageUI::selectCancelApply(Application *app)
{
  ApplicationManagement *cancelApply = new ApplicationManagement();

  cancelApply->cancelApply(app);

  return;
}

// (일반회원) 회사이름으로 채용 정보 검색 선택.
void ApplicationManageUI::enterCompanyName(string companyName, RecruitmentList *Rlist)
{
  // ApplicationManagement* showSearchResult = new ApplicationManagement();
  // Recruitment rec = showSearchResult->showSearchResult(companyName, Rlist);

  /*
  rec
  */
  return;
}

// (일반회원) 채용 지원 선택.
void ApplicationManageUI::applyForRecruitment(GeneralMember *GM, int businessNum, Recruitment *rec)
{
  ApplicationManagement *addNewApplication = new ApplicationManagement();

  addNewApplication->addNewApplication(GM, businessNum, rec);

  return;
}