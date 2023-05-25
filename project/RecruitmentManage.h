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
    
void showRecruitmentList(CompanyMember* CM); // ��ϵ� ä�� ���� ���� ��ȸ.
    
void addNewRecruitment(CompanyMember* CM, RecruitmentList RList); // ȸ�� ȸ���� ä�� ���� ���.

void searchRecruitStatistic(RecruitmentList* RList); //ä�� ��� ������ ��ȸ.
};

#endif //_RECRUITMENTMANAGE_H