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
    Application(string companyName, int businessNumber, string part, string deadline); // ������

    void getApplicationDetails();
    
    void cancelApplication();

private: 
    string companyName; //ȸ���̸�
    int businessNumber; //����ڹ�ȣ
    string part; //����
    string deadline; //��û������
    int numOfApplicants=0; //�ο���
    bool cancel;
};

#endif //_APPLICATION_H