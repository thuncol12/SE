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
    
    bool flag = mem->checkingID(id, password);
    return flag;
}

void MemberManagement::logOut(Member* mem) {
    return;
}


void MemberManagement::signOut(Member* mem, MemberList memList) {
    int numOfMembers = memList.getNumOfMembers();
    for (int i = 0; i < numOfMembers; i++) {
        Member* temp_mem = memList.listMembers()[i];
        if (mem == temp_mem) {
            mem->deleteMember();
            for (int j = i; j < numOfMembers-1; j++) {
                Member* mem1 = memList.listMembers()[j];
                Member* mem2 = memList.listMembers()[j+1];
                mem1 = mem2;
            }
        }
    }
}


void MemberManagement::signUp(int flag, string companyName, int number, string id, string password, MemberList memList) {
    if (flag == 1) {
        Member* mem = new CompanyMember(companyName, number, id, password);
        int numOfMembers = memList.getNumOfMembers();
        memList.listMembers()[numOfMembers] = mem;
    }
    else if (flag == 2) {
        Member* mem = new GeneralMember(companyName, number, id, password);
        int numOfMembers = memList.getNumOfMembers();
        memList.listMembers()[numOfMembers] = mem;
    }
    else {
        cout << "error(회원 유형 선택 1 or 2)" << endl;
    }
}

MemberManagement::MemberManagement(){}