/**
 * Project Untitled
 */


#include "Statistic.h"

 /**
  * Statistic implementation
  */
Statistic::Statistic(RecruitmentList* RList) { //


    // 
    Recruitment* Rec;
    string part;
    
    for (int i = 0; i < RList->getNumOfRecruitments(); i++) {
        part = RList->listRecruitments()[i].getPart();
        bool flag = false;

        for (auto iter = partOfGeneralMember.begin(); iter != partOfGeneralMember.end(); iter++) {
            if (part.compare(iter->first.c_str())) {
                flag = true;
            }
        }
        if (flag) {
            partOfGeneralMember[part] += 1;
        }
        else {
            partOfGeneralMember[part] = 1;
        }

    }
    // 

}

/**
 * @return int
 */
void Statistic::getRecruitStatistic() {
    int sumOfpartOfGeneralMember = 0;
    for (auto iter = partOfGeneralMember.begin(); iter != partOfGeneralMember.end(); iter++)
    {
        sumOfpartOfGeneralMember += iter->second;
    }
    cout << sumOfpartOfGeneralMember << endl;
    return;
}

/**
 * @return int
 */
void Statistic::getApplyStatistic() {
    int sumOfnumOfApply = 0;
    for (auto iter = numOfApply.begin(); iter != numOfApply.end(); iter++)
    {
        sumOfnumOfApply += iter->second;
    }
    cout << sumOfnumOfApply << endl;
    return;

}