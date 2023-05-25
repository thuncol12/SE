/**
 * Project Untitled
 */


#include "GeneralMember.h"

/**
 * GeneralMember implementation
 */

GeneralMember::GeneralMember(string name, int idNum) {
    this->name = name;
    this->idNum = idNum;
    this->numOfApplication = 0;

}

void GeneralMember::addApplication(Application* pNewApplication)
{
    this->applicationList[numOfApplication++] = pNewApplication;
    return;
}


/**
 * @return Application**
 */
Application** GeneralMember::listApplication() {
    return this->*applicationList;
}