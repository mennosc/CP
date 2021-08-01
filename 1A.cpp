#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main() {
	unsigned long long m, n, a;
	
	scanf("%lld%lld%lld", &m, &n, &a);
	
	cout << (long long)(ceil(m / (double)a) * ceil(n / (double) a)) << endl;
}
