/**
 * Project Untitled
 */


#include "CompanyMember.h"

/**
 * CompanyMember implementation
 */

CompanyMember::CompanyMember(string companyName, int businessNumber) {
	this->companyName = companyName;
	this->businessNumber = businessNumber;
	this->recruitmentList = new RecruitmentList();
}