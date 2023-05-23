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
    
void selectShowRecruitmentList(companyMember* CM); // ��ϵ� ä�� ���� ���� ��ȸ. �ش� companyMemeber ��ü�� �ּҰ��� ���ڷ� �޴´�.
    
void selectAddRecruitment(companyMember* CM); // ä�� ���� ���. �ش� companyMemeber ��ü�� �ּҰ��� ���ڷ� �޴´�.
    
void selectClosedRecruitmentList();
    
void selectRecruitmentSearch();
    
RecruitmentList* enterCompanyName();
    
void selectARecruitment();
    
void applyForRecruitment();
};

#endif //_RECRUITMENTMANAGEUI_H