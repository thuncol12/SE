/**
 * Project Untitled
 */


#include "RecruitmentManageUI.h"

/**
 * RecruitmentManageUI implementation
 */


void RecruitmentManageUI::selectShowRecruitmentList(CompanyMember* CM) { // 회사 회원 CM이 등록한 채용 정보 내역 조회를 선택할 경우 해당 함수가 호출됨.

    RecruitmentManage rManage = RecruitmentManage();

    rManage.showRecruitmentList(CM);//통계 출력 함수가 호출된다. 출력한 대상 멤버의 정보를 넘겨줌.

    //delete rMange; // 할당되었던 control class 반환.

    return;
}

void RecruitmentManageUI::selectAddRecruitment(CompanyMember* CM, RecruitmentList RList) { // 회사 회원 CM이 채용 정보 등록을 선택할 경우 해당 함수가 호출됨.
    
    RecruitmentManage rManage = RecruitmentManage();

    rManage.addNewRecruitment(CM, RList);//채용 정보를 등록한 회사회원의 정보와 등록된 채용 정보를 리스트에 추가하도록 하는 함수를 호출함. 
}

/**
 * @return RecruitmentList*
 */

void RecruitmentManageUI::selectRecruitStatistic(RecruitmentList* RList) {//회사 회원이 채용 정보 통계 조회를 선택할 경우 해당 함수가 호출됨.
    RecruitmentManage searchRecruitStatistic = RecruitmentManage();

    searchRecruitStatistic.searchRecruitStatistic(RList);//조회할 채용 정보를 리스트에서 가져와 넘겨줌.
    return;
}