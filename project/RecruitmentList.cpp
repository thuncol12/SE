/**
 * Project Untitled
 */


#include "RecruitmentList.h"

/**
 * RecruitmentList implementation
 */


void RecruitmentList::plusRecruitment(Recruitment newRec) { // ���ο� ä�� ���� ���
    // �ش� ä�� ����Ʈ�� ���ο� ä�� ����(newRec) �߰�
    this->recruitmentList[this->numOfRecruitments] = newRec;
    this->numOfRecruitments++;

    return;
}

/**
 * @return Recruitment**
 */

// �ش� ä�븮��Ʈ�� ä�븮��Ʈ ������ ��ȯ�Ѵ�.
Recruitment* RecruitmentList::listRecruitments() {
    return this->recruitmentList;
}

RecruitmentList::RecruitmentList() {

}