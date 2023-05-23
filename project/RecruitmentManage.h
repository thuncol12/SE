/**
 * Project Untitled
 */


#ifndef _RECRUITMENTMANAGE_H
#define _RECRUITMENTMANAGE_H

#include <string>
#include <time.h>
#include "RecruitmentList.h"

class RecruitmentManage {
public: 
    
void showRecruitmentList(companyMember* CM); // 등록된 채용 정보 내역 조회.
    
void addNewRecruitment(companyMember* CM); // 회사 회원의 채용 정보 등록.
    
void showClosedRecruitmentList();
    
void showSearchResult();
    
void addNewApplication();
};

#endif //_RECRUITMENTMANAGE_H