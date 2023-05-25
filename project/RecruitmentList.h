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
    
        void plusRecruitment(Recruitment newRec); // 해당 채용 리스트에 새로운 채용 정보 추가.
    
        Recruitment* listRecruitments(); // 해당 채용 리스트의 채용리스트 변수 주소 반환.

        int getNumOfRecruitments() {    //채용 수를 받아옴.
            return this->numOfRecruitments;
        }

        RecruitmentList();
};

#endif //_RECRUITMENTLIST_H