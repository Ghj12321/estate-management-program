#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include "head.h"
#include <vector>
#include <windows.h>
#include <fstream>
using namespace std;

int num = 0; // 구매 case문에 따른 변수
int choice = 0;
char filename[] = "transaction.txt";
int shot;

vector<Alone_House> alone_house_vc;
vector<All_House> all_house_vc;
vector<Alone_House> alone_house_vc2;
vector<All_House> all_house_vc2;
void Set_All_House()
{
    // 1번째 매물 (매매 아파트)
    All_House new_all_apart1;
    new_all_apart1.set_trade_price(4);   // 억 > cout에서 단위 붙이기
    new_all_apart1.set_location("간접 역세권");   // 역세권등
    new_all_apart1.set_zone_size(40); //평 > cout에서 평 붙이기
    new_all_apart1.set_room_number(4);   // 방 개수
    new_all_apart1.set_kind("아파트");   // 건물 종류
    new_all_apart1.set_community_space("헬스장");
    new_all_apart1.set_apart_name("e편한세상");
    new_all_apart1.set_adress("천안시 신부동");
    new_all_apart1.in_live = true;
    new_all_apart1.residence_type[2] = 1;

    all_house_vc.push_back(new_all_apart1);

    // 2번째 매물 (매매 아파트)
    All_House new_all_apart2;
    new_all_apart2.set_trade_price(5);   // 억 > cout에서 단위 붙이기
    new_all_apart2.set_location("간접 역세권");   // 역세권등
    new_all_apart2.set_zone_size(45); //평 > cout에서 평 붙이기
    new_all_apart2.set_room_number(5);   // 방 개수
    new_all_apart2.set_kind("아파트");   // 건물 종류
    new_all_apart2.set_community_space("놀이터, 헬스장");
    new_all_apart2.set_apart_name("푸르지오");
    new_all_apart2.set_adress("천안시 대흥동");
    new_all_apart2.in_live = false;
    new_all_apart2.residence_type[2] = 1;

    all_house_vc.push_back(new_all_apart2);

    // 3번째 매물 (매매 아파트)
    All_House new_all_apart3;
    new_all_apart3.set_trade_price(5);   // 억 > cout에서 단위 붙이기
    new_all_apart3.set_location("변두리");   // 역세권등
    new_all_apart3.set_zone_size(34); //평 > cout에서 평 붙이기
    new_all_apart3.set_room_number(3);   // 방 개수
    new_all_apart3.set_kind("아파트");   // 건물 종류
    new_all_apart3.set_community_space("놀이터");
    new_all_apart3.set_apart_name("그대가아파트");
    new_all_apart3.set_adress("안성시 공도읍");
    new_all_apart3.in_live = true;
    new_all_apart3.residence_type[2] = 1;

    all_house_vc.push_back(new_all_apart3);

    // 4번째 매물 (월세 원룸)
    All_House new_all_apart4;
    new_all_apart4.set_monthly_price(45);   // 만원 > cout에서 단위 붙이기
    new_all_apart4.set_location("변두리");   // 역세권등
    new_all_apart4.set_zone_size(8); //평 > cout에서 평 붙이기
    new_all_apart4.set_room_number(0);   // 방 개수
    new_all_apart4.set_kind("원룸");   // 건물 종류
    new_all_apart4.set_community_space("주차장");
    new_all_apart4.set_apart_name("드림타운");
    new_all_apart4.set_adress("아산시 세출리");
    new_all_apart4.in_live = false;
    new_all_apart4.residence_type[1] = 1;

    all_house_vc.push_back(new_all_apart4);

    // 5번째 매물 (월세 투룸)
    All_House new_all_apart5;
    new_all_apart5.set_monthly_price(60);   // 만원 > cout에서 단위 붙이기
    new_all_apart5.set_location("역세권");   // 역세권등
    new_all_apart5.set_zone_size(13); //평 > cout에서 평 붙이기
    new_all_apart5.set_room_number(0);   // 방 개수
    new_all_apart5.set_kind("투룸");   // 건물 종류
    new_all_apart5.set_community_space("주차장");
    new_all_apart5.set_apart_name("펜타폴리스 10차");
    new_all_apart5.set_adress("천안시 대흥동");
    new_all_apart5.in_live = true;
    new_all_apart5.residence_type[1] = 1;

    all_house_vc.push_back(new_all_apart5);

    // 6번째 매물 (전세 오피스텔)
    All_House new_all_apart6;
    new_all_apart6.set_year_price(1);   // 억 > cout에서 단위 붙이기
    new_all_apart6.set_location("역세권");   // 역세권등
    new_all_apart6.set_zone_size(13); //평 > cout에서 평 붙이기
    new_all_apart6.set_room_number(1);   // 방 개수
    new_all_apart6.set_kind("오피스텔");   // 건물 종류
    new_all_apart6.set_community_space("주차장");
    new_all_apart6.set_apart_name("시그니엘");
    new_all_apart6.set_adress("천안시 두정동");
    new_all_apart6.in_live = true;
    new_all_apart6.residence_type[0] = 1;

    all_house_vc.push_back(new_all_apart6);


    // 7번째 매물 (전세 아파트)
    All_House new_all_apart7;
    new_all_apart7.set_year_price(3);   // 억 > cout에서 단위 붙이기
    new_all_apart7.set_location("간접 역세권");   // 역세권등
    new_all_apart7.set_zone_size(36); //평 > cout에서 평 붙이기
    new_all_apart7.set_room_number(3);   // 방 개수
    new_all_apart7.set_kind("아파트");   // 건물 종류
    new_all_apart7.set_community_space("주차장, 놀이터, 헬스장");
    new_all_apart7.set_apart_name("대림한숲");
    new_all_apart7.set_adress("천안시 신부동");
    new_all_apart7.in_live = false;
    new_all_apart7.residence_type[0] = 1;

    all_house_vc.push_back(new_all_apart7);

    // 8번 매물 (주택)
    Alone_House new_alone_housing1;
    new_alone_housing1.set_trade_price(7); // 억
    new_alone_housing1.set_location("변두리");
    new_alone_housing1.set_zone_size(70); // 평
    new_alone_housing1.set_room_number(4);
    new_alone_housing1.set_kind("주택");
    new_alone_housing1.set_adress("아산시 둔포면");
    new_alone_housing1.in_live = true;
    new_alone_housing1.residence_type[2] = 1;
    new_alone_housing1.garden = true;

    alone_house_vc.push_back(new_alone_housing1);

    // 9번 매물 (주택)
    Alone_House new_alone_housing2;
    new_alone_housing2.set_trade_price(12); // 억
    new_alone_housing2.set_location("역세권");
    new_alone_housing2.set_zone_size(65); // 평
    new_alone_housing2.set_room_number(4);
    new_alone_housing2.set_kind("주택");
    new_alone_housing2.set_adress("천안시 두정동");
    new_alone_housing2.in_live = false;
    new_alone_housing2.residence_type[2] = 1;

    alone_house_vc.push_back(new_alone_housing2);

    // 10번 매물 (주택)
    Alone_House new_alone_housing3;
    new_alone_housing3.set_trade_price(10); // 억
    new_alone_housing3.set_location("간접 역세권");
    new_alone_housing3.set_zone_size(75); // 평
    new_alone_housing3.set_room_number(5);
    new_alone_housing3.set_kind("주택");
    new_alone_housing3.set_adress("천안시 부대동");
    new_alone_housing3.in_live = true;
    new_alone_housing3.residence_type[2] = 1;

    alone_house_vc.push_back(new_alone_housing3);
}

void show_AllHouse()
{
    int i = 0, j = 0, x = 0, y = 0;
    cout << "모든 매물을 보여드리겠습니다." << endl << endl;
    for (i = 0; i < all_house_vc.size(); i++)
    {
        cout << "[" << i + 1 << "번째 매물 정보]" << endl;

        if (all_house_vc.at(i).in_live == true)
        {
            cout << "(살 수 있는 매물입니다!)" << endl;
        }
        else { cout << "(이미 팔린 매물입니다!)" << endl; }

        cout << "건물 이름 : " << all_house_vc.at(i).get_apart_name() << endl;
        cout << "종류 : " << all_house_vc.at(i).get_kind() << endl;
        cout << "주소 : " << all_house_vc.at(i).get_adress() << endl;
        cout << "위치 : " << all_house_vc.at(i).get_location() << endl;
        cout << "평수 : " << all_house_vc.at(i).get_zone_size() << endl;
        cout << "방 개수 : " << all_house_vc.at(i).get_room_number() << endl;
        cout << "공동시설 : " << all_house_vc.at(i).get_community_space() << endl;
        if (all_house_vc.at(i).residence_type[0] == 1)
        {
            cout << "전세 가능 / 전세가 : " << all_house_vc.at(i).get_year_price() << "억원" << endl;
        }
        if (all_house_vc.at(i).residence_type[1] == 1)
        {
            cout << "월세 가능 / 월세가 : " << all_house_vc.at(i).get_monthly_price() << "만원" << endl;
        }
        if (all_house_vc.at(i).residence_type[2] == 1)
        {
            cout << "매매 가능 / 매매가 : " << all_house_vc.at(i).get_trade_price() << "억원" << endl;
        }
        cout << endl << endl;
    }

    for (x = 0; x < all_house_vc2.size(); x++, i++)
    {
        cout << "[" << i + 1 << "번째 매물 정보]" << endl;

        if (all_house_vc2.at(x).in_live == true)
        {
            cout << "(살 수 있는 매물입니다!)" << endl;
        }
        else { cout << "(이미 팔린 매물입니다!)" << endl; }

        cout << "건물 이름 : " << all_house_vc2.at(x).get_apart_name() << endl;
        cout << "종류 : " << all_house_vc2.at(x).get_kind() << endl;
        cout << "주소 : " << all_house_vc2.at(x).get_adress() << endl;
        cout << "위치 : " << all_house_vc2.at(x).get_location() << endl;
        cout << "평수 : " << all_house_vc2.at(x).get_zone_size() << endl;
        cout << "방 개수 : " << all_house_vc2.at(x).get_room_number() << endl;
        cout << "공동시설 : " << all_house_vc2.at(x).get_community_space() << endl;
        if (all_house_vc2.at(x).residence_type[0] == 1)
        {
            cout << "전세 가능 / 전세가 : " << all_house_vc2.at(x).get_year_price() << "억원" << endl;
        }
        if (all_house_vc2.at(x).residence_type[1] == 1)
        {
            cout << "월세 가능 / 월세가 : " << all_house_vc2.at(x).get_monthly_price() << "만원" << endl;
        }
        if (all_house_vc2.at(x).residence_type[2] == 1)
        {
            cout << "매매 가능 / 매매가 : " << all_house_vc2.at(x).get_trade_price() << "억원" << endl;
        }
        cout << endl << endl;
    }

    for (j = 0; j < alone_house_vc.size(); j++, i++)
    {
        cout << "[" << i + 1 << "번째 매물 정보]" << endl;

        if (alone_house_vc.at(j).in_live == true)
        {
            cout << "(살 수 있는 매물입니다!)" << endl;
        }
        else { cout << "(이미 팔린 매물입니다!)" << endl; }

        cout << "종류    : " << alone_house_vc.at(j).get_kind() << endl;
        cout << "주소    : " << alone_house_vc.at(j).get_adress() << endl;
        cout << "위치    : " << alone_house_vc.at(j).get_location() << endl;
        cout << "평수    : " << alone_house_vc.at(j).get_zone_size() << endl;
        cout << "방 개수 : " << alone_house_vc.at(j).get_room_number() << endl;
        cout << "매매가  : " << alone_house_vc.at(j).get_trade_price() << "억원" << "\n\n" << endl;
    }

    for (y = 0; y < alone_house_vc2.size(); y++, i++)
    {
        cout << "[" << i + 1 << "번째 매물 정보]" << endl;

        if (alone_house_vc2.at(y).in_live == true)
        {
            cout << "(살 수 있는 매물입니다!)" << endl;
        }
        else { cout << "(이미 팔린 매물입니다!)" << endl; }

        cout << "종류    : " << alone_house_vc2.at(y).get_kind() << endl;
        cout << "주소    : " << alone_house_vc2.at(y).get_adress() << endl;
        cout << "위치    : " << alone_house_vc2.at(y).get_location() << endl;
        cout << "평수    : " << alone_house_vc2.at(y).get_zone_size() << endl;
        cout << "방 개수 : " << alone_house_vc2.at(y).get_room_number() << endl;
        cout << "매매가  : " << alone_house_vc2.at(y).get_trade_price() << "억원" << "\n\n" << endl;
    }
}




// 2번 구매 가능

void true_purchase()
{
    system("cls");
    int i = 0, j = 0;
    if (all_house_vc.at(0).in_live == true)
    {
        cout << "< 1번 매물(구매 가능 매물) >" << endl;
        cout << "아파트 이름 : " << all_house_vc.at(0).get_apart_name() << endl;
        cout << "주거지 종류 : " << all_house_vc.at(0).get_kind() << endl;
        cout << "주소 : " << all_house_vc.at(0).get_adress() << endl;
        cout << "위치 : " << all_house_vc.at(0).get_location() << endl;
        cout << "평수 : " << all_house_vc.at(0).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << all_house_vc.at(0).get_room_number() << "개" << endl;
        cout << "복합 시설 : " << all_house_vc.at(0).get_community_space() << endl;
        cout << "매매가 : " << all_house_vc.at(0).get_trade_price() << "억" << endl;
        cout << endl;
    }

    if (all_house_vc.at(2).in_live == true)
    {
        cout << "< 2번 매물(구매 가능 매물) >" << endl;
        cout << "아파트 이름 : " << all_house_vc.at(2).get_apart_name() << endl;
        cout << "주거지 종류 : " << all_house_vc.at(2).get_kind() << endl;
        cout << "주소 : " << all_house_vc.at(2).get_adress() << endl;
        cout << "위치 : " << all_house_vc.at(2).get_location() << endl;
        cout << "평수 : " << all_house_vc.at(2).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << all_house_vc.at(2).get_room_number() << "개" << endl;
        cout << "복합 시설 : " << all_house_vc.at(2).get_community_space() << endl;
        cout << "매매가 : " << all_house_vc.at(2).get_trade_price() << "억" << endl;
        cout << endl;
    }

    if (all_house_vc.at(4).in_live == true)
    {
        cout << "< 3번 매물(구매 가능 매물) >" << endl;
        cout << "오피스텔 이름 : " << all_house_vc.at(4).get_apart_name() << endl;
        cout << "주거지 종류 : " << all_house_vc.at(4).get_kind() << endl;
        cout << "주소 : " << all_house_vc.at(4).get_adress() << endl;
        cout << "위치 : " << all_house_vc.at(4).get_location() << endl;
        cout << "평수 : " << all_house_vc.at(4).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << all_house_vc.at(4).get_room_number() << "개" << endl;
        cout << "복합 시설 : " << all_house_vc.at(4).get_community_space() << endl;
        cout << "월세가 : " << all_house_vc.at(4).get_monthly_price() << "만원" << endl;
        cout << endl;
    }

    if (all_house_vc.at(5).in_live == true)
    {
        cout << "< 4번 매물(구매 가능 매물) >" << endl;
        cout << "아파트 이름 : " << all_house_vc.at(5).get_apart_name() << endl;
        cout << "주거지 종류 : " << all_house_vc.at(5).get_kind() << endl;
        cout << "주소 : " << all_house_vc.at(5).get_adress() << endl;
        cout << "위치 : " << all_house_vc.at(5).get_location() << endl;
        cout << "평수 : " << all_house_vc.at(5).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << all_house_vc.at(5).get_room_number() << "개" << endl;
        cout << "복합 시설 : " << all_house_vc.at(5).get_community_space() << endl;
        cout << "전세가 : " << all_house_vc.at(5).get_year_price() << "억" << endl;
        cout << endl;
    }

    if (alone_house_vc.at(0).in_live == true)
    {
        cout << "< 5번 매물(구매 가능 매물) >" << endl;
        cout << "주거지 종류 : " << alone_house_vc.at(0).get_kind() << endl;
        cout << "주소 : " << alone_house_vc.at(0).get_adress() << endl;
        cout << "위치 : " << alone_house_vc.at(0).get_location() << endl;
        cout << "평수 : " << alone_house_vc.at(0).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << alone_house_vc.at(0).get_room_number() << "개" << endl;
        cout << "매매가 : " << alone_house_vc.at(0).get_trade_price() << "억" << endl;
        cout << endl;
    }

    if (alone_house_vc.at(2).in_live == true)
    {
        cout << "< 6번 매물(구매 가능 매물) >" << endl;
        cout << "주거지 종류 : " << alone_house_vc.at(2).get_kind() << endl;
        cout << "주소 : " << alone_house_vc.at(2).get_adress() << endl;
        cout << "위치 : " << alone_house_vc.at(2).get_location() << endl;
        cout << "평수 : " << alone_house_vc.at(2).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << alone_house_vc.at(2).get_room_number() << "개" << endl;
        cout << "매매가 : " << alone_house_vc.at(2).get_trade_price() << "억" << endl;
        cout << endl;
    }

    for (i = 0; i < all_house_vc2.size(); i++)
    {
        cout << "< " << i + 7 << "번 매물(구매 가능 매물) >" << endl;
        cout << "주거지 종류 : " << all_house_vc2.at(i).get_kind() << endl;
        cout << "주소 : " << all_house_vc2.at(i).get_adress() << endl;
        cout << "위치 : " << all_house_vc2.at(i).get_location() << endl;
        cout << "평수 : " << all_house_vc2.at(i).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << all_house_vc2.at(i).get_room_number() << "개" << endl;
        if (all_house_vc2.at(i).residence_type[0] == 1)
            cout << "전세가 : " << all_house_vc2.at(i).get_year_price() << "억" << endl;
        if (all_house_vc2.at(i).residence_type[1] == 1)
            cout << "월세가 : " << all_house_vc2.at(i).get_monthly_price() << "만" << endl;
        if (all_house_vc2.at(i).residence_type[1] == 1)
            cout << "매매가 : " << all_house_vc2.at(i).get_trade_price() << "억" << endl;
        cout << endl;
    }
    for (j = 0; j < alone_house_vc2.size(); j++, i++)
    {
        cout << "< " << i + 7 << "번 매물(구매 가능 매물) >" << endl;
        cout << "주거지 종류 : " << alone_house_vc2.at(j).get_kind() << endl;
        cout << "주소 : " << alone_house_vc2.at(j).get_adress() << endl;
        cout << "위치 : " << alone_house_vc2.at(j).get_location() << endl;
        cout << "평수 : " << alone_house_vc2.at(j).get_zone_size() << "평" << endl;
        cout << "방 개수 : " << alone_house_vc2.at(j).get_room_number() << "개" << endl;
        cout << "매매가 : " << alone_house_vc2.at(j).get_trade_price() << "억" << endl;
        cout << endl;
    }
}

int sold_choice()
{
    true_purchase();
    cout << "구매할 매물을 선택하시오." << endl;
    cin >> choice;
    Sleep(500);
    system("cls");

    return choice;
}

void sold(int choice)
{

    switch (choice)
    {
    case 1:   // 매매 매물
        if (all_house_vc.at(0).in_live == true)
        {
            cout << "아파트 이름 : " << all_house_vc.at(0).get_apart_name() << endl;
            cout << "주거지 종류 : " << all_house_vc.at(0).get_kind() << endl;
            cout << "주소 : " << all_house_vc.at(0).get_adress() << endl;
            cout << "위치 : " << all_house_vc.at(0).get_location() << endl;
            cout << "평수 : " << all_house_vc.at(0).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << all_house_vc.at(0).get_room_number() << "개" << endl;
            cout << "복합 시설 : " << all_house_vc.at(0).get_community_space() << endl;
            cout << "매매가 : " << all_house_vc.at(0).get_trade_price() << "억" << endl;
            cout << endl;
            num = 1;
        }
        break;

    case 2: // 매매 매물
        if (all_house_vc.at(2).in_live == true)
        {
            cout << "아파트 이름 : " << all_house_vc.at(2).get_apart_name() << endl;
            cout << "주거지 종류 : " << all_house_vc.at(2).get_kind() << endl;
            cout << "주소 : " << all_house_vc.at(2).get_adress() << endl;
            cout << "위치 : " << all_house_vc.at(2).get_location() << endl;
            cout << "평수 : " << all_house_vc.at(2).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << all_house_vc.at(2).get_room_number() << "개" << endl;
            cout << "복합 시설 : " << all_house_vc.at(2).get_community_space() << endl;
            cout << "매매가 : " << all_house_vc.at(2).get_trade_price() << "억" << endl;
            cout << endl;
            num = 2;
        }
        break;

    case 3: // 투룸 매물
        if (all_house_vc.at(4).in_live == true)
        {
            cout << "오피스텔 이름 : " << all_house_vc.at(4).get_apart_name() << endl;
            cout << "주거지 종류 : " << all_house_vc.at(4).get_kind() << endl;
            cout << "주소 : " << all_house_vc.at(4).get_adress() << endl;
            cout << "위치 : " << all_house_vc.at(4).get_location() << endl;
            cout << "평수 : " << all_house_vc.at(4).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << all_house_vc.at(4).get_room_number() << "개" << endl;
            cout << "복합 시설 : " << all_house_vc.at(4).get_community_space() << endl;
            cout << "월세가 : " << all_house_vc.at(4).get_monthly_price() << "만원" << endl;
            cout << endl;
            num = 3;
        }
        break;

    case 4: // 전세 매물
        if (all_house_vc.at(5).in_live == true)
        {
            cout << "아파트 이름 : " << all_house_vc.at(5).get_apart_name() << endl;
            cout << "주거지 종류 : " << all_house_vc.at(5).get_kind() << endl;
            cout << "주소 : " << all_house_vc.at(5).get_adress() << endl;
            cout << "위치 : " << all_house_vc.at(5).get_location() << endl;
            cout << "평수 : " << all_house_vc.at(5).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << all_house_vc.at(5).get_room_number() << "개" << endl;
            cout << "복합 시설 : " << all_house_vc.at(5).get_community_space() << endl;
            cout << "전세가 : " << all_house_vc.at(5).get_year_price() << "억" << endl;
            cout << endl;
            num = 4;
        }
        break;

    case 5: // 매매 주택 매물
        if (alone_house_vc.at(0).in_live == true)
        {
            cout << "주거지 종류 : " << alone_house_vc.at(0).get_kind() << endl;
            cout << "주소 : " << alone_house_vc.at(0).get_adress() << endl;
            cout << "위치 : " << alone_house_vc.at(0).get_location() << endl;
            cout << "평수 : " << alone_house_vc.at(0).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << alone_house_vc.at(0).get_room_number() << "개" << endl;
            cout << "매매가 : " << alone_house_vc.at(0).get_trade_price() << "억" << endl;
            cout << endl;
            num = 5;
        }
        break;

    case 6: // 매매 주택 매물
        if (alone_house_vc.at(2).in_live == true)
        {
            cout << "주거지 종류 : " << alone_house_vc.at(2).get_kind() << endl;
            cout << "주소 : " << alone_house_vc.at(2).get_adress() << endl;
            cout << "위치 : " << alone_house_vc.at(2).get_location() << endl;
            cout << "평수 : " << alone_house_vc.at(2).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << alone_house_vc.at(2).get_room_number() << "개" << endl;
            cout << "매매가 : " << alone_house_vc.at(2).get_trade_price() << "억" << endl;
            cout << endl;
            num = 6;
        }
        break;


    default:
        break;
    }

    if (choice >= 7 && choice <= (alone_house_vc2.size() + all_house_vc2.size() + 6))
    {
        if (choice - 6 <= all_house_vc2.size())
        {
            cout << "아파트 이름 : " << all_house_vc2.at(choice - 7).get_apart_name() << endl;
            cout << "주거지 종류 : " << all_house_vc2.at(choice - 7).get_kind() << endl;
            cout << "주소 : " << all_house_vc2.at(choice - 7).get_adress() << endl;
            cout << "위치 : " << all_house_vc2.at(choice - 7).get_location() << endl;
            cout << "평수 : " << all_house_vc2.at(choice - 7).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << all_house_vc2.at(choice - 7).get_room_number() << "개" << endl;
            cout << "복합 시설 : " << all_house_vc2.at(choice - 7).get_community_space() << endl;
            if (all_house_vc2.at(choice - 7).residence_type[0] == 1)
                cout << "전세가 : " << all_house_vc2.at(choice - 7).get_year_price() << "억" << endl;
            if (all_house_vc2.at(choice - 7).residence_type[1] == 1)
                cout << "월세가 : " << all_house_vc2.at(choice - 7).get_monthly_price() << "만" << endl;
            if (all_house_vc2.at(choice - 7).residence_type[1] == 1)
                cout << "매매가 : " << all_house_vc2.at(choice - 7).get_trade_price() << "억" << endl;
            cout << endl;
            num = choice;
        }
        else
        {
            cout << "주거지 종류 : " << alone_house_vc2.at(choice - all_house_vc2.size() - 7).get_kind() << endl;
            cout << "주소 : " << alone_house_vc2.at(choice - all_house_vc2.size() - 7).get_adress() << endl;
            cout << "위치 : " << alone_house_vc2.at(choice - all_house_vc2.size() - 7).get_location() << endl;
            cout << "평수 : " << alone_house_vc2.at(choice - all_house_vc2.size() - 7).get_zone_size() << "평" << endl;
            cout << "방 개수 : " << alone_house_vc2.at(choice - all_house_vc2.size() - 7).get_room_number() << "개" << endl;
            cout << "매매가 : " << alone_house_vc2.at(choice - all_house_vc2.size() - 7).get_trade_price() << "억" << endl;
            cout << endl;
            num = choice;
        }
    }
    else if (choice <= 0 || choice > 6 + alone_house_vc2.size() + all_house_vc2.size())
    {
        cout << "목록에 없는 숫자입니다! 초기 화면으로 돌아갑니다!" << endl;
        Sleep(2000);
    }
}

void Yee()
{
    int select, selcet2;


    ofstream file(filename, ios::trunc);

    switch (choice)
    {
    case 1: select = 0; selcet2 = 0; break;
    case 2: select = 2; selcet2 = 0; break;
    case 3: select = 4; selcet2 = 0; break;
    case 4: select = 5; selcet2 = 0; break;
    case 5: select = 0; selcet2 = 1; break;
    case 6: select = 2; selcet2 = 1; break;
    default: break;
    }

    if (selcet2 == 0)
    {
        if (file.is_open())
        {
            if (choice < 3) { file << "매매가 : " << all_house_vc.at(select).get_trade_price() << "억" << endl; }
            else if (choice == 3) { file << "매매가 : " << all_house_vc.at(select).get_monthly_price() << "만원" << endl; }
            else if (choice == 4) { file << "매매가 : " << all_house_vc.at(select).get_year_price() << "억" << endl; }

            file << "부동산 매매 계약서(고객 소유)" << endl
                << "아파트 이름 : " << all_house_vc.at(select).get_apart_name() << endl
                << "장소 : " << all_house_vc.at(select).get_location() << endl
                << "평수 : " << all_house_vc.at(select).get_zone_size() << "평" << endl
                << "방 개수 : " << all_house_vc.at(select).get_room_number() << "개" << endl
                << "주거지 종류 : " << all_house_vc.at(select).get_kind() << endl
                << "주소 : " << all_house_vc.at(select).get_adress() << endl;
            file.close();
        }
    }
    else if (selcet2 == 1)
    {
        if (file.is_open())
        {
            file << "부동산 매매 계약서(고객 소유)" << endl
                << "매매가 : " << alone_house_vc.at(select).get_trade_price() << "억" << endl
                << "장소 : " << alone_house_vc.at(select).get_location() << endl
                << "평수 : " << alone_house_vc.at(select).get_zone_size() << "평" << endl
                << "방 개수 : " << alone_house_vc.at(select).get_room_number() << "개" << endl
                << "주거지 종류 : " << alone_house_vc.at(select).get_kind() << endl
                << "주소 : " << alone_house_vc.at(select).get_adress() << endl;
            file.close();
        }
    }
}

void sold_decision()
{
    char pick;
    cout << endl;
    cout << "계약하시겠습니까?" << endl;
    cout << "거래를 원하시면 y(Y)를, 원치 않으시면 n(N)을 눌러주세요!" << endl;
    cin >> pick;

    if (pick == 'y' || pick == 'Y')
    {

        cout << "성공적으로 계약이 완료되었습니다." << endl;
        if (num == 1)
        {
            all_house_vc.at(0).in_live = false;
            Yee();
        }
        else if (num == 2)
        {
            all_house_vc.at(2).in_live = false;
            Yee();
        }
        else if (num == 3)
        {
            all_house_vc.at(4).in_live = false;
            Yee();
        }
        else if (num == 4)
        {
            all_house_vc.at(5).in_live = false;
            Yee();
        }
        else if (num == 5)
        {
            alone_house_vc.at(0).in_live = false;
            Yee();
        }
        else if (num == 6)
        {
            alone_house_vc.at(2).in_live = false;
            Yee();
        }
        else if (num >= 7 && num <= (alone_house_vc2.size() + all_house_vc2.size() + 6))
        {
            if (num - 6 <= all_house_vc2.size())
            {
                all_house_vc2.at(choice - 7).in_live = false;
                ofstream file(filename, ios::trunc);

                if (file.is_open())
                {
                    if (choice < 3) { file << "매매가 : " << all_house_vc.at(choice - 7).get_trade_price() << "억" << endl; }
                    else if (choice == 3) { file << "매매가 : " << all_house_vc.at(choice - 7).get_monthly_price() << "만원" << endl; }
                    else if (choice == 4) { file << "매매가 : " << all_house_vc.at(choice - 7).get_year_price() << "억" << endl; }
                    file << "부동산 매매 계약서(고객 소유)" << endl
                        << "건물 이름 : " << all_house_vc.at(choice - 7).get_apart_name() << endl
                        << "종류 : " << all_house_vc.at(choice - 7).get_kind() << endl
                        << "주소 : " << all_house_vc.at(choice - 7).get_adress() << endl
                        << "위치 : " << all_house_vc.at(choice - 7).get_location() << endl
                        << "평수 : " << all_house_vc.at(choice - 7).get_zone_size() << endl
                        << "방 개수 : " << all_house_vc.at(choice - 7).get_zone_size() << endl
                        << "공동시설 : " << all_house_vc.at(choice - 7).get_community_space() << endl;
                    file.close();
                }
            }
            else
            {
                alone_house_vc2.at(choice - all_house_vc2.size() - 7).in_live = false;
                ofstream file(filename, ios::trunc);
                if (file.is_open())
                {
                    file << "부동산 매매 계약서(고객 소유)" << endl
                        << "매매가 : " << alone_house_vc.at(choice - all_house_vc2.size() - 7).get_trade_price() << "억" << endl
                        << "장소 : " << alone_house_vc.at(choice - all_house_vc2.size() - 7).get_location() << endl
                        << "평수 : " << alone_house_vc.at(choice - all_house_vc2.size() - 7).get_zone_size() << "평" << endl
                        << "방 개수 : " << alone_house_vc.at(choice - all_house_vc2.size() - 7).get_room_number() << "개" << endl
                        << "주거지 종류 : " << alone_house_vc.at(choice - all_house_vc2.size() - 7).get_kind() << endl
                        << "주소 : " << alone_house_vc.at(choice - all_house_vc2.size() - 7).get_adress() << endl;
                    file.close();
                }
            }
        }
    }
    else if (pick == 'n' || pick == 'N')
    {
        cout << "계약하지 않습니다." << endl;
    }
}


void buy()      // 사용자가 판매(부동산이 구매)
{
    system("cls");
    char kind[20];
    int kind2;
    char location[20];
    char residance_type[30];
    int price;
    int zone_size;
    int room_number;
    char name[30];
    char commnuity_space[30];
    char adress[50];
    bool garden;
    bool in_live;
    char choice;
    int count = 0;
    cout << "판매등록을 원하는 건물의 종류를 입력해주세요(공동주택 : 1, 단독주택 : 2): " << endl;  //건물 종류 구분
    cin >> kind2;
    if (kind2 == 1 || kind2 == 2)
    {
        cout << "판매등록을 원하는 건물의 정보를 입력해주세요: " << endl;
    }
    else { cout << "다시 시도해주세요" << endl; }

    if (kind2 == 1)
    {
        cout << "입력방법: 공동주택의 경우(건물종류, 위치(역세권, 간접역세권, 변두리), 평수, 방개수, 건물이름, 건물주소, 커뮤니티공간)" << endl;
        cin >> kind >> location >> zone_size >> room_number >> name >> adress >> commnuity_space;
        cout << "희망하시는 주거타입과 가격을 입력해주세요(전세(억원), 월세(만원), 매매(억원)): " << endl;
        cin >> residance_type;
        cin >> price;

        All_House new_all_apart;
        new_all_apart.set_location(location);   // 역세권등
        new_all_apart.set_zone_size(zone_size); //평 > cout에서 평 붙이기
        new_all_apart.set_room_number(room_number);   // 방 개수
        new_all_apart.set_kind(kind);   // 건물 종류
        new_all_apart.set_community_space(commnuity_space);
        new_all_apart.set_apart_name(name);
        new_all_apart.set_adress(adress);
        new_all_apart.set_residence_type(residance_type);
        if (strcmp(residance_type, "전세") == 0) { new_all_apart.residence_type[0] = 1; new_all_apart.set_year_price((unsigned int)price); }
        else if (strcmp(residance_type, "월세") == 0) { new_all_apart.residence_type[1] = 1; new_all_apart.set_monthly_price((unsigned int)price); }
        else if (strcmp(residance_type, "매매") == 0) { new_all_apart.residence_type[2] = 1; new_all_apart.set_trade_price((unsigned int)price); }
        new_all_apart.in_live = true;
        cout << "(판매 등록하려고 하는 매물)" << endl;
        cout << "건물 이름 : " << new_all_apart.get_apart_name() << endl;
        cout << "종류 : " << new_all_apart.get_kind() << endl;
        cout << "주소 : " << new_all_apart.get_adress() << endl;
        cout << "위치 : " << new_all_apart.get_location() << endl;
        cout << "평수 : " << new_all_apart.get_zone_size() << endl;
        cout << "방 개수 : " << new_all_apart.get_zone_size() << endl;
        cout << "공동시설 : " << new_all_apart.get_community_space() << endl;
        if (new_all_apart.residence_type[0] == 1)
        {
            cout << "전세 가능 / 전세가 : " << new_all_apart.get_year_price() << "억원" << endl;
        }
        if (new_all_apart.residence_type[1] == 1)
        {
            cout << "월세 가능 / 월세가 : " << new_all_apart.get_monthly_price() << "만원" << endl;
        }
        if (new_all_apart.residence_type[2] == 1)
        {
            cout << "매매 가능 / 매매가 : " << new_all_apart.get_trade_price() << "억원" << endl;
        }
        cout << endl << endl;
        cout << "거래를 하시려면 y(Y) 거래를 하지 않으려면 n(N) 를 입력해주세요: " << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            all_house_vc2.push_back(new_all_apart);

            ofstream file(filename, ios::trunc);

            if (file.is_open())
            {
                file << "부동산 매매 계약서(부동산 소유)" << endl
                    << "건물 이름 : " << new_all_apart.get_apart_name() << endl
                    << "종류 : " << new_all_apart.get_kind() << endl
                    << "주소 : " << new_all_apart.get_adress() << endl
                    << "위치 : " << new_all_apart.get_location() << endl
                    << "평수 : " << new_all_apart.get_zone_size() << endl
                    << "방 개수 : " << new_all_apart.get_zone_size() << endl
                    << "공동시설 : " << new_all_apart.get_community_space() << endl;
                file.close();
            }


            cout << "해당 매물이 판매 등록되었습니다." << endl << "이용해 주셔서 감사합니다! :)" << endl;
            Sleep(2000);
        }
        else if (choice == 'n' || choice == 'N') { cout << "거래를 취소합니다."; Sleep(2000); }
        else {
            cout << "목록에 없는 숫자입니다! 초기 화면으로 돌아갑니다!" << endl;
            Sleep(2000);
        }
    }
    if (kind2 == 2)
    {
        cout << "입력방법: 단독주택의 경우(위치(역세권, 간접역세권, 변두리), 평수, 방개수, 건물주소, 앞마당 여부(true : 1,false : 0)" << endl;
        cin >> location >> zone_size >> room_number >> adress >> garden;

        cout << "희망하시는 가격을 입력해주세요(매매(억원)): ";
        cin >> price;
        Alone_House new_alone_house;
        new_alone_house.set_trade_price(price); // 억
        new_alone_house.set_location(location);
        new_alone_house.set_zone_size(zone_size); // 평
        new_alone_house.set_room_number(room_number);
        new_alone_house.set_kind("주택");
        new_alone_house.set_adress(adress);
        new_alone_house.in_live = true;
        //new_alone_house.in_live = false;
        cout << "(판매 등록하려고 하는 매물)" << endl;
        cout << "종류    : " << new_alone_house.get_kind() << endl;
        cout << "주소    : " << new_alone_house.get_adress() << endl;
        cout << "위치    : " << new_alone_house.get_location() << endl;
        cout << "평수    : " << new_alone_house.get_zone_size() << endl;
        cout << "방 개수 : " << new_alone_house.get_room_number() << endl;
        cout << "매매가  : " << new_alone_house.get_trade_price() << "억원" << "\n\n" << endl;

        cout << "거래를 하시려면 y(Y) 거래를 하지 않으려면 n(N) 를 입력해주세요: ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            alone_house_vc2.push_back(new_alone_house);

            ofstream file(filename, ios::trunc);

            if (file.is_open())
            {
                file << "부동산 매매 계약서(부동산 소유)" << endl
                    << "종류    : " << new_alone_house.get_kind() << endl
                    << "주소    : " << new_alone_house.get_adress() << endl
                    << "위치    : " << new_alone_house.get_location() << endl
                    << "평수    : " << new_alone_house.get_zone_size() << endl
                    << "방 개수 : " << new_alone_house.get_room_number() << endl
                    << "매매가  : " << new_alone_house.get_trade_price() << "억원" << "\n\n" << endl;
                file.close();
            }

            cout << "해당 매물이 판매 등록되었습니다." << endl << "이용해 주셔서 감사합니다! :)" << endl;
            Sleep(2000);
        }
        else if (choice == 'n' || choice == 'N') { cout << "거래를 취소합니다."; Sleep(2000); }
        else {
            cout << "목록에 없는 숫자입니다! 초기 화면으로 돌아갑니다!" << endl;
            Sleep(2000);
        }
    }
}

void print_1()      // 단순 메뉴 출력용
{
    Sleep(500);     // 이전의 출력문 대기시간
    system("cls");  // 콘솔창 클리어
    cout << "************** < 모블 부동산 > **************" << endl;
    cout << "*     1. 부동산 보유매물 보기               *" << endl;
    cout << "*     2. 부동산 구매하기(고객이 구입)       * " << endl;
    cout << "*     3. 부동산 판매하기(부동산이 구입)     * " << endl;
    cout << "*     4. 최근거래정보                       *" << endl;
    cout << "*     5. 종료하기                           *" << endl;
    cout << "*********************************************" << endl;
}

void switch1()
{
    char keypress_1;

    for (;;)
    {
        system("cls");          // 콘솔창 초기화
        show_AllHouse();     // 보유 매물 전체 보여주기
        cout << "\n이전 창으로 돌아갈려면 1을 입력하시오" << endl;

        cin >> keypress_1;

        if (keypress_1 == '1') { break; }
    }
}

void show_Yee()
{
    string line;
    char keypress_2;

    for (;;)
    {
        system("cls");

        ifstream file("transaction.txt");

        if (file.is_open())
        {
            while (getline(file, line)) { cout << line << endl; }
            file.close();
        }

        cout << "\n이전 창으로 돌아갈려면 1을 입력하시오" << endl;
        cin >> keypress_2;

        if (keypress_2 == '1') { break; }
    }

}

int main()
{
    Set_All_House();
    char keypress;


    for (;;)
    {
        print_1();


        cin >> keypress;
        if (keypress == '5')
        {
            system("cls");
            cout << "시스템 종료\n" << endl;
            shot = remove(filename);
            break;
        }

        switch (keypress)
        {
        case '1': cout << "보유 부동산을 조회합니다.\n" << endl;  switch1();   break;
        case '2': cout << "구매 가능한 부동산을 조회합니다.\n" << endl;
            sold(sold_choice());
            if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 ||
                (choice >= 7 && choice <= (alone_house_vc2.size() + all_house_vc2.size() + 6)))
            {
                sold_decision();
            }
            break;
        case '3': cout << "판매할 부동산의 정보를 입력해주세요\n" << endl;  buy();   break;
        case '4': cout << "거래한 부동산의 정보를 조회합니다.\n" << endl; show_Yee();  break;
        default:  cout << "다시 입력해주세요" << endl;  break;
        }
    }
}