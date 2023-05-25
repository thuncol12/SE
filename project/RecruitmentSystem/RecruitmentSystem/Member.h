/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

#include <string>

class Member {
    public: 
    
        bool checkingID(string ID, string password);
    
        void deleteMember();

        Member(string ID, string password);

    private: 
        string ID;
        string password;
};

#endif //_MEMBER_H