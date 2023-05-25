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
        string part;
        int numOfDesired;
        string deadline;
        int numOfApplicants=0;
        string companyName;
        int businessNumber;

    public: 
        Recruitment(string part, int numOfDesired, string deadline, string companyName, int businessNumber);
        string getRecruitmentInfo(); // �ش� ä���� ���� ��ȯ
        string getPart() {
            return part;
        }
        string getCompanyName() {
            return companyName;
        }
        string getDeadline() {
            return deadline;
        }
        Recruitment() {

        }
};

#endif //_RECRUITMENT_H