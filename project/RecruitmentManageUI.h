/**
 * Project Untitled
 */

#ifndef _RECRUITMENTMANAGEUI_H
#define _RECRUITMENTMANAGEUI_H
#pragma once
#include "RecruitmentManage.h"
#include "Recruitment.h"
#include "CompanyMember.h"

class RecruitmentManageUI {
public: 
    
void selectShowRecruitmentList(CompanyMember* CM); // 등록된 채용 정보 내역 조회. 해당 companyMemeber 객체의 주소값을 인자로 받는다.
    
void selectAddRecruitment(CompanyMember* CM, RecruitmentList RList); // 채용 정보 등록. 해당 companyMemeber 객체의 주소값을 인자로 받는다.

void selectRecruitStatistic(RecruitmentList* RList);//채용통계 정보조회를 선택. 

};

#endif //_RECRUITMENTMANAGEUI_H