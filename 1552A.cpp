#include <iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	
	while(T--) {
		int num;
		scanf("%d", &num);
		
		if(num == 1) {
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
}
