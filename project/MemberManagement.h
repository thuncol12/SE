/**
 * Project Untitled
 */
#include "Member.h"

#ifndef _MEMBERMANAGEMENT_H
#define _MEMBERMANAGEMENT_H


using namespace std;

class MemberManagement {
public: 
    MemberManagement();

bool checkID(Member* mem, string id, string password);
        
void logOut(Member* mem);
        
void signOut(Member* mem, Member** memList);
        
void signUp(int flag, string name, int number, string id, string password, Member** memList);
};

#endif //_MEMBERMANAGEMENT_H