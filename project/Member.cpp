/**
 * Project Untitled
 */


#include "Member.h"

/**
 * Member implementation
 */


/**
 * @return bool
 */

// 등록한 ID가 기존에 회원에 등록되어져 있는 ID인지 체크해주는 함수.
bool Member::checkingID(string ID, string password) {
    return (this->ID.compare(ID) == 0) && (this->password.compare(password) == 0);
}

// 회원 정보를 없애주는(탈퇴) 함수 
void Member::deleteMember() {
    cout << this->ID;
    return;
}

// 멤버 클래스의 생성자
Member::Member(string ID, string password) {
    this->ID = ID;
    this->password = password;
}

// 멤버 클래스의 기본 생성자
Member::Member() {
}