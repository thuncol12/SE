/**
 * Project Untitled
 */


#include "RecruitmentManageUI.h"

/**
 * RecruitmentManageUI implementation
 */


void RecruitmentManageUI::selectShowRecruitmentList(CompanyMember* CM) { // ȸ�� ȸ�� CM�� ����� ä�� ���� ���� ��ȸ�� ������ ��� �ش� �Լ��� ȣ���.

    RecruitmentManage rManage = RecruitmentManage();

    rManage.showRecruitmentList(CM);

    //delete rMange; // �Ҵ�Ǿ��� control class ��ȯ.

    return;
}

void RecruitmentManageUI::selectAddRecruitment(CompanyMember* CM, RecruitmentList RList) { // ȸ�� ȸ�� CM�� ä�� ���� ����� ������ ��� �ش� �Լ��� ȣ���.
    
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