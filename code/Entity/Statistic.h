/**
 * Project Untitled
 */


#ifndef _STATISTIC_H
#define _STATISTIC_H

class Statistic {
public: 
    
int getRecruitStatistic();
    
int getApplyStatistic();
    
void addRecruitStatistic();
    
void addApplyStatistic();
private: 
    map<string, int> partOfGeneralMember;
    int numOfApply;
};

#endif //_STATISTIC_H