/**
 * Project Untitled
 */


#include "RecruitmentManageUI.h"

/**
 * RecruitmentManageUI implementation
 */


void RecruitmentManageUI::selectShowRecruitmentList(companyMember* CM) { // 회사 회원 CM이 등록한 채용 정보 내역 조회를 선택할 경우 해당 함수가 호출됨.

    RecruitmentManage rManage = new RecruitmentManage();

    rManage.showRecruitmentList(CM);

    //delete rMange; // 할당되었던 control class 반환.

    return;
}

void RecruitmentManageUI::selectAddRecruitment(companyMember* CM) { // 회사 회원 CM이 채용 정보 등록을 선택할 경우 해당 함수가 호출됨.
    
    RecruitmentManage rManage = new RecruitmentManage();

    rManage.addNewRecruitment(CM);
}

void RecruitmentManageUI::createNewRecruitment() {

}

void RecruitmentManageUI::selectClosedRecruitmentList() {

}

void RecruitmentManageUI::selectRecruitmentSearch() {

}

/**
 * @return RecruitmentList*
 */
RecruitmentList* RecruitmentManageUI::enterCompanyName() {
    return null;
}

void RecruitmentManageUI::selectARecruitment() {

}

void RecruitmentManageUI::applyForRecruitment() {

}