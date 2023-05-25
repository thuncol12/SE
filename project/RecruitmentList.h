/**
 * Project Untitled
 */


#ifndef _RECRUITMENTLIST_H
#define _RECRUITMENTLIST_H
#pragma once
#include "Recruitment.h"

class RecruitmentList {

    private:
        Recruitment recruitmentList[100];
        int numOfRecruitments=0;
    public: 
    
        void plusRecruitment(Recruitment newRec); // �ش� ä�� ����Ʈ�� ���ο� ä�� ���� �߰�.
    
        Recruitment* listRecruitments(); // �ش� ä�� ����Ʈ�� ä�븮��Ʈ ���� �ּ� ��ȯ.

        int getNumOfRecruitments() {    //ä�� ���� �޾ƿ�.
            return this->numOfRecruitments;
        }

        RecruitmentList();
};

#endif //_RECRUITMENTLIST_H