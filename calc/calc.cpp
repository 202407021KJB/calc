#include <iostream>

using namespace std;
int main() {
	int x = 0;
	int y = 0;

	cout << "첫번째 수를 입력하세요 : ";
	cin >> x;
	cout << "두번째 수를 입력하세요 : ";
	cin >> y;

	printf("입력된 수 x : [ %d ] y : [ %d ]\n", x, y);
	printf("add [ %d ] sub [ %d ] mul [ %d ] div [ %d ] mod [ %d ], add(x,y), sub(x,y), mul(x,y), div(x,y), mod(x,y)\n");
	return 0;
}