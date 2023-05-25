/**
 * Project Untitled
 */


#include "MemberManagementUI.h"

/**
 * MemberManagementUI implementation
 */


void MemberManagementUI::selectLogIn(Member* mem) {
	// id와 password 입력.
	string id;
	string password;

	MemberManagement *login = new MemberManagement();
	bool flag;
	flag=login->checkID(mem, id, password); // Login controller에게 멤버의 주소와 입력된 아이디,주소 전달.
	/* 만약 나중에 필요할 시 수정.
	if (flag == true) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	*/

	return;
}

bool MemberManagementUI::selectLogOut(Member* mem) { // 로그아웃
	MemberManagement *logout = new MemberManagement();

	logout->logOut(mem);

	bool flag = true;

	return flag; // 만약 flag가 true라면 main에서 초기화면으로 넘어간다.
}

void MemberManagementUI::selectSignOut(Member* mem, MemberList memList) { // 회원 탈퇴.
	MemberManagement *signOut = new MemberManagement();

	signOut->signOut(mem, memList);
}

void MemberManagementUI::selectSignUp(MemberList memList, int flag, string name, int number, string id, string password) { // 회원 가입

	MemberManagement *signUp = new MemberManagement();
	signUp->signUp(flag, name, number, id, password, memList);
}