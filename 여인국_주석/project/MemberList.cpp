/**
 * Project Untitled
 */


#include "MemberList.h"

 /**
  * RecruitmentList implementation
  */

// 멤버 객체를 하나 추가해주는 함수(numOfMembers로 객체의 개수를 표시)
void MemberList::plusMember(Member* newMember) {
    this->memberList[this->numOfMembers] = newMember;
    this->numOfMembers++;

    return;
}

/**
 * @return Recruitment**
 */

// 멤버 리스트를 리턴해주는 함수
Member** MemberList::listMembers() {
    return this->memberList;
}