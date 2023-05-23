/**
 * Project Untitled
 */


#ifndef _GENERALMEMBER_H
#define _GENERALMEMBER_H

#include "Member.h"
#include "Application.h"
#include <iostream>
#include <string>


class GeneralMember: public Member {
    public: 
        
        GeneralMember(string name, int idNum);           // 생성자
        void addApplication(Application* pNewApplication); // 지원서 수 +1
    
        Application** listApplication();

    private: 
        int numOfApplication=0;
        Application applicationList[];
        string name;
        int idNum;
};

#endif //_GENERALMEMBER_H