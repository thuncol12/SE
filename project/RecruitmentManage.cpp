/**
 * Project Untitled
 */


#include "RecruitmentManage.h"

/**
 * RecruitmentManage implementation
 */

//ä������ ��ȸ�� �����ϸ� ä�������� �����.
void RecruitmentManage::showRecruitmentList(CompanyMember* CM) {
    RecruitmentList recruitmentList;
    string info = "";

    recruitmentList = CM->getRecruitmentList(); // CM�� ä�븮��Ʈ ������ ������.

    for (int i = 0; i < recruitmentList.getNumOfRecruitments(); i++) { // CM�� ä�븮��Ʈ�� ������ �� ä���� ������ �����.
         info = recruitmentList.listRecruitments()[i].getRecruitmentInfo();
         cout << info << endl;
    }

    return;
}
//ä�������� ����Ѵ�. ��ϵ� ä�������� ä�� ����Ʈ�� �����. 
void RecruitmentManage::addNewRecruitment(CompanyMember* CM, RecruitmentList RList) {
    string part;
    int numOfDesired;
    string deadLine;
    string companyName;
    int businessNumber;
    // ����, �ο� ��, ������, ȸ���̸�, ����ڹ�ȣ �Է�

    part = "";
    numOfDesired = 0;
    deadLine = "";
    companyName = "";
    businessNumber = 0;

    //companyName = CM->getCompanyName();

    // ä�� ��ü ����
    //Recruitment* newRec = new Recruitment(part, numOfDesired, deadLine, companyName, businessNumber);

    // �ش� ä�� ������ ȸ��ȸ���� �ý����� ä�� ����Ʈ�� �߰�.
    //CM->getRecruitmentList().plusRecruitment(*newRec);
    //RList.plusRecruitment(*newRec); //�ý����� ���� ä�� ����Ʈ�� ���� �߰�.

    return;
}
//ȸ���� ä�� ���� ��� ��ȸ�� �����ϸ� �ش� �Լ��� ��µȴ�. ä�� ���� ����Ʈ���� �޾ƿ� ���� ����Լ��� �ѱ�.
void RecruitmentManage::searchRecruitStatistic(RecruitmentList* RList) { // ä�� ���� ��� ��ȸ
    Statistic Stat = Statistic(RList);
    Stat.getRecruitStatistic();//ä�� ��� ������ ������.
    return;
}