/**
 * Project Untitled
 */


#ifndef _MEMBERMANAGEMENT_H
#define _MEMBERMANAGEMENT_H
#pragma once
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Member.h"
#include "MemberList.h"


using namespace std;

class MemberManagement {
public: 
    MemberManagement();

bool checkID(Member* mem, string id, string password); // mem�� �´��� üũ�Ѵ�.
        
void logOut(Member* mem); // mem�� �α׾ƿ��� �����ϸ� �ش� �Լ��� ȣ��ȴ�.
        
void signOut(Member* mem, MemberList memList); // ȸ���� ȸ��Ż�� �����ϸ� �ش� �Լ��� ȣ��ȴ�. �̶�, �Ű������� ��� �ּҿ� �ý����� ���� �ִ� �������Ʈ�� �Ѱ��ش�.
        
void signUp(int flag, string name, int number, string id, string password, MemberList memList); // ��ȸ���� ȸ�������� �����ϸ� �ش� �Լ��� ȣ��ȴ�. flag: 1�� ȸ��ȸ��, 2�� �Ϲ�ȸ��, numer: ����� Ȥ�� �ֹι�ȣ, memList: �ý����� �������Ʈ�� �ش� ȸ�� �߰��� ���� ����.
};

#endif //_MEMBERMANAGEMENT_H