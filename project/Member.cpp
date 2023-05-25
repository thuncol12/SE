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
bool Member::checkingID(string ID, string password) {
    return (this->ID.compare(ID) == 0) && (this->password.compare(password) == 0);
}

void Member::deleteMember() {
    cout << this->ID;
    return;
}

Member::Member(string ID, string password) {
    this->ID = ID;
    this->password = password;
}

Member::Member() {
}