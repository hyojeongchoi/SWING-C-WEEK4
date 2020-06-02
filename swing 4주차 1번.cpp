#include<iostream>
#include<cstdlib> //RAND_MAX 상수가 이 헤더 파일에 선언되어있는 정수 32767임
#include <ctime> // time 함수를 사용하기 위해서 필요 / 시간값을 문자열로 변환하고자
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int x, int y);
};
Random::Random() {
	srand((unsigned)time(0)); // 시작할때마다, 다른 랜덤수를 발생시키기 위한 seed 설정 / srand 함수!!
}
int Random::next() {
	return rand();
}
int Random::nextInRange(int x, int y) {
	return rand() % (y - x + 1) + x; 

	/* 0~9까지의 숫자 : rand()%10 -> 0~9
	  1~10까지의 숫자 : rand()%10+1 -> (0~9)+1 = 1~10
	  a to b : (rand()%(b-a+1))+a --> (0~b-a)+a -> a~b
	*/

}
int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;

}