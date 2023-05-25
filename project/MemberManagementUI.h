/**
 * Project Untitled
 */
#include "Member.h"
#include <string>
#include <iostream>


#ifndef _MEMBERMANAGEMENTUI_H
#define _MEMBERMANAGEMENTUI_H

using namespace std;

class MemberManagementUI {
public: 
    
void selectLogIn(Member* mem);
                  
bool selectLogOut(Member* mem);
                
void selectSignOut(Member* mem, Member** memList);
            
void selectSignUp(Member** memList);
};

#endif //_MEMBERMANAGEMENTUI_H