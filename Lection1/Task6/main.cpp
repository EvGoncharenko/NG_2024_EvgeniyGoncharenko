#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Enter size: ";
    cin >> num;

    for(int j=0; j<num+1; j++){
        for(int i=0; i<num-j; i++){
            cout << i;
        }
        for(int s = 0; s < 2*j-1; s++){
            cout << "*";
        }
        cout << " " << endl;
    }
    for(int p=1; p<num; p++){
        cout << " ";
    }
    cout << "*";




}
