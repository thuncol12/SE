/**
 * Project Untitled
 */


#ifndef _STATISTIC_H
#define _STATISTIC_H
#pragma once
#include <map>
#include <string>
#include "RecruitmentList.h"
#include <vector>

using namespace std;

class Statistic {
public:

    void getRecruitStatistic();

    void getApplyStatistic();

    Statistic(RecruitmentList* RList);

private:
    map<string, int> partOfGeneralMember; // 
    map<string, int> numOfApply; // 
};

#endif //_STATISTIC_H