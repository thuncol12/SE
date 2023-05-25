/**
 * Project Untitled
 */


#include "RecruitmentManageUI.h"

/**
 * RecruitmentManageUI implementation
 */


void RecruitmentManageUI::selectShowRecruitmentList(CompanyMember* CM) { // ȸ�� ȸ�� CM�� ����� ä�� ���� ���� ��ȸ�� ������ ��� �ش� �Լ��� ȣ���.

    RecruitmentManage rManage = RecruitmentManage();

    rManage.showRecruitmentList(CM);//��� ��� �Լ��� ȣ��ȴ�. ����� ��� ����� ������ �Ѱ���.

    //delete rMange; // �Ҵ�Ǿ��� control class ��ȯ.

    return;
}

void RecruitmentManageUI::selectAddRecruitment(CompanyMember* CM, RecruitmentList RList) { // ȸ�� ȸ�� CM�� ä�� ���� ����� ������ ��� �ش� �Լ��� ȣ���.
    
    RecruitmentManage rManage = RecruitmentManage();

    rManage.addNewRecruitment(CM, RList);//ä�� ������ ����� ȸ��ȸ���� ������ ��ϵ� ä�� ������ ����Ʈ�� �߰��ϵ��� �ϴ� �Լ��� ȣ����. 
}

/**
 * @return RecruitmentList*
 */

void RecruitmentManageUI::selectRecruitStatistic(RecruitmentList* RList) {//ȸ�� ȸ���� ä�� ���� ��� ��ȸ�� ������ ��� �ش� �Լ��� ȣ���.
    RecruitmentManage searchRecruitStatistic = RecruitmentManage();

    searchRecruitStatistic.searchRecruitStatistic(RList);//��ȸ�� ä�� ������ ����Ʈ���� ������ �Ѱ���.
    return;
}