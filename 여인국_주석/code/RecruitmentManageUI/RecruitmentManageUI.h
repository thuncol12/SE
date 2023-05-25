/**
 * Project Untitled
 */

#ifndef _RECRUITMENTMANAGEUI_H
#define _RECRUITMENTMANAGEUI_H

#include "RecruitmentManage.h"
#include "Recruitment.h"
#include "CompanyMember.h"

class RecruitmentManageUI {
public: 
    
void selectShowRecruitmentList(companyMember* CM); // 등록된 채용 정보 내역 조회. 해당 companyMemeber 객체의 주소값을 인자로 받는다.
    
void selectAddRecruitment(companyMember* CM); // 채용 정보 등록. 해당 companyMemeber 객체의 주소값을 인자로 받는다.
    
void selectClosedRecruitmentList();
    
void selectRecruitmentSearch();
    
RecruitmentList* enterCompanyName();
    
void selectARecruitment();
    
void applyForRecruitment();
};

#endif //_RECRUITMENTMANAGEUI_H