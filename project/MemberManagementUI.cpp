/**
 * Project Untitled
 */


#include "MemberManagementUI.h"

/**
 * MemberManagementUI implementation
 */

// �α����� �����ϸ� �ش� �Լ��� ȣ��ȴ�.
void MemberManagementUI::selectLogIn(Member* mem) {
	// id�� password �Է�.
	string id;
	string password;

	MemberManagement *login = new MemberManagement(); // control class ����.
	bool flag;
	flag=login->checkID(mem, id, password); // Login controller���� ����� �ּҿ� �Էµ� ���̵�,�ּ� ����.
	/* ���� ���߿� �ʿ��� �� ����.
	if (flag == true) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	*/

	return;
}

bool MemberManagementUI::selectLogOut(Member* mem) { // �α׾ƿ�
	MemberManagement *logout = new MemberManagement(); // control class ����.

	logout->logOut(mem);

	bool flag = true;

	return flag; // ���� flag�� true��� main���� �ʱ�ȭ������ �Ѿ��.
}

void MemberManagementUI::selectSignOut(Member* mem, MemberList memList) { // ȸ�� Ż��.
	MemberManagement *signOut = new MemberManagement(); // control class ����.

	signOut->signOut(mem, memList);
}

void MemberManagementUI::selectSignUp(MemberList memList, int flag, string name, int number, string id, string password) { // ȸ�� ����

	MemberManagement *signUp = new MemberManagement(); // control class ����.
	signUp->signUp(flag, name, number, id, password, memList);
}