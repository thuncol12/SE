/**
 * Project Untitled
 */


#ifndef _STATISTIC_H
#define _STATISTIC_H
#include <map>
#include <string>
#include "RecruitmentList.h"
#include <vector>

class Statistic {
    public: 
    
        void getRecruitStatistic();
    
        void getApplyStatistic();
    
        void addRecruitStatistic();
    
        void addApplyStatistic();

        Statistic(RecruitmentList* RList);

    private: 
        map<string, int> partOfGeneralMember; // 업무별 지원자 수
        map<string, int> numOfApply; // 업무별 지원 횟수
};

#endif //_STATISTIC_H