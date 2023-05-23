/**
 * Project Untitled
 */


#include "Statistic.h"

/**
 * Statistic implementation
 */
Statistic::Statistic(RecruitmentList* RList) { // 시스템의 채용 리스트를 인자로 받는다.


    // 업무별 지원자 수 map 만들기
    Recruitment* Rec;
    string part;

    for (int i = 0; i < RList.numOfRecruitments; ++) {
        Rec = RList.recruitmentList[i];
        part = Rec.part;
        bool flag = false;

        for (auto iter = partOfGeneralMember.begin(); iter != partOfGeneralMember.end(); iter++) {
            if part.compare(Iter->first.c_str()) {
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
    // 업무별 지원자 수 map 만들기 끝

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

void Statistic::addRecruitStatistic() {

}

void Statistic::addApplyStatistic() {

}