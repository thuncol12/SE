/**
 * Project Untitled
 */

#ifndef _RECRUITMENTLIST_H
#define _RECRUITMENTLIST_H
#include "Recruitment.h"

class RecruitmentList
{

private:
  Recruitment recruitmentList[32];
  int numOfRecruitments = 0;

public:
  void plusRecruitment(Recruitment *newRec); // �ش� ä�� ����Ʈ�� ���ο� ä�� ���� �߰�.

  Recruitment **listRecruitments(); // �ش� ä�� ����Ʈ�� ä�븮��Ʈ ���� �ּ� ��ȯ.
};

#endif //_RECRUITMENTLIST_H