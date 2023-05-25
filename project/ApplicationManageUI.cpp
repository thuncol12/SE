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
  * ApplicationManageUI implementation
  */


void ApplicationManageUI::selectApplyInfo(GeneralMember* mem) {
	ApplicationManagement* applyInfo = new ApplicationManagement();

	applyInfo->showApplyInfo(mem);

	return;
}

void ApplicationManageUI::selectApplyStatistic(RecruitmentList* RList) {
	ApplicationManagement* applicationManage = new ApplicationManagement();

	applicationManage->searchApplyStatistic(RList);
	return;
}

void ApplicationManageUI::selectCancelApply(Application* app) {
	ApplicationManagement* cancelApply = new ApplicationManagement();

	cancelApply->cancelApply(app);

	return;
}

void ApplicationManageUI::enterCompanyName(string companyName, RecruitmentList* Rlist) {
	ApplicationManagement* showSearchResult = new ApplicationManagement();

	Recruitment rec = showSearchResult->showSearchResult(companyName, Rlist);

	/*
	rec
	*/
}

void ApplicationManageUI::applyForRecruitment(GeneralMember* GM, int businessNum, Recruitment* rec) {
	ApplicationManagement* addNewApplication = new ApplicationManagement();

	addNewApplication->addNewApplication(GM, businessNum, rec);

	return;
}