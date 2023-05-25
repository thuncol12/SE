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

    void plusMember(Member* newMember); // �ش� ä�� ����Ʈ�� ���ο� ä�� ���� �߰�.

    Member** listMembers(); // �ش� ä�� ����Ʈ�� ä�븮��Ʈ ���� �ּ� ��ȯ.

    int getNumOfMembers() {
        return this->numOfMembers;
    }
};

#endif //_RECRUITMENTLIST_H