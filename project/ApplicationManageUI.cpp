/**
 * Project Untitled
 */


#include "ApplicationManageUI.h"

/**
 * ApplicationManageUI implementation
 */


void ApplicationManageUI::selectApplyInfo(GeneralMember* mem) {
	ApplicationManage applyInfo = new ApplicationManage();

	applyInfo.showApplyInfo(mem);

	return;
}

void ApplicationManageUI::selectApplyStatistic(RecruitmentList* RList) {
	ApplicationManage applicationManage = new ApplicationManage();

	applicationManage.searchApplyStatistic(RList);
	return;
}

void ApplicationManageUI::selectCancelApply(GeneralMember* mem) {
	ApplicationManage cancelApply = new ApplicationManage();

	Application* app = mem.applicationList[mem.numOfApplication--];

	cancelApply.cancelApply(app);
	return;

}

void ApplicationManageUI::enterCompanyName(string companyName) {
	ApplicationManage showSearchResult = new ApplicationManage();

	Recruitment* rec = showSearchResult.showSearchResult(companyName);

	/*
	rec를 리턴할지 출력할지 결정.
	*/
}

void ApplicationManageUI::applyForRecruitment(GeneralMember* GM, int businessNum, Recruitment* rec) {
	ApplicationManage addNewApplication = new ApplicationManage();

	addNewApplication.addNewApplication(GM, businessNum, rec);

	return;
}