/**
 * Project Untitled
 */


#include "Recruitment.h"

/**
 * Recruitment implementation
 */
Recruitment::Recruitment(string part, int numOfDesired, string deadline, string companyName, int businessNumber) {
    this->part = part;
    this->numOfDesired = numOfDesired;
    this->deadline = deadline;
    this->companyName = companyName;
    this->businessNumber = businessNumber;
}

/**
 * @return Recruitment
 */
Recruitment Recruitment::getRecruitmentInfo() {
    string info = "";
    info = this->part + " " + to_string(this->numOfDesired) + " " + this->deadline; // info = 업무 인원 수 마감일
    return info;
}