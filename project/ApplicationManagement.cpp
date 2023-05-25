/**
 * Project Untitled
 */



#include "ApplicationManagement.h"


 /**
  * ApplicationManagement implementation
  */

void ApplicationManagement::showApplyInfo(GeneralMember* GM) {
    Application* AppList;
    AppList = GM->listApplication();

    for (int i = 0; i < GM->getNumOfApplication(); i++) {
        AppList[i].getApplicationDetails();
    }

    return;
}

void ApplicationManagement::searchApplyStatistic(RecruitmentList* RList) { // RList: 
    Statistic* Stat = new Statistic(RList);
    Stat->getApplyStatistic();
    return;
}

Recruitment ApplicationManagement::showSearchResult(string companyName, RecruitmentList* RList) { // 
     Recruitment* rec;

    for (int i = 0; i < RList->getNumOfRecruitments(); i++) {
        
         if (companyName.compare(RList->listRecruitments()[i].getCompanyName()) == 0) {
             string str = "";
             str = companyName + " " + RList->listRecruitments()[i].getCompanyName() + " ";
             str += RList->listRecruitments()[i].getRecruitmentInfo();
             cout << str << endl;

             rec = &RList->listRecruitments()[i];
         }
     }
     return *rec;
}

void ApplicationManagement::addNewApplication(GeneralMember* GM, int bNum, Recruitment* rec) { //.
    Application app = Application(rec->getCompanyName(), bNum, rec->getPart(), rec->getDeadline());
    GM->addApplication(app);
    return;
}

/**
 * @return bool
 */
void ApplicationManagement::cancelApply(Application* app) {
    app->cancelApplication();
    return;
}