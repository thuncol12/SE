/**
 * Project Untitled
 */


#ifndef _RECRUITMENTMANAGE_H
#define _RECRUITMENTMANAGE_H
#pragma once
#include <string>
#include <time.h>
#include "RecruitmentList.h"
#include "CompanyMember.h"
#include "Statistic.h"

class RecruitmentManage {
public: 
    
void showRecruitmentList(CompanyMember* CM); // 등록된 채용 정보 내역 조회.
    
void addNewRecruitment(CompanyMember* CM, RecruitmentList RList); // 회사 회원의 채용 정보 등록.

void searchRecruitStatistic(RecruitmentList* RList); //채용 통계 정보를 조회.
};

#endif //_RECRUITMENTMANAGE_H