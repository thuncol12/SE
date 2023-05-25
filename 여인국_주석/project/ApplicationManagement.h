/**
 * Project Untitled
 */


#ifndef _APPLICATIONMANAGEMENT_H
#define _APPLICATIONMANAGEMENT_H
#pragma once
#include "Application.h"
#include "GeneralMember.h"
#include "Statistic.h"
#include <string>
using namespace std;

class ApplicationManagement {
public:

    void showApplyInfo(GeneralMember* GM);

    void searchApplyStatistic(RecruitmentList* RList);

    void cancelApply(Application* app);

    Recruitment showSearchResult(string companyName, RecruitmentList* RList);

    void addNewApplication(GeneralMember* GM, int bNum, Recruitment* rec);
};

#endif //_APPLICATIONMANAGEMENT_H