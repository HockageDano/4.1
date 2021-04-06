#include <iostream>
#include <string>

using namespace std;

class Rob{
public:
	int Stazh ;
	virtual void Salary() {
		cout << "¬вед≥ть стаж роботи прац≥вника/службовц€: ";
		cin >> Stazh;
		cout << "ѕочекайте обробл€Їтьс€ ≥нформац≥€..." << endl;
		cout << "=====================================" << endl;
		cout << "«арплата: ";
	};
};
class RobHour : public Rob {
public:
	int a;
	int b;
	int c;
	void hour() {

		cout << "яку суму отримуЇ роб≥тник за одну робочу годину: ";
		cin >> b;
		cout << "—к≥льки годин в≥дпрацьовано: ";
		cin >> c;
		Salary();
		cout << Stazh * (b * c);

	};
};

class RobFree : public Rob {
public:
	int a;
	void free() {
	cout << "який оклад отримуЇ прац≥вник: ";
	cin >> a;
	Salary();
	cout << Stazh * a;
	}
};

int main() {

	setlocale(LC_ALL, "ru");

	int a;
	Rob rob;
	RobHour perhour;
	RobFree free;
	
	cout << "¬ибер≥ть тип роб≥тника/службовц€: " << endl;
	cout << "1. –об≥тник з погодинною оплатою; " << endl;
	cout << "2. —лужбовець з окладом. " << endl;
	cin >> a;
	if (a==1)
	{
		perhour.hour();
	}
	if (a == 2) {
		free.free();
	}
	
	Rob* salary = &rob;
	salary->Stazh;

	return 0;
}