/**
 * Project Untitled
 */


#include "MemberList.h"

 /**
  * RecruitmentList implementation
  */


void MemberList::plusMember(Member* newMember) { // 새로운 채용 정보 등록
    // 해당 채용 리스트에 채용 정보 추가
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