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

    recruitmentList = CM.recruitmentList.listRecruitments(); // CM의 채용리스트 정보를 가져온다.

    for (int i = 0; i < CM.recruitmentList.numOfRecruitments; i++) { // CM의 채용리스트를 가지고 각 채용의 정보를 출력한다.
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

    // 업무, 인원 수, 마감일 입력
    cin >> part;
    cin >> numOfDesired;
    cin >> deadLine;
    companyName = CM.companyName;

    // 채용 객체 생성
    Recruitment newRec = new Recruitment(part, numOfDesired, deadLine);

    // 해당 채용 정보를 회사회원과 시스템의 채용 리스트에 추가.
    CM.recruitmentList.plusRecruitment(newRec);
    systemRecruitmentList.plusRecruitment(newRec); //시스템이 갖는 채용 리스트에 정보 추가.

    return;
}

void RecruitmentManage::showClosedRecruitmentList() {

}

void RecruitmentManage::showSearchResult() {

}

void RecruitmentManage::addNewApplication() {

}