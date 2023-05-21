/**
 * Project Untitled
 */


#ifndef _RECRUITMENTLIST_H
#define _RECRUITMENTLIST_H

class RecruitmentList {
public: 
    
Recruitment* addRecruitment();
    
void plusRecruitment();
    
Recruitment** listRecruitments();
private: 
    Recruitment[] recruitmentList;
    int numOfRecruitments;
};

#endif //_RECRUITMENTLIST_H