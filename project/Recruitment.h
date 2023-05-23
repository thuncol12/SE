/**
 * Project Untitled
 */


#ifndef _RECRUITMENT_H
#define _RECRUITMENT_H
#include <string>

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
        Recruitment getRecruitmentInfo(); // 해당 채용의 정보 반환

};

#endif //_RECRUITMENT_H