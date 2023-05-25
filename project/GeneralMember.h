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
        
        GeneralMember(string name, int number, string id, string password);           // ������
        void addApplication(Application* pNewApplication); // ������ �� +1
    
        Application** listApplication();

        int getNumOfApplication() {
            return this->numOfApplication;
        }
    private: 
        int numOfApplication=0;
        Application* applicationList[100];
        string name;
        int idNum;
};

#endif //_GENERALMEMBER_H