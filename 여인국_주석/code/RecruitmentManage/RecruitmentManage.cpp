/**
 * Project Untitled
 */


#include "RecruitmentManage.h"

/**
 * RecruitmentManage implementation
 */


void RecruitmentManage::showRecruitmentList(companyMember* CM) {
    RecruitmentList** recruitmentList;
    String info = "";

    recruitmentList = CM.recruitmentList.listRecruitments(); // CM�� ä�븮��Ʈ ������ �����´�.

    for (int i = 0; i < CM.recruitmentList.numOfRecruitments; i++) { // CM�� ä�븮��Ʈ�� ������ �� ä���� ������ ����Ѵ�.
         info = recruitmentList[i].getRecruitmentInfo();
         cout << info << endl;
    }

    return;
}

void RecruitmentManage::addNewRecruitment(companyMember* CM) {
    String part;
    int numOfDesired;
    String deadLine;
    String companyName;

    // ����, �ο� ��, ������ �Է�
    cin >> part;
    cin >> numOfDesired;
    cin >> deadLine;
    companyName = CM.companyName;

    // ä�� ��ü ����
    Recruitment newRec = new Recruitment(part, numOfDesired, deadLine);

    // �ش� ä�� ������ ȸ��ȸ���� �ý����� ä�� ����Ʈ�� �߰�.
    CM.recruitmentList.plusRecruitment(newRec);
    systemRecruitmentList.plusRecruitment(newRec); //�ý����� ���� ä�� ����Ʈ�� ���� �߰�.

    return;
}

void RecruitmentManage::showClosedRecruitmentList() {

}

void RecruitmentManage::showSearchResult() {

}

void RecruitmentManage::addNewApplication() {

}