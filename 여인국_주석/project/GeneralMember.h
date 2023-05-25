/**
 * Project Untitled
 */


#ifndef _GENERALMEMBER_H
#define _GENERALMEMBER_H
#pragma once
#include "Member.h"
#include "Application.h"
#include <iostream>
#include <string>

// 멤버 클래스를 받아와서 일반회원 클래스를 정의한다. 
class GeneralMember: public Member {
    public: 
        // 일반회원의 생성자
        GeneralMember(string name, int number, string id, string password);           // ������
        void addApplication(Application pNewApplication); // ������ �� +1
    
        // Application의 list(참조)를 받아오는 함수
        Application* listApplication();
        
        // 지원회수를 리턴해주는 함수
        int getNumOfApplication() {
            return this->numOfApplication;
        }

        // 일반회원 기본생성자
        GeneralMember() {
        }

    private: 
        int numOfApplication=0;
        Application applicationList[100];
        string name;
        int idNum;
};

#endif //_GENERALMEMBER_H