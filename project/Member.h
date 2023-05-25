/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H
#pragma once
#include <string>
#include <iostream>
using namespace std;

// 멤버를 정의하는 클래스
class Member {
    public: 

        // 등록한 ID가 기존에 회원에 등록되어져 있는 ID인지 체크해주는 함수.
        bool checkingID(string ID, string password);
    
        // 회원 정보를 없애주는(탈퇴) 함수 
        void deleteMember();

        // 멤버 클래스의 생성자
        Member(string ID, string password);

        // 멤버 클래스의 기본 생성자
        Member();
    private: 
        string ID;
        string password;
};

#endif //_MEMBER_H