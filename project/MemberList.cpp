/**
 * Project Untitled
 */


#include "MemberList.h"

 /**
  * RecruitmentList implementation
  */


void MemberList::plusMember(Member* newMember) { // ���ο� ä�� ���� ���
    // �ش� ä�� ����Ʈ�� ä�� ���� �߰�
    this->memberList[this->numOfMembers] = newMember;
    this->numOfMembers++;

    return;
}

/**
 * @return Recruitment**
 */
Member** MemberList::listMembers() {
    return this->memberList;
}