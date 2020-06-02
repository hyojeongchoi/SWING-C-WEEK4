#include<iostream>
#include<cstdlib> //RAND_MAX ����� �� ��� ���Ͽ� ����Ǿ��ִ� ���� 32767��
#include <ctime> // time �Լ��� ����ϱ� ���ؼ� �ʿ� / �ð����� ���ڿ��� ��ȯ�ϰ���
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int x, int y);
};
Random::Random() {
	srand((unsigned)time(0)); // �����Ҷ�����, �ٸ� �������� �߻���Ű�� ���� seed ���� / srand �Լ�!!
}
int Random::next() {
	return rand();
}
int Random::nextInRange(int x, int y) {
	return rand() % (y - x + 1) + x; 

	/* 0~9������ ���� : rand()%10 -> 0~9
	  1~10������ ���� : rand()%10+1 -> (0~9)+1 = 1~10
	  a to b : (rand()%(b-a+1))+a --> (0~b-a)+a -> a~b
	*/

}
int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;

}