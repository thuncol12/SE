/**
 * Project Untitled
 */


#ifndef _APPLICATION_H
#define _APPLICATION_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
#include "Recruitment.h"
using namespace std;

class Application {
public: 
    Application(string companyName, int businessNumber, string part, string deadline); // 생성자

    void getApplicationDetails();
    
    void cancelApplication();

private: 
    string companyName; //회사이름
    int businessNumber; //사업자번호
    string part; //업무
    string deadline; //신청마감일
    int numOfApplicants=0; //인원수
    bool cancel;
};

#endif //_APPLICATION_H