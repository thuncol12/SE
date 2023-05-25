/**
 * Project Untitled
 */


#ifndef _APPLICATIONMANAGEMENT_H
#define _APPLICATIONMANAGEMENT_H

#include "Application.h"
#include "GeneralMember.h"
#include "Statistic.h"

class ApplicationManagement {
    public: 
    
        void showApplyInfo(GeneralMember* GM);
    
        void searchApplyStatistic(RecruitmentList* RList);
    
        void searchRecruitStatistic(RecruitmentList* RList);
    
        void cancelApply(Application* app);

        void showSearchResult(string companyName, RecruitmentList* RList);

        void addNewApplication(GeneralMember* GM, int bNum, Recruitment* rec);
};

#endif //_APPLICATIONMANAGEMENT_H