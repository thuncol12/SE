/**
 * Project Untitled
 */


#include "Statistic.h"

 /**
  * Statistic implementation
  */
Statistic::Statistic(RecruitmentList* RList) { //채용 리스트에서 받아온 값을 토대로 통계를 냄.


    // 
    Recruitment* Rec;
    string part;
    
    //등록된 채용정보 통계
    for (int i = 0; i < RList->getNumOfRecruitments(); i++) {
        part = RList->listRecruitments()[i].getPart();
        bool flag = false;

        //업무별로 정렬함. flag의 값에 따라 정렬함.
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
//채용 통계 정보를 받아옴.
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
//지원 통계 정보를 받아옴.
void Statistic::getApplyStatistic() {
    int sumOfnumOfApply = 0;
    for (auto iter = numOfApply.begin(); iter != numOfApply.end(); iter++)
    {
        sumOfnumOfApply += iter->second;
    }
    cout << sumOfnumOfApply << endl;
    return;

}