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
	cout << "------------ swing ��ȭ��ȣ�� ------------" << endl;
	cout << "�̸��� �Է����ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է����ּ��� >> ";
	cin >> phonenumber;
	cout << endl;

}

void PhoneBook::editPhone()
{
	string inputname;
	string newPnumber;

	cout << "�̸��� �Է����ּ��� >> ";
	cin >> inputname;

	for (;;)
	{
		if (name != inputname)
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ��� >>";
			cin >> inputname;
		}
		else
		{
			name = inputname;
			break;
		}
	}
	cout << "������ ��ȭ��ȣ�� �Է����ּ���>>";
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
		cout << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� " << endl;
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