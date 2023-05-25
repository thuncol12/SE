/**
 * Project Untitled
 */


#include "MemberManagement.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

/**
 * MemberManagement implementation
 */


/**
 * @return bool
 */
bool MemberManagement::checkID(Member* mem, string id, string password) {
    
    bool flag = mem->checkingID(id, password);
    return flag;
}

void MemberManagement::logOut(Member* mem) {
    return;
}


void MemberManagement::signOut(Member* mem, Member** memList) {
    
    for (int i = 0; i < numOfMembers; i++) {
        if (mem == memList[i]) {
            mem->deleteMember();
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
        cout << "error(회원 유형 선택 1 or 2)" << endl;
    }
}

MemberManagement::MemberManagement(){}