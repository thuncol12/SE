/**
 * Project Untitled
 */


#include <string>
using namespace std;

#ifndef _APPLICATIONMANAGEUI_H
#define _APPLICATIONMANAGEUI_H

class ApplicationManageUI {
public:

    void selectApplyInfo(GeneralMember* mem);

    void selectApplyStatistic(RecruitmentList* RList);

    void selectCancelApply(Application* app);

    void enterCompanyName(string companyName, RecruitmentList* Rlist);

    void applyForRecruitment(GeneralMember* GM, int businessNum, Recruitment* rec);
};

#endif //_APPLICATIONMANAGEUI_H