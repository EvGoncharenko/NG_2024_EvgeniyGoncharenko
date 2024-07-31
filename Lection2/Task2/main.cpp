#include <iostream>

using namespace std;

int main(){
    int array_of_numbers[20] {};
    int number = 0, max_number=0, size_figure=0;

    for(int number_of_values=0; number_of_values < 20; number_of_values++){
        cout << "Enter number: ";
        cin >>number;
        array_of_numbers[number_of_values] = number;
        if(number == 0){
            break;
        }
    }

    for(int values=0; values<20; values++){
        if(array_of_numbers[values]>max_number){
            max_number = array_of_numbers[values];
        }
        if(array_of_numbers[values]>0){
            size_figure++;
        }
    }

    cout << endl;
    for(int figure=0; figure<size_figure; figure++){
        for(int space=0; space<(max_number-array_of_numbers[figure])/2; space++){
            cout << " ";
        }
        for(int star=0; star<array_of_numbers[figure]; star++){
            cout << "*";
        }
        cout << endl;
    }

}
