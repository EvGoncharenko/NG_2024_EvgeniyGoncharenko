#include <iostream>

using namespace std;

int main(){
    int array_of_numbers[5]{};
    int number=0, max_naumber=0;

    for(int value=0, num=1; value<5; value++, num++){
        cout << "Enter amount in " << num << " row: ";
        cin >> number;
        array_of_numbers[value] = number;
    }

    for (int max_value = 0; max_value < 5; max_value++) {
        if(array_of_numbers[max_value]>max_naumber){
            max_naumber = array_of_numbers[max_value];
        }else{
            continue;
        }
    }

    cout << endl;

    for (int image = 0; image < max_naumber; image++) {
        for (int value_image = 0; value_image < 5; value_image++) {
            if(array_of_numbers[value_image]>0){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        for (int subtraction = 0; subtraction < 5; subtraction++) {
            array_of_numbers[subtraction]--;
        }
        cout << endl;
    }
}
