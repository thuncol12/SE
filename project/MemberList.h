/**
 * Project Untitled
 */


#ifndef _MEMBERLIST_H
#define _MEMBERLIST_H
#include "Member.h"

class MemberList {

private:
    Member* memberList[100] = { NULL };
    int numOfMembers = 0;
public:

    void plusMember(Member* newMember); // 해당 채용 리스트에 새로운 채용 정보 추가.

    Member** listMembers(); // 해당 채용 리스트의 채용리스트 변수 주소 반환.

    int getNumOfMembers() {
        return this->numOfMembers;
    }
};

#endif //_RECRUITMENTLIST_H