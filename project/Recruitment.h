/**
 * Project Untitled
 */


#ifndef _RECRUITMENT_H
#define _RECRUITMENT_H
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Recruitment {
    private:
        string part; //업무
        int numOfDesired; //마감 인원 수
        string deadline; //마감일
        int numOfApplicants=0; //지원자 수
        string companyName; //회사 이름
        int businessNumber; //사업자 번호

    public: 
        Recruitment(string part, int numOfDesired, string deadline, string companyName, int businessNumber);  // 채용 생성자
        string getRecruitmentInfo(); // 해당 채용의 정보 반환
        string getPart() { // 해당 채용의 업무 정보 반환
            return part;
        }
        string getCompanyName() {
            return companyName; // 해당 채용의 회사 이름 정보 반환
        }
        string getDeadline() {
            return deadline; // 해당 채용의 마감일 정보 반환
        }
        Recruitment() {

        }
};

#endif //_RECRUITMENT_H