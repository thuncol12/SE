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
        string part; //����
        int numOfDesired; //���� �ο� ��
        string deadline; //������
        int numOfApplicants=0; //������ ��
        string companyName; //ȸ�� �̸�
        int businessNumber; //����� ��ȣ

    public: 
        Recruitment(string part, int numOfDesired, string deadline, string companyName, int businessNumber);  // ä�� ������
        string getRecruitmentInfo(); // �ش� ä���� ���� ��ȯ
        string getPart() { // �ش� ä���� ���� ���� ��ȯ
            return part;
        }
        string getCompanyName() {
            return companyName; // �ش� ä���� ȸ�� �̸� ���� ��ȯ
        }
        string getDeadline() {
            return deadline; // �ش� ä���� ������ ���� ��ȯ
        }
        Recruitment() {

        }
};

#endif //_RECRUITMENT_H