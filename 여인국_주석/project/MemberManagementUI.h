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
    
void selectLogIn(Member* mem);
                  
bool selectLogOut(Member* mem);
                
void selectSignOut(Member* mem, MemberList memList);
            
void selectSignUp(MemberList memList, int flag, string name, int number, string id, string password);
};

#endif //_MEMBERMANAGEMENTUI_H