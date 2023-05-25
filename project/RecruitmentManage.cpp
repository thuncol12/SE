/**
 * Project Untitled
 */


#include "RecruitmentManage.h"

/**
 * RecruitmentManage implementation
 */

//채용정보 조회를 선택하면 채용정보를 출력함.
void RecruitmentManage::showRecruitmentList(CompanyMember* CM) {
    RecruitmentList recruitmentList;
    string info = "";

    recruitmentList = CM->getRecruitmentList(); // CM의 채용리스트 정보를 가져옴.

    for (int i = 0; i < recruitmentList.getNumOfRecruitments(); i++) { // CM의 채용리스트를 가지고 각 채용의 정보를 출력함.
         info = recruitmentList.listRecruitments()[i].getRecruitmentInfo();
         cout << info << endl;
    }

    return;
}
//채용정보를 등록한다. 등록된 채용정보는 채용 리스트에 저장됨. 
void RecruitmentManage::addNewRecruitment(CompanyMember* CM, RecruitmentList RList) {
    string part;
    int numOfDesired;
    string deadLine;
    string companyName;
    int businessNumber;
    // 업무, 인원 수, 마감일, 회사이름, 사업자번호 입력

    part = "";
    numOfDesired = 0;
    deadLine = "";
    companyName = "";
    businessNumber = 0;

    //companyName = CM->getCompanyName();

    // 채용 객체 생성
    //Recruitment* newRec = new Recruitment(part, numOfDesired, deadLine, companyName, businessNumber);

    // 해당 채용 정보를 회사회원과 시스템의 채용 리스트에 추가.
    //CM->getRecruitmentList().plusRecruitment(*newRec);
    //RList.plusRecruitment(*newRec); //시스템이 갖는 채용 리스트에 정보 추가.

    return;
}
//회원이 채용 정보 통계 조회를 선택하면 해당 함수가 출력된다. 채용 정보 리스트에서 받아온 값을 통계함수로 넘김.
void RecruitmentManage::searchRecruitStatistic(RecruitmentList* RList) { // 채용 정보 통계 조회
    Statistic Stat = Statistic(RList);
    Stat.getRecruitStatistic();//채용 통계 정보를 가져옴.
    return;
}