/**
 * Project Untitled
 */


#include "MemberManagementUI.h"

/**
 * MemberManagementUI implementation
 */


void MemberManagementUI::SelectLogIn(Member* mem) {
	// id�� password �Է�.
	string id;
	string password;

	cin >> id;
	cin >> password;

	MemberManagement login = new MemberManagement();
	bool flag;
	flag=login.checkID(mem, id, password); // Login controller���� ����� �ּҿ� �Էµ� ���̵�,�ּ� ����.

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
	MemberManagement logout = new MemberManagement();

	logout.logOut(mem);

	bool flag = true;

	return flag; // ���� flag�� true��� main���� �ʱ�ȭ������ �Ѿ��.
}

void MemberManagementUI::selectSignOut(Member* mem, Member** memList) { // ȸ�� Ż��.
	MemberManagement signOut = new MemberManagement();

	signOut.signOut(mem, memList);
}

void MemberManagementUI::selectSignUp(Member** memList) { // ȸ�� ����
	int flag;
	string name;
	int number;
	string id;
	string password;

	cin >> flag;
	cin >> name;
	cin >> number;
	cin >> id;
	cin >> password;

	MemberManagement signUp = new MemberManagement();
	signUp.signUp(flag, name, number, id, password, memList);
}