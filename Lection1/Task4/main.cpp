#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char znak;
    int fir = 0, sec = 0, num = 0;

    cout << "Enter sign: '+', '-', '*', '/', '2', 'V'. ";
    cin >> znak;

    if (znak == '+' || znak == '-' || znak == '*' || znak == '/'){
        cout << "Enter first number: ";
        cin >> fir;

        cout << "Enter second number: ";
        cin >> sec;

    } else if (znak == '2' || znak == 'V') {
        cout << "Enter your number: ";
        cin >> num;
    }

    cout << "Your result: ";

    switch (znak) {
    case '+':
        cout << fir + sec;
        break;
    case '-':
        cout << fir - sec;
        break;
    case '*':
        cout << fir * sec;
        break;
    case '/':
        cout << fir / sec;
        break;
    case '2':
        cout << pow(num,2);
        break;
    case 'V':
        cout << sqrt(num);
        break;
    default:
        cout << "Oops. Sorry, this sign is not provided, choose any of the proposed ones.";
        break;
    }

}
