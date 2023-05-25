/**
 * Project Untitled
 */


#include "RecruitmentList.h"

/**
 * RecruitmentList implementation
 */


void RecruitmentList::plusRecruitment(Recruitment newRec) { // 새로운 채용 정보 등록
    // 해당 채용 리스트에 채용 정보 추가
    this->recruitmentList[this->numOfRecruitments] = newRec;
    this->numOfRecruitments++;

    return;
}

/**
 * @return Recruitment**
 */
Recruitment* RecruitmentList::listRecruitments() {
    return this->recruitmentList;
}

RecruitmentList::RecruitmentList() {

}