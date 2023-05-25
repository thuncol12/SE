/**
 * Project Untitled
 */


#include "Recruitment.h"

/**
 * Recruitment implementation
 */

// 채용 생성자, part: 업무, numOfDesired: 마감인원 수, deadline: 마감일, companyName: 회사이름, businessNumber: 사업자번호
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

// 채용 정보 리턴
string Recruitment::getRecruitmentInfo() {
    string info = "";
    info = this->part + " " + to_string(this->numOfDesired) + " " + this->deadline; // info = 업무 인원 수 마감일
    return info;
}