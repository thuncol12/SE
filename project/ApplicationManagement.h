/**
 * Project Untitled
 */

#ifndef _APPLICATIONMANAGEMENT_H
#define _APPLICATIONMANAGEMENT_H
#pragma once
#include "Application.h"
#include "GeneralMember.h"
#include "Statistic.h"
#include <string>
using namespace std;

class ApplicationManagement
{
public:
  // (일반회원) 본인의 지원 정보를 조회한다.
  void showApplyInfo(GeneralMember *GM);

  // (일반회원) 본인의 지원 정보 통계를 출력한다.
  void searchApplyStatistic(RecruitmentList *RList);

  // (일반회원) 지원 취소.
  void cancelApply(Application *app);

  // (일반회원) 회사이름으로 채용 정보를 검색.
  Recruitment showSearchResult(string companyName, RecruitmentList *RList);

  // (일반회원) 사업자번호로 채용 지원한다. Application 생성자 호출.
  void addNewApplication(GeneralMember *GM, int bNum, Recruitment *rec);
};

#endif //_APPLICATIONMANAGEMENT_H