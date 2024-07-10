#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Enter size: ";
    cin >> num;

    for(int index=0; index<num+1; index++){
        for(int left_indent=0; left_indent<num-index; left_indent++){
            cout << " " ;
        }
        for(int object = 0; object < 2*index-1; object++){
            cout << "*";
        }
        cout << " " << endl;
    }
    for(int stump=1; stump<num; stump++){
        cout << " ";
    }
    cout << "*";




}
