/**
 * Project Untitled
 */


#include "Recruitment.h"

/**
 * Recruitment implementation
 */

// ä�� ������, part: ����, numOfDesired: �����ο� ��, deadline: ������, companyName: ȸ���̸�, businessNumber: ����ڹ�ȣ
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

// ä�� ���� ����
string Recruitment::getRecruitmentInfo() {
    string info = "";
    info = this->part + " " + to_string(this->numOfDesired) + " " + this->deadline; // info = ���� �ο� �� ������
    return info;
}