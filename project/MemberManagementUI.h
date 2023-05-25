/**
 * Project Untitled
 */



#ifndef _MEMBERMANAGEMENTUI_H
#define _MEMBERMANAGEMENTUI_H
#pragma once
#include "Member.h"
#include <string>
#include <iostream>
#include "MemberList.h"
#include "MemberManagement.h"
using namespace std;

class MemberManagementUI {
public: 
    
void selectLogIn(Member* mem); // 로그인을 선택하면 해당 함수가 호출된다.
                  
bool selectLogOut(Member* mem); // 로그아웃
                
void selectSignOut(Member* mem, MemberList memList); // 회원 탈퇴
            
void selectSignUp(MemberList memList, int flag, string name, int number, string id, string password); // 회원 가입
};

#endif //_MEMBERMANAGEMENTUI_H