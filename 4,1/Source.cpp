#include <iostream>
#include <string>

using namespace std;

class Rob{
public:
	int Stazh ;
	virtual void Salary() {
		cout << "������ ���� ������ ����������/���������: ";
		cin >> Stazh;
		cout << "��������� ������������ ����������..." << endl;
		cout << "=====================================" << endl;
		cout << "��������: ";
	};
};
class RobHour : public Rob {
public:
	int a;
	int b;
	int c;
	void hour() {

		cout << "��� ���� ������ ������� �� ���� ������ ������: ";
		cin >> b;
		cout << "������ ����� ������������: ";
		cin >> c;
		Salary();
		cout << Stazh * (b * c);

	};
};

class RobFree : public Rob {
public:
	int a;
	void free() {
	cout << "���� ����� ������ ���������: ";
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
	
	cout << "������� ��� ��������/���������: " << endl;
	cout << "1. ������� � ���������� �������; " << endl;
	cout << "2. ���������� � �������. " << endl;
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