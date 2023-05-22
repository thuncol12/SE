/**
 * Project Untitled
 */


#ifndef _RECRUITMENT_H
#define _RECRUITMENT_H

class Recruitment {
public: 
    
Recruitment getRecruitment();
private: 
    String part;
    int numOfDesired;
    time_t deadLine;
    int numOfApplicants;
    String companyName;
};

#endif //_RECRUITMENT_H