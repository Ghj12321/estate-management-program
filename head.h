#pragma once

#include<iostream>

class House
{
protected:

	char location[30];            // 직접 역세권, 간접 역세권, 변두리 3가지ㄱㄱ   
	//       그럼 그냥 전세 월세 매매만 받고 하나만 지정해서 하는 식으로    
	// 1. 월세, 2. 전세, 3. 매매 -> price = (1 or 2 or 3에 지정된 값)

	int year_price;                     // 전세 가격
	int monthly_price;                     // 월세 가격
	int trade_price;                     // 매매 가격
	int zone_size;               // 평수
	int room_number;            // 방 개수
	char adress[50];
	char kind[20];      // 공동 주택 종류 : 아파트, 빌라, 오피스텔

public:
	int residence_type[3] = { 0 }; // 거주 형태(전세, 월세, 매매)
	bool in_live = false;  // 입주 여부 판단

	//House();   // 매개변수 없는 생성자 (깡통)
	//House(const char* residence_type, const char* location);   // 매개변수 있는 생성자
	//House(const char* residence_type, const char* location, int price, int zone_size, int room_number);
	void set_kind(const char* kind);
	void set_Houseinfo(int residence_type, const char* location, int price, int zone_size, int room_number);   // 한번에 할당 받기

	void set_residence_type(const char* input_type);   //set 정의
	void set_location(const char* location);
	void set_year_price(int year_price);
	void set_monthly_price(int monthly_price);
	void set_trade_price(int trade_price);
	void set_zone_size(int zone_size);
	void set_room_number(int room_number);
	void set_adress(const char* adress);
	//get 정의
	const char* get_location();

	int get_year_price();
	int get_monthly_price();
	int get_trade_price();
	int get_zone_size();
	int get_room_number();
	const char* get_adress();
	const char* get_kind();

};


class Alone_House : public House      // 단독 주택 (자식 클래스 1)
{
public:
	bool garden = false;      // 마당(정원) 유무
	//Alone_House();
	//Alone_House(const char* residence_type, const char* location);
};

// 메서드 작성 시 뭔지 옆에 주석처리좀 ㅎㅎ

class All_House : public House      // 공동 주택 (자식 클래스 2)
{
protected:

	bool parking;      // 주차장 유무
	char community_space[30];   // 커뮤니티 공간(놀이터, 헬스장, 관리사무소, 등등)
	char apart_name[50];

public:
	// All_House();
	// All_House(const char* residence_type, const char* location, int price, int zone_size, int room_number);

	// void set_house_all(const char* residence_type, const char* location, int price, int zone_size, int room_number);

	void set_apart_name(const char* apart_name);

	void set_community_space(const char* community_space);

	const char* get_community_space();
	const char* get_apart_name();
};