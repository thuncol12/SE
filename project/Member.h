/**
 * Project Untitled
 */
#include <string>
#include <iostream>

#ifndef _MEMBER_H
#define _MEMBER_H

using namespace std;
class Member {
    public: 
    
        bool checkingID(string ID, string password);
    
        void deleteMember();

        Member(string ID, string password);
        Member();
    private: 
        string ID;
        string password;
};

#endif //_MEMBER_H