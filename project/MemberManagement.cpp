/**
 * Project Untitled
 */


#include "MemberManagement.h"

/**
 * MemberManagement implementation
 */


/**
 * @return bool
 */

 // ȸ���� �´��� üũ�� �Ѵ�. ���� id�� ��й�ȣ�� �´ٸ� true�� �����Ѵ�.
bool MemberManagement::checkID(Member* mem, string id, string password) { 
    
    bool flag = mem->checkingID(id, password); // ���� �ش� ȸ���� id�� password�� ������ flag�� true�� �ִ´�.
    return flag;
}

// ȸ���� �α׾ƿ��� �����ϸ� �ش� �Լ��� ȣ��ȴ�.
void MemberManagement::logOut(Member* mem) {
    return;
}


// ȸ���� ȸ��Ż�� �����ϸ� �ش� �Լ��� ȣ��ȴ�. �̶�, �Ű������� ��� �ּҿ� �ý����� ���� �ִ� �������Ʈ�� �Ѱ��ش�.
void MemberManagement::signOut(Member* mem, MemberList memList) {
    int numOfMembers = memList.getNumOfMembers(); // �ý����� �������Ʈ�� ������� ���� �´�.
    for (int i = 0; i < numOfMembers; i++) {
        Member* temp_mem = memList.listMembers()[i]; 
        // �ý����� �������Ʈ���� �ش� ȸ���� ������ �����ϰ�, ����Ʈ�� �������Ѵ�.
        if (mem == temp_mem) { 
            mem->deleteMember();
            for (int j = i; j < numOfMembers-1; j++) {
                Member* mem1 = memList.listMembers()[j];
                Member* mem2 = memList.listMembers()[j+1];
                mem1 = mem2;
            }
        }
    }
}


// ��ȸ���� ȸ�������� �����ϸ� �ش� �Լ��� ȣ��ȴ�. flag: 1�� ȸ��ȸ��, 2�� �Ϲ�ȸ��, numer: ����� Ȥ�� �ֹι�ȣ, memList: �ý����� �������Ʈ�� �ش� ȸ�� �߰��� ���� ����.
void MemberManagement::signUp(int flag, string companyName, int number, string id, string password, MemberList memList) {
    // ȸ�� ȸ�� �߰�
    if (flag == 1) {
        Member* mem = new CompanyMember(companyName, number, id, password);
        int numOfMembers = memList.getNumOfMembers();
        memList.listMembers()[numOfMembers] = mem;
    }
    // �Ϲ� ȸ�� �߰�
    else if (flag == 2) {
        Member* mem = new GeneralMember(companyName, number, id, password);
        int numOfMembers = memList.getNumOfMembers();
        memList.listMembers()[numOfMembers] = mem;
    }
    else {
        cout << "error(ȸ�� ���� ���� 1 or 2)" << endl;
    }
}

MemberManagement::MemberManagement(){}