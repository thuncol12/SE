/**
 * Project Untitled
 */


#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H
#pragma once
#include "Member.h"
#include "RecruitmentList.h"
#include <string>

// 멤버 클래스를 받아와서 회사회원 클래스를 정의한다. 
class CompanyMember: public Member { 
    private: 
        string companyName;
        int businessNumber;
        RecruitmentList recruitmentList;

    public:
        // 회사회원 클래스의 생성자
        CompanyMember(string companyName, int businessNumber, string id, string password); // ������
        RecruitmentList getRecruitmentList() {
            return recruitmentList;
        }
        // 회사이름 변수를 리턴한다.
        string getCompanyName() {
            return companyName;
        }
        // 회사회원 클래스의 기본 생성자
        CompanyMember(){}
};

#endif //_COMPANYMEMBER_H