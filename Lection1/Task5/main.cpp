#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

int main(){

    double koef_a, koef_b, koef_c, dis;

    cout << "Enter coefficients a, b, c: ";
    cin >> koef_a >> koef_b >> koef_c;
    dis = pow(koef_b,2) - 4 * koef_a * koef_c;



    cout << "Your result " ;

    if(dis > 0){

        cout << "X1 = " << (-koef_b + sqrt(dis))/(2*koef_a) << endl;
        cout << "X2 = " << (-koef_b - sqrt(dis))/(2*koef_a) << endl;

    } else if (dis == 0){

        cout << "X = " << (-koef_b - sqrt(dis))/(2*koef_a) << endl;

    } else if (dis < 0){
        complex<double> d = dis;
        cout << "X = " << (-koef_b - sqrt(d))/(2*koef_a) << endl;
    }
}
