/**
 * Project Untitled
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"
#include "RecruitmentList.h"
#include <string>

class CompanyMember: public Member {
    private: 
        string companyName;
        int businessNumber;
        RecruitmentList recruitmentList;

    public:
        CompanyMember(string companyName, int businessNumber); // »ý¼ºÀÚ
};

#endif //_COMPANYMEMBER_H