/**
 * Project Untitled
 */


#include "RecruitmentList.h"

/**
 * RecruitmentList implementation
 */


void RecruitmentList::plusRecruitment(Recruitment newRec) { // ���ο� ä�� ���� ���
    // �ش� ä�� ����Ʈ�� ä�� ���� �߰�
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