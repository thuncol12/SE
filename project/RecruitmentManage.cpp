/**
 * Project Untitled
 */


#include "RecruitmentManage.h"

/**
 * RecruitmentManage implementation
 */


void RecruitmentManage::showRecruitmentList(CompanyMember* CM) {
    RecruitmentList recruitmentList;
    string info = "";

    recruitmentList = CM->getRecruitmentList(); // CM�� ä�븮��Ʈ ������ �����´�.

    for (int i = 0; i < recruitmentList.getNumOfRecruitments(); i++) { // CM�� ä�븮��Ʈ�� ������ �� ä���� ������ ����Ѵ�.
         info = recruitmentList.listRecruitments()[i].getRecruitmentInfo();
         cout << info << endl;
    }

    return;
}

void RecruitmentManage::addNewRecruitment(CompanyMember* CM, RecruitmentList RList) {
    string part;
    int numOfDesired;
    string deadLine;
    string companyName;
    int businessNumber;
    // ����, �ο� ��, ������, ȸ���̸�, ����ڹ�ȣ �Է�
    cin >> part;
    cin >> numOfDesired;
    cin >> deadLine;
    cin >> companyName;
    cin >> businessNumber;
    companyName = CM->getCompanyName();

    // ä�� ��ü ����
    Recruitment* newRec = new Recruitment(part, numOfDesired, deadLine, companyName, businessNumber);

    // �ش� ä�� ������ ȸ��ȸ���� �ý����� ä�� ����Ʈ�� �߰�.
    CM->getRecruitmentList().plusRecruitment(*newRec);
    RList.plusRecruitment(*newRec); //�ý����� ���� ä�� ����Ʈ�� ���� �߰�.

    return;
}

void RecruitmentManage::searchRecruitStatistic(RecruitmentList* RList) { // ä�� ���� ��� ��ȸ
    Statistic Stat = Statistic(RList);
    Stat.getRecruitStatistic();
    return;
}