#include <iostream>
#include <string>

using namespace std;

struct Phone {
	int id;
	string company, name, phone_number;
	int memory;

	int battery_charge;
	bool battery_saving_mode;

	string contact_numbers[10];
};

void cout_phone(Phone phone) {
	cout << "Id: " << phone.id << endl;
	cout << "Company: " << phone.company << endl;
	cout << "Name: " << phone.name << endl;
	cout << "Phone number: " << phone.phone_number << endl;
	cout << "Memory (GB): " << phone.memory << endl;
	cout << "Battery charge: " << phone.battery_charge << endl;
	cout << "Battery saving mode: " << phone.battery_saving_mode << endl;
	cout << "Contact_numbers: ";
	for (int i = 0; phone.contact_numbers[i] != "" && i < 10; i++)
		cout << phone.contact_numbers[i] << " ";
	cout << endl;
}

void cout_all_phones(Phone phones[5]) {
	for (int i = 0; i < 5; i++) {
		cout_phone(phones[i]);
		cout << endl;
	}
}

void cout_phone_by_id(Phone phones[5], int id) {
	for (int i = 0; i < 5; i++)
		if (phones[i].id == id) {
			cout_phone(phones[i]);
			return;
		}
}

int contacts_length(Phone phone) {
	int res = 0;
	for (int i = 0; phone.contact_numbers[i] != "" && i < 10; i++)
		res++;
	return res;
}

void best_phone(Phone phones[5]) {
	int max_index = 0, id=-1;
	for (int i = 0; i < 5; i++) {
		if ((phones[i].battery_charge + (phones[i].memory / 5.12) + (contacts_length(phones[i]) * 20)) / 3 > max_index) {
			id = phones[i].id;
			max_index = (phones[i].battery_charge + (phones[i].memory / 5.12) + (contacts_length(phones[i]) * 20)) / 3;
		}
	}
	cout_phone_by_id(phones, id);
}

void sort_by_names(Phone phones[5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (phones[j].name[0] > phones[j + 1].name[0]) {
				swap(phones[j], phones[j + 1]);
			}
		}
	}
}

int main() {
	Phone phones[5] = { { 1, "Apple", "Bananana", "380975360480", 256, 99, false, {"380762053948", "380974621525"} },
	{ 2, "Android", "Phone", "380762053948", 64, 10, true, {"380975360480", "380971230684"} },
	{ 3, "Apple", "Iphone", "380971230684", 128, 45, false, {"380975360480", "380974621525"} },
	{ 4, "Android", "Enemy", "380881237532", 512, 32, false, {} },
	{ 5, "Android", "Bodia", "380974621525", 256, 1, true, {"380975360480"} } };
	string s;
	int a;
	while (true) {
		cin >> s;
		if (s == "1.1")
			cout_all_phones(phones);
		else if (s == "1.2") {
			cin >> a;
			cout_phone_by_id(phones, a);
		}
		else if (s == "2")
			best_phone(phones);
		else if (s == "3")
			cout << "Dunno" << endl;
		else if (s == "4") {
			sort_by_names(phones);
			cout << "Done" << endl;
		}
		else if (s == "q")
			break;
		cout << endl;
	}
}
