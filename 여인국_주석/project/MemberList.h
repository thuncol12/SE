/**
 * Project Untitled
 */


#ifndef _MEMBERLIST_H
#define _MEMBERLIST_H
#pragma once
#include "Member.h"

// 멤버리스트를 정의해주는 클래스
class MemberList {

private:
    // 멤버클래스를 저장하는 배열
    Member* memberList[100] = { NULL };
    // 멤버객체의 총 개수를 알려주는 변수
    int numOfMembers = 0;
public:
    // 멤버 객체를 하나 추가해주는 함수(numOfMembers로 객체의 개수를 표시)
    void plusMember(Member* newMember);
    // 멤버 리스트를 리턴해주는 함수
    Member** listMembers();
    // 멤버의 총 개수를 리턴해주는 함수
    int getNumOfMembers() {
        return this->numOfMembers;
    }
};

#endif //_RECRUITMENTLIST_H