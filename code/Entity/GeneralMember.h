/**
 * Project Untitled
 */


#ifndef _GENERALMEMBER_H
#define _GENERALMEMBER_H

#include "Member.h"


class GeneralMember: public Member {
public: 
    
void addApplication();
    
Application** listApplication();
private: 
    int numOfApplication;
    Application[] applicationList;
    String name;
    int idNum;
};

#endif //_GENERALMEMBER_H