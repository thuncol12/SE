/**
 * Project Untitled
 */


#include "GeneralMember.h"

/**
 * GeneralMember implementation
 */

// 일반회원 클래스의 생성자
GeneralMember::GeneralMember(string name, int idNum, string id, string password) {
    this->name = name;
    this->idNum = idNum;
    this->numOfApplication = 0;
    Member(id, password);
}

// 새로운 Application 객체를 만드는 함수
void GeneralMember::addApplication(Application pNewApplication)
{
    this->applicationList[numOfApplication++] = pNewApplication;
    return;
}


/**
 * @return Application**
 */

// Application의 list(참조)를 받아오는 함수
Application* GeneralMember::listApplication() {
    return this->applicationList;
}