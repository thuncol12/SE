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
    
void selectShowRecruitmentList(CompanyMember* CM); // ��ϵ� ä�� ���� ���� ��ȸ. �ش� companyMemeber ��ü�� �ּҰ��� ���ڷ� �޴´�.
    
void selectAddRecruitment(CompanyMember* CM, RecruitmentList RList); // ä�� ���� ���. �ش� companyMemeber ��ü�� �ּҰ��� ���ڷ� �޴´�.

void selectRecruitStatistic(RecruitmentList* RList);//ä����� ������ȸ�� ����. 

};

#endif //_RECRUITMENTMANAGEUI_H