/**
 * Project Untitled
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"


class CompanyMember: public Member {
private: 
    String companyName;
    int businessNumber;
    RecruitmentList recruitmentList;
};

#endif //_COMPANYMEMBER_H