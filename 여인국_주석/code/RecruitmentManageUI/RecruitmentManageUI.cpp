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