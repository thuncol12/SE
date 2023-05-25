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

void ApplicationManagement::searchApplyStatistic(RecruitmentList* RList) { // RList: �ý����� ä�븮��Ʈ
    Statistic Stat = new Statistic(RList);
    Stat.getApplyStatistic();
    return;
}

void ApplicationManagement::searchRecruitStatistic(RecruitmentList* RList) {
    Statistic Stat = new Statistic(RList);
    Stat.getRecruitStatistic();
    return;
}

Recruitment* ApplicationManagement::showSearchResult(string companyName, RecruitmentList* RList) { // �ش� ȸ���� ä�� ���� ���, RList: �ý����� ä�븮��Ʈ
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

void ApplicationManagement::addNewApplication(GeneralMember* GM, int bNum, Recruitment* rec) { // �ش� ä�뿡 ��� ����. UI�κ��� ����ڹ�ȣ�� ����.
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