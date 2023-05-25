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

    void getRecruitStatistic(); //채용 통계 정보를 받아옴.

    void getApplyStatistic(); // 지원 통계 정보를 받아옴.

    Statistic(RecruitmentList* RList);

private:
    map<string, int> partOfGeneralMember; // 
    map<string, int> numOfApply; // 
};

#endif //_STATISTIC_H