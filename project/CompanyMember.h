/**
 * Project Untitled
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H
#pragma once
#include "Member.h"
#include "RecruitmentList.h"
#include <string>

class CompanyMember: public Member {
    private: 
        string companyName;
        int businessNumber;
        RecruitmentList recruitmentList;

    public:
        CompanyMember(string companyName, int businessNumber, string id, string password); // »ý¼ºÀÚ
        RecruitmentList getRecruitmentList() {
            return recruitmentList;
        }
        string getCompanyName() {
            return companyName;
        }
        CompanyMember(){}
};

#endif //_COMPANYMEMBER_H