/**
 * Project Untitled
 */


#include "Recruitment.h"

/**
 * Recruitment implementation
 */


/**
 * @return Recruitment
 */
Recruitment Recruitment::getRecruitmentInfo() {
    String info = "";
    info = this->part + " " + to_string(this->numOfDesired) + " " + this->deadLine; // info = 업무 인원 수 마감일
    return info;
}