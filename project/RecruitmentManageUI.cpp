/**
 * Project Untitled
 */


#include "RecruitmentManageUI.h"

/**
 * RecruitmentManageUI implementation
 */


void RecruitmentManageUI::selectShowRecruitmentList(companyMember* CM) { // ȸ�� ȸ�� CM�� ����� ä�� ���� ���� ��ȸ�� ������ ��� �ش� �Լ��� ȣ���.

    RecruitmentManage rManage = new RecruitmentManage();

    rManage.showRecruitmentList(CM);

    //delete rMange; // �Ҵ�Ǿ��� control class ��ȯ.

    return;
}

void RecruitmentManageUI::selectAddRecruitment(companyMember* CM) { // ȸ�� ȸ�� CM�� ä�� ���� ����� ������ ��� �ش� �Լ��� ȣ���.
    
    RecruitmentManage rManage = new RecruitmentManage();

    rManage.addNewRecruitment(CM);
}

/**
 * @return RecruitmentList*
 */

void RecruitmentManageUI::selectRecruitStatistic(RecruitmentList* RList) {
    RecruitmentManage searchRecruitStatistic = new RecruitmentManage();

    searchRecruitStatistic.searchRecruitStatistic(RList);
    return;
}