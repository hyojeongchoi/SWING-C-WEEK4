#include<iostream>
using namespace std;

class PhoneBook {
private:
	string name;
	string phonenumber;

public:
	void addPhone();
	void editPhone();
	void getPnum();
	void getName();
};

void PhoneBook::addPhone()
{
	cout << "------------ swing 전화번호부 ------------" << endl;
	cout << "이름을 입력해주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해주세요 >> ";
	cin >> phonenumber;
	cout << endl;

}

void PhoneBook::editPhone()
{
	string inputname;
	string newPnumber;

	cout << "이름을 입력해주세요 >> ";
	cin >> inputname;

	for (;;)
	{
		if (name != inputname)
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요 >>";
			cin >> inputname;
		}
		else
		{
			name = inputname;
			break;
		}
	}
	cout << "변경할 전화번호를 입력해주세요>>";
	cin >> newPnumber;
	phonenumber = newPnumber;
	cout << '\n';
}

void PhoneBook::getPnum()
{
	cout << phonenumber << endl << endl;
}
void PhoneBook::getName()
{
	cout << name << "::";
}

int main()
{
	PhoneBook h;
	int k;

	h.addPhone();
	for (;;)
	{
		cout << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 " << endl;
		cout << ">> ";
		cin >> k;

		if (k == 1)
		{
			h.getName();
			h.getPnum();
			cout << endl;
		}
		else if (k == 2)
		{
			h.editPhone();
			cout << endl;
		}
		else if (k == 3)
			break;
	}
}