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

    recruitmentList = CM->getRecruitmentList(); // CM의 채용리스트 정보를 가져온다.

    for (int i = 0; i < recruitmentList.getNumOfRecruitments(); i++) { // CM의 채용리스트를 가지고 각 채용의 정보를 출력한다.
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
    // 업무, 인원 수, 마감일, 회사이름, 사업자번호 입력
    cin >> part;
    cin >> numOfDesired;
    cin >> deadLine;
    cin >> companyName;
    cin >> businessNumber;
    companyName = CM->getCompanyName();

    // 채용 객체 생성
    Recruitment* newRec = new Recruitment(part, numOfDesired, deadLine, companyName, businessNumber);

    // 해당 채용 정보를 회사회원과 시스템의 채용 리스트에 추가.
    CM->getRecruitmentList().plusRecruitment(*newRec);
    RList.plusRecruitment(*newRec); //시스템이 갖는 채용 리스트에 정보 추가.

    return;
}

void RecruitmentManage::searchRecruitStatistic(RecruitmentList* RList) { // 채용 정보 통계 조회
    Statistic Stat = Statistic(RList);
    Stat.getRecruitStatistic();
    return;
}