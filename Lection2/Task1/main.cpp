#include <iostream>

using namespace std;

int main(){

    int array_of_bank_account[10]{};
    int bank_account, user_input = 0, sum_of_user, min = array_of_bank_account[0], max = array_of_bank_account[0], position_min, position_max;

    while (user_input < 5){

        cout << endl;
        cout << "Snyat denygi - 1" << endl << "Polozyt denygi - 2" << endl << "Informazia o schetah - 3" << endl << "Viyti iz programi - 4" << endl;
        cin >> user_input;

        if(user_input == 1 || user_input == 2){

            cout << endl;
            cout << "Vibery 1 iz 10 schetov: ";
            cin >> bank_account;
            bank_account--;
            cout << "Na schetu: " << array_of_bank_account[bank_account] << endl;
        }

        switch(user_input){
        case 1:

            while(array_of_bank_account[bank_account] > 0){

                cout << endl;
                cout << "Suma snyatia: ";
                cin >> user_input;

                if(user_input > 0){
                    if(array_of_bank_account[bank_account]>=user_input){
                        array_of_bank_account[bank_account] -= user_input;
                        cout << "Vashi denygi snyati, na schetu: " << array_of_bank_account[bank_account]<< endl;
                        break;
                    } else {
                        cout << "Error, suma snyatia bolshe sumi na schetu!!" << endl;
                    }
                } else {
                    cout << "Error, nevozmojno snyatb sumu menshe nulya!!" << endl;
                }
            }

            cout << endl;
            if (array_of_bank_account[bank_account]<=0){
                cout << "Y vas net denyeg.";
            }

            cout << "Hotite polozyt na schet denygi? 1 - net , 2 - da" << endl;
            cin >> user_input;

            if(user_input == 1){
                break;
            }


        case 2:

            cout << endl;
            cout << "Suma dla scheta: ";
            cin >> sum_of_user;

            if (sum_of_user<0){
                cout << "Error, vi ne mojite polozyt sumu menshe nula!!" << endl;
            } else {
                array_of_bank_account[bank_account] += sum_of_user;
                cout << "Vash schet popolnen na sumu: " << sum_of_user << endl;
                cout << "Vash balance: " << array_of_bank_account[bank_account] << endl;
            }

            sum_of_user=0;

            break;


        case 3:

            for(int range=0; range<10; range++){
                sum_of_user += array_of_bank_account[range];
                if (array_of_bank_account[range] < min){
                    min = array_of_bank_account[range];
                }
                if (array_of_bank_account[range] > max){
                    max = array_of_bank_account[range];
                }
            }

            cout << "Suma schetov: " << sum_of_user << endl << "Min: " << min << endl << "Schet pod nomerom: ";

            for(int search_position_min=0; search_position_min<10; search_position_min++){
                if(array_of_bank_account[search_position_min]==min){
                    position_min = search_position_min;
                    position_min++;
                } else {
                    continue;
                }
                cout << position_min << " ";
            }

            cout << endl << "Max: " << max << endl << "Schet pod nomerom: ";

            for(int search_position_max=0; search_position_max<10; search_position_max++){
                if(array_of_bank_account[search_position_max]==max){
                    position_max = search_position_max;
                    position_max++;
                } else {
                    continue;
                }
                cout << position_max << " ";
            }

            cout << endl;
        }

        if(user_input==4){
            break;
        }

    }
}
