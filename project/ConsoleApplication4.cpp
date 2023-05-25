﻿// 헤더 선언
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include<fstream>
#include<cstdio>
#include <string>
#include "Application.h"
#include "ApplicationManagement.h"
#include "ApplicationManageUI.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Member.h"
#include "MemberManagement.h"
#include "MemberManagementUI.h"
#include "Recruitment.h"
#include "RecruitmentList.h"
#include "RecruitmentManage.h"
#include "RecruitmentManageUI.h"
#include "Statistic.h"
#include "MemberList.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// 함수 선언
void doTask(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void join(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func12(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func21(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func22(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func31(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func32(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func41(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func42(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func43(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func44(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void func51(RecruitmentList system_RecruitmentList, MemberList system_MemberList);
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;

int main()
{
	static int numOfMembers = 0; // 시스템에 등록되어 있는 멤버 수
	// 파일 입출력을 위한 초기화
	in_fp = fopen(INPUT_FILE_NAME, "r+");
	out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	RecruitmentList system_RecruitmentList = RecruitmentList();
	MemberList system_MemberList = MemberList(); // 이상한 코드. 추후 수정.

	doTask(system_RecruitmentList, system_MemberList);
	return 0;
}

void doTask(RecruitmentList system_RecruitmentList, MemberList system_MemberList)
{
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while(!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:   // "1.1. 회원가입“ 메뉴 부분
			{
				// join() 함수에서 해당 기능 수행
				join(system_RecruitmentList, system_MemberList);
				break;
			}
			case 2:	// 1.2. 회원탈퇴
			{
				func12(system_RecruitmentList, system_MemberList);
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:	// 2.1. 로그인
			{
				func21(system_RecruitmentList, system_MemberList);
				break;
			}
			case 2:	// 2.2. 로그아웃
			{
				func22(system_RecruitmentList, system_MemberList);
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
			case 1:	// 3.1. 채용 정보 등록
			{
				func31(system_RecruitmentList, system_MemberList);
				break;
			}
			case 2:	// 3.2. 등록된 채용 정보 조회
			{
				func32(system_RecruitmentList, system_MemberList);
				break;
			}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
			case 1:	// 4.1. 채용 정보 검색
			{
				func41(system_RecruitmentList, system_MemberList);
				break;
			}
			case 2:	// 4.2. 채용 지원
			{
				func42(system_RecruitmentList, system_MemberList);
				break;
			}
			case 3:	// 4.3. 지원 정보 조회
			{
				func43(system_RecruitmentList, system_MemberList);
				break;
			}
			case 4:	// 4.4. 지원 취소
			{
				func44(system_RecruitmentList, system_MemberList);
				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:	// 5.1. 지원 정보 통계
			{
				func51(system_RecruitmentList, system_MemberList);
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:   // "6.1. 종료“ 메뉴 부분
			{
				program_exit();
				is_program_exit = 1;
				break;;
			}
			}
			break;
		}
		}
	}
	return;
}

void join(RecruitmentList system_RecruitmentList, MemberList system_MemberList)
{
	/*            !!!!!!!       중요        !!!!!!!!!
		* 단순히 파일을 통해 입출력하는 방법을 보이기 위한 코드이므로 이 함수에서 그대로 사용하면 안됨.
		* control 및 boundary class를 이용해서 해당 기능이 구현되도록 해야 함.
	*/
	int user_type = 0;
	int SSN = 0;
	char name[MAX_STRING],
		 ID[MAX_STRING], password[MAX_STRING];

	//// 입력 형식 : 회원타입, 이름, 번호, ID, Password를 파일로부터 읽음
	fscanf(in_fp, "%d %s %d %s %s", &user_type, name, SSN, ID, password);

	string n;
	string id;
	string p;

	n = name;
	id = ID;
	p = password;

	//// 해당 기능 수행  
	MemberManagementUI SignUpmemberUI;
	MemberManagement SignUpmember;

	//// 출력 형식
	fprintf(out_fp, "1.1. 회원가입\n");
	fprintf(out_fp, "> %d %s %s %s %s\n", user_type, name, SSN, ID, password);

	SignUpmemberUI.selectSignUp(system_MemberList, user_type, name, SSN, ID, password);
	return;
}
void func12(RecruitmentList system_RecruitmentList, MemberList system_MemberList) {
	// 임시
	char ID[MAX_STRING] = "id";

	//// 출력 형식
	fprintf(out_fp, "1.2. 회원탈퇴\n");
	fprintf(out_fp, "> %s\n",  ID);

	Member mem;

	MemberManagementUI memberManagementUI;
	memberManagementUI.selectSignOut(&mem, system_MemberList);
	return;
}
void func21(RecruitmentList system_RecruitmentList, MemberList system_MemberList) { 
	char ID[MAX_STRING], password[MAX_STRING];

	//// 입력 형식 : ID, Password를 파일로부터 읽음
	fscanf(in_fp, "%s %s ", ID, password);

	Member mem;

	//// 해당 기능 수행  
	MemberManagementUI memberManagementUI;
	memberManagementUI.selectLogIn(&mem);

	//// 출력 형식
	fprintf(out_fp, "2.1. 로그인\n");
	fprintf(out_fp, "> %s %s\n", ID, password);
	return;
}
void func22(RecruitmentList system_RecruitmentList, MemberList system_MemberList) {
	char ID[MAX_STRING] = "id";

	//// 입력 형식 : 회원타입, 이름, 번호, ID, Password를 파일로부터 읽음

	Member mem;


	//// 해당 기능 수행  
	MemberManagementUI memberManagementUI;
	bool check_logout = memberManagementUI.selectLogOut(&mem);

	//// 출력 형식
	fprintf(out_fp, "2.2. 로그아웃\n");
	fprintf(out_fp, "> %s\n", ID);
	return;
}
void func31(RecruitmentList system_RecruitmentList, MemberList system_MemberList) {
	char part[MAX_STRING] = "업무1";
	int numOfApplicant = 3;
	char deadline[MAX_STRING] = "2022/05/09";

	//// 입력 형식 : 회원타입, 이름, 번호, ID, Password를 파일로부터 읽음
	fscanf(in_fp, "%s %d %s ", part, &numOfApplicant, deadline);

	string p = part;
	int n = numOfApplicant;
	string d = deadline;

	CompanyMember CM;

	//// 해당 기능 수행  
	RecruitmentManageUI recruitmentManageUI;
	recruitmentManageUI.selectAddRecruitment(&CM, system_RecruitmentList);

	//// 출력 형식
	fprintf(out_fp, "3.1. 채용 정보 등록\n");
	fprintf(out_fp, "> %s %d %s\n", part, numOfApplicant,deadline);
	return;

}
void func32(RecruitmentList system_RecruitmentList, MemberList system_MemberList) { //@@@@@@@@@@@@@@@@@
	// 입력 형식 


	CompanyMember CM;

	// 해당 기능 수행  
	RecruitmentManageUI recruitmentManageUI;
	recruitmentManageUI.selectShowRecruitmentList(&CM);

	// 출력 형식
	fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
	return;
}
void func41(RecruitmentList system_RecruitmentList, MemberList system_MemberList) { //@@@@@@@@@@@@@@@@@
	// 임시
	char companyName[MAX_STRING], part[MAX_STRING]="업무1", deadline[MAX_STRING]="날짜1";
	int businessNum = 4, numOfApplicant = 3;

	//// 입력 형식 : 회사이름을 파일로부터 읽음
	fscanf(in_fp, "%s ", companyName);
	string c = companyName;

	//// 해당 기능 수행  
	ApplicationManageUI applicationManageUI;
	applicationManageUI.enterCompanyName(c, &system_RecruitmentList);

	//// 출력 형식
	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	fprintf(out_fp, "> %s %d %s %d %s\n", companyName,businessNum, part,numOfApplicant,deadline);
	return;
}
void func42(RecruitmentList system_RecruitmentList, MemberList system_MemberList) { //@@@@@@@@@@@@@@@@@
	char name[MAX_STRING], part[MAX_STRING] = "업무1";
	int businessNum = 4;

	//// 입력 형식 : 회사이름을 파일로부터 읽음
	fscanf(in_fp, "%d", &businessNum);
	string n = name;

	GeneralMember GM;
	Recruitment rec;


	//// 해당 기능 수행  
	ApplicationManageUI applicationManageUI;
	applicationManageUI.applyForRecruitment(&GM,businessNum,&rec);
	//// 출력 형식
	fprintf(out_fp, "4.2. 채용 지원\n");
	fprintf(out_fp, "> %s %d %s\n", name,businessNum,part);
	return;
}
void func43(RecruitmentList system_RecruitmentList, MemberList system_MemberList) {
	int businessNum = 3, numOfApplicant=6;
	char companyName[MAX_STRING] = "회사1", part[MAX_STRING] = "업무1",
		deadline[MAX_STRING] = "날짜1";

	//// 입력 형식
	// 임시로 멤버 변수 생성.
	GeneralMember GM;

	//// 해당 기능 수행  
	ApplicationManageUI applicationManageUI;
	applicationManageUI.selectApplyInfo(&GM);
	//// 출력 형식
	fprintf(out_fp, "4.3. 지원 정보 조회\n");
	fprintf(out_fp, "> %s %d %s %d %s\n", companyName,businessNum,part,numOfApplicant,deadline);
	return;
}
void func44(RecruitmentList system_RecruitmentList, MemberList system_MemberList) {
	int businessNum = 0;
	char companyName[MAX_STRING] = "hello", part[MAX_STRING] = "업무1";

	//// 입력 형식 : 회원타입, 이름, 번호, ID, Password를 파일로부터 읽음
	fscanf(in_fp, "%d", &businessNum);

	//임시로 생성.
	Application app;

	//// 해당 기능 수행  
	ApplicationManageUI applicationManageUI;
	applicationManageUI.selectCancelApply(&app);
	//// 출력 형식
	fprintf(out_fp, "4.4. 지원취소\n");
	fprintf(out_fp, "> %s %d %s\n", companyName, businessNum, part);
	return;
}
void func51(RecruitmentList system_RecruitmentList, MemberList system_MemberList) {
	int num = 0;
	char part[MAX_STRING]="업무1";

	//// 입력 형식 : 회원타입, 이름, 번호, ID, Password를 파일로부터 읽음

	//// 해당 기능 수행  
	ApplicationManageUI applicationManageUI;
	applicationManageUI.selectApplyStatistic(&system_RecruitmentList);
	//// 출력 형식
	fprintf(out_fp, "5.1. 지원 정보 통계\n");
	fprintf(out_fp, "> %s %d\n", part, num);
	return;
}

void program_exit()
{
}