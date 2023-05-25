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

 // 회원이 맞는지 체크를 한다. 만약 id와 비밀번호가 맞다면 true를 리턴한다.
bool MemberManagement::checkID(Member* mem, string id, string password) { 
    
    bool flag = mem->checkingID(id, password); // 만약 해당 회원의 id와 password가 맞으면 flag에 true를 넣는다.
    return flag;
}

// 회원이 로그아웃을 선택하면 해당 함수가 호출된다.
void MemberManagement::logOut(Member* mem) {
    return;
}


// 회원이 회원탈퇴를 선택하면 해당 함수가 호출된다. 이때, 매개변수로 멤버 주소와 시스템이 갖고 있는 멤버리스트를 넘겨준다.
void MemberManagement::signOut(Member* mem, MemberList memList) {
    int numOfMembers = memList.getNumOfMembers(); // 시스템의 멤버리스트의 멤버수를 갖고 온다.
    for (int i = 0; i < numOfMembers; i++) {
        Member* temp_mem = memList.listMembers()[i]; 
        // 시스템의 멤버리스트에서 해당 회원의 정보를 삭제하고, 리스트를 재정렬한다.
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


// 비회원이 회원가입을 선택하면 해당 함수가 호출된다. flag: 1은 회사회원, 2는 일반회원, numer: 사업자 혹은 주민번호, memList: 시스템의 멤버리스트에 해당 회원 추가를 위해 전달.
void MemberManagement::signUp(int flag, string companyName, int number, string id, string password, MemberList memList) {
    // 회사 회원 추가
    if (flag == 1) {
        Member* mem = new CompanyMember(companyName, number, id, password);
        int numOfMembers = memList.getNumOfMembers();
        memList.listMembers()[numOfMembers] = mem;
    }
    // 일반 회원 추가
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