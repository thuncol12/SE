/**
 * Project Untitled
 */


#include "RecruitmentManageUI.h"

/**
 * RecruitmentManageUI implementation
 */


void RecruitmentManageUI::selectShowRecruitmentList(CompanyMember* CM) { // 회사 회원 CM이 등록한 채용 정보 내역 조회를 선택할 경우 해당 함수가 호출됨.

    RecruitmentManage rManage = RecruitmentManage();

    rManage.showRecruitmentList(CM);

    //delete rMange; // 할당되었던 control class 반환.

    return;
}

void RecruitmentManageUI::selectAddRecruitment(CompanyMember* CM, RecruitmentList RList) { // 회사 회원 CM이 채용 정보 등록을 선택할 경우 해당 함수가 호출됨.
    
    RecruitmentManage rManage = RecruitmentManage();

    rManage.addNewRecruitment(CM, RList);
}

/**
 * @return RecruitmentList*
 */

void RecruitmentManageUI::selectRecruitStatistic(RecruitmentList* RList) {
    RecruitmentManage searchRecruitStatistic = RecruitmentManage();

    searchRecruitStatistic.searchRecruitStatistic(RList);
    return;
}