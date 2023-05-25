/**
 * Project Untitled
 */


#include "ApplicationManagement.h"

/**
 * ApplicationManagement implementation
 */


void ApplicationManagement::showApplyInfo(GeneralMember* GM) {
    Application** AppList;
    AppList = GM.listApplication();

    for (int i = 0; i < GM.numOfApplication; i++) {
        AppList[i].getApplicationDetails();
    }

    return;
}

void ApplicationManagement::searchApplyStatistic(RecruitmentList* RList) { // RList: 시스템의 채용리스트
    Statistic Stat = new Statistic(RList);
    Stat.getApplyStatistic();
    return;
}

void ApplicationManagement::searchRecruitStatistic(RecruitmentList* RList) {
    Statistic Stat = new Statistic(RList);
    Stat.getRecruitStatistic();
    return;
}

Recruitment* ApplicationManagement::showSearchResult(string companyName, RecruitmentList* RList) { // 해당 회사의 채용 정보 출력, RList: 시스템의 채용리스트
    Recruitment* rec;

    for (int i = 0; i < RList.numOfRecruitments; i++) {
        if (companyName.compare(RList[i].companyName) == 0) {
            string str = "";
            str = companyName + " " + RList[i].businessNumber + " ";
            str += RList[i]getRecruitmentInfo();
            cout << str << endl;

            rec = RList[i]
        }
    }
    
    return rec;
}

void ApplicationManagement::addNewApplication(GeneralMember* GM, int bNum, Recruitment* rec) { // 해당 채용에 즉시 지원. UI로부터 사업자번호를 받음.
    string companyName;
    int businessNumber;
    string part;
    string deadline;

    companyName = rec.companyName;
    businessNumber = bNum;
    part = rec.part;
    deadline = rec.deadline;

    Application app = new Application(companyName, businessNumber, part, deadline);
    GM.addApplication(*app);
    return;
}

/**
 * @return bool
 */
void ApplicationManagement::cancelApply(Application* app) {
    app.cancelApplication();
    return;
}