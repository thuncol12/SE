/**
 * Project Untitled
 */

#ifndef _APPLICATIONMANAGEUI_H
#define _APPLICATIONMANAGEUI_H
#include <string>
#include "ApplicationManagement.h"

using namespace std;
class ApplicationManageUI
{
public:
  // (일반회원) 지원 정보 조회를 선택.
  void selectApplyInfo(GeneralMember *mem);

  // (일반회원) 지원 통계 조회를 선택.
  void selectApplyStatistic(RecruitmentList *RList);

  // (일반회원) 지원 취소 선택.
  void selectCancelApply(Application *app);

  // (일반회원) 회사이름으로 채용 정보 검색 선택.
  void enterCompanyName(string companyName, RecruitmentList *Rlist);

  // (일반회원) 채용 지원 선택.
  void applyForRecruitment(GeneralMember *GM, int businessNum, Recruitment *rec);
};

#endif //_APPLICATIONMANAGEUI_H