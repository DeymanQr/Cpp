#include <iostream>
#include <string>

using namespace std;

//struct Programme {
//	int id;
//	string name;
//	string icon_url;
//	//...
//};
//
//struct Message {
//	int id;
//	int programme_id;
//	string text;
//};

struct Phone {
	int id;
	string company;

	string hashed_password;
	int number;
	string name;

	int battery_charge;
	bool power_saving_mode;
	int contact_ids[10];

	/*int new_message_ids[100];
	int programme_ids[100];*/

};

//Message messages[1000];
//Programme programmes[1000];
//Phone phones[1000];

//Message get_message_by_id(int id) {
//	for (int i = 0; i < 1000; i++)
//		if (messages[i].id == id) {
//			return messages[i];
//		}
//}


int main() {

	Phone phones[10]{ { 1, "Apple", "YvLe^2MgZm54!3%", 380975360480, "bAnAnAnA", 99, false, {380975360480, 380418500831}},
					  { 2, "Android", "Cfy9j9Xx+32J-R%", 380811325106, "Max", 50, false, {380749300030, 380306602310, 380005609905}} ,
					  { 3, "Apple", "sJ*JUir(44h6J-3", 380749300030, "Iphone", 47, false, {380975360480}} ,
					  { 4, "Apple", ")b+X4JY8y2xT;t9", 380418500831, "Noice", 100, false, {380975360480, 380749300030}} ,
					  { 5, "Android", "%jB6*7)hnYERe92", 380241400531, "Enemy", 11, false, {0, }} ,
					  { 6, "Apple", "7t27t#~DKGRa;v6", 380306602310, "Computer", 1, true, {380975360480, 380005609905}} ,
					  { 7, "Android", "A-V%8uTu9V8t)7s", 380005609905, "Rice", 71, false, {380975360480, 380301617706, 380749300030}} ,
					  { 8, "Android", "#U84eX5(a+yRGc3", 380531010448, "Apple", 20, true, {380975360480, 380301617706}} ,
					  { 9, "Apple", "#U84eX5(a+yRGc3", 380116186805, "Flex", 32, true, {380975360480, 380749300030}} ,
					  { 10, "Android", "K@6vY)_7dR7deG5", 380301617706, "Taras", 88, false, {380975360480}} };
	
}
