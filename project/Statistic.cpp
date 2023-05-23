/**
 * Project Untitled
 */


#include "Statistic.h"

/**
 * Statistic implementation
 */
Statistic::Statistic(RecruitmentList* RList) { // �ý����� ä�� ����Ʈ�� ���ڷ� �޴´�.


    // ������ ������ �� map �����
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
    // ������ ������ �� map ����� ��

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