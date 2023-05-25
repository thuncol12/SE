/**
 * Project Untitled
 */


#include "CompanyMember.h"

/**
 * CompanyMember implementation
 */

CompanyMember::CompanyMember(string companyName, int businessNumber, string id, string password) {
	this->companyName = companyName;
	this->businessNumber = businessNumber;
	this->recruitmentList = RecruitmentList();
	Member(id, password);
}