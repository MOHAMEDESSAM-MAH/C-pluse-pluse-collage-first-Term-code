#include <iostream>
using namespace std;
int main()
{
	bool a, b, c, d, e, res;
	cout << "enter a,b,c,d,e" << endl;
	cin >> a >> b >> c >> d >> e;
	res = !(((a || !b) && c && !d) && e);
	cout << "the res=" << res << endl;

}