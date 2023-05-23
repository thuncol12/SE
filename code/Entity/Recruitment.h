/**
 * Project Untitled
 */


#ifndef _RECRUITMENT_H
#define _RECRUITMENT_H

class Recruitment {
    private:
        String part;
        int numOfDesired;
        String deadLine;
        int numOfApplicants=0;
        String companyName;

    public: 
        Recruitment(String part, int numOfDesired, String deadLine, String companyName) {
            this->part = part;
            this->numOfDesired = numOfDesired;
            this->deadLine = deadLine;
            this->companyName = companyName;
        }
        Recruitment getRecruitmentInfo(); // 해당 채용의 정보 반환

};

#endif //_RECRUITMENT_H