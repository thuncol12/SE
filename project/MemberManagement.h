/**
 * Project Untitled
 */


#ifndef _MEMBERMANAGEMENT_H
#define _MEMBERMANAGEMENT_H
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Member.h"
#include "MemberList.h"


using namespace std;

class MemberManagement {
public: 
    MemberManagement();

bool checkID(Member* mem, string id, string password);
        
void logOut(Member* mem);
        
void signOut(Member* mem, MemberList memList);
        
void signUp(int flag, string name, int number, string id, string password, MemberList memList);
};

#endif //_MEMBERMANAGEMENT_H