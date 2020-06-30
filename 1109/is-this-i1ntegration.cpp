#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 2.0 * acos(0.0)
#define A(r) (r) * (r) * (1  + PI * 1.0 / 3.0 - sqrt((double)3.0))
#define B(r) (r) * (r) * (-4 + PI * 1.0 / 3.0 + sqrt((double)3.0) * 2.0)
#define C(r) (r) * (r) * (4  - PI * 2.0 / 3.0 - sqrt((double)3.0))

using namespace std;

int main(void)
{
    double a;
	
    cout << setiosflags(ios::fixed) << setprecision(3);

    while (cin >> a){
        cout << A(a) << " " << B(a) << " " << C(a) << endl;
    }

return 0;
}
