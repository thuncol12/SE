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
    
void showRecruitmentList(companyMember* CM); // ��ϵ� ä�� ���� ���� ��ȸ.
    
void addNewRecruitment(companyMember* CM); // ȸ�� ȸ���� ä�� ���� ���.
    
void showClosedRecruitmentList();
    
void showSearchResult();
    
void addNewApplication();
};

#endif //_RECRUITMENTMANAGE_H