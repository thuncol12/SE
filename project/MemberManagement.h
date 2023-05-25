/**
 * Project Untitled
 */


#ifndef _MEMBERMANAGEMENT_H
#define _MEMBERMANAGEMENT_H
#pragma once
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Member.h"
#include "MemberList.h"


using namespace std;

class MemberManagement {
public: 
    MemberManagement();

bool checkID(Member* mem, string id, string password); // mem이 맞는지 체크한다.
        
void logOut(Member* mem); // mem이 로그아웃을 선택하면 해당 함수가 호출된다.
        
void signOut(Member* mem, MemberList memList); // 회원이 회원탈퇴를 선택하면 해당 함수가 호출된다. 이때, 매개변수로 멤버 주소와 시스템이 갖고 있는 멤버리스트를 넘겨준다.
        
void signUp(int flag, string name, int number, string id, string password, MemberList memList); // 비회원이 회원가입을 선택하면 해당 함수가 호출된다. flag: 1은 회사회원, 2는 일반회원, numer: 사업자 혹은 주민번호, memList: 시스템의 멤버리스트에 해당 회원 추가를 위해 전달.
};

#endif //_MEMBERMANAGEMENT_H