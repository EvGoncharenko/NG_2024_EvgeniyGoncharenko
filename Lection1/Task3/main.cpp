#include <iostream>

using namespace std;

int main ()
{

    int zarplata = 0;

    cout << "How much do you earn?" << endl;
    cin >> zarplata;

    if (zarplata < 1000){
        cout << "Rabotay bolsheh";
    }

    if (zarplata > 1000){
        if (zarplata < 100000){
          cout << "Horosho rabotaesh";
        }
        if (zarplata > 1000000){
        cout << "Da ti milioner!";
        }
    }
    cout << ", no ti molodez!" << endl;

}

