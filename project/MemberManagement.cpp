/**
 * Project Untitled
 */


#include "MemberManagement.h"

/**
 * MemberManagement implementation
 */


/**
 * @return bool
 */
bool MemberManagement::checkID(Member* mem, string id, string password) {
    bool flag = ref.CheckingID(id, password);
    return flag;
}

void MemberManagement::logOut(Member* mem) {
    return;
}


void MemberManagement::signOut(Member* mem, Member** memList) {
    
    for (int i = 0; i < numOfMembers; i++) {
        if (mem == memList[i]) {
            mem.~Member();
            for (int j = i; j < numOfMembers-1; j++) {
                memList[j] = memList[j + 1];
            }
        }
    }
}


void MemberManagement::signUp(int flag, string name, int number, string id, string password, Member** memList) {
    if (flag == 1) {
        Member mem = new CompanyMember(name, number, id, password);
        memList[numOfMembers++] = mem;
    }
    else if (flag == 2) {
        Member mem = new GeneralMember(name, number, id, password);
        memList[numOfMembers++] = mem;
    }
    else {
        cout << "error(ȸ�� ���� ���� 1 or 2)" << endl;
    }
}