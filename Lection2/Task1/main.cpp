#include <iostream>

using namespace std;

int main(){
    int index[10];
    int inum , num = 0, sum;

    for (int numbers=0; numbers<10; numbers++) {
        cout << "Vvedite sumu na chetu: ";
        cin >> num;
        index[numbers] = num;
    }
    num = 0;

    while (num < 4){
        cout << "Operazyi s schetami - 1" << endl << "Informazia o schetah - 2" << endl << "Viyti iz programi - 3" << endl;
        cin >> num;

        switch(num){
            case 1:
                cout << "Vibery 1 iz 10 schetov: ";
                cin >> inum;
                inum--;

                cout << "Na schetu: " << index[inum] << endl;

                cout << "Snyat denygi - 1" << endl << "Polozyt denygi - 2" << endl;
                cin >> num;

                switch (num) {
                    case 1:
                    while(index[inum] > 0){
                        cout << "Suma snyatia: ";
                        cin >> num;
                        if(num > 0){
                            if(index[inum]>num){
                                index[inum] -= num;
                                cout << "Vashi denygi snyati, na schetu: " << index[inum]<< endl;
                                break;
                            } else {
                                cout << "Error, suma snyatia bolshe sumi na schetu!!" << endl;
                            }
                        } else {
                            cout << "Error, nevozmojno snyatb sumu menshe nulya!!" << endl;
                        }
                    }
                    if (index[inum]<=0){
                        cout << "Y vas net denyeg: ";
                    }
                    cout << "Hotite polozyt na schet denygi? 1 - net , 2 - da" << endl;
                    cin >> num;
                    if(num == 1){
                            break;
                    }
                    case 2:
                        cout << "Suma dla scheta: ";
                        cin >> sum;
                        if (sum<0){
                            cout << "Error" << endl;
                        }else{
                            index[inum] += sum;
                            cout << "Vash schet popolnen na sumu: " << sum << endl;
                            cout << "Vash balance: " << index[inum] << endl;
                        }
                    default:
                        break;
                }
                break;

            case 2:
                int sum, min = index[0], max = index[0], position_min, position_max;

                for(int range=0; range<10; range++){
                    sum += index[range];
                    if (index[range] < min){
                        min = index[range];
                    }
                    if (index[range] > max){
                        max = index[range];
                    }
                }

                cout << "Suma schetov: " << sum << endl << "Min: " << min << endl << "Schet pod nomerom: ";

                for(int search_position_min=0; search_position_min<10; search_position_min++){
                    if(index[search_position_min]==min){
                        position_min = search_position_min;
                        position_min++;
                    } else {
                        continue;
                    }
                    cout << position_min << " ";
                }

                cout << endl << "Max: " << max << endl << "Schet pod nomerom: ";

                for(int search_position_max=0; search_position_max<10; search_position_max++){
                    if(index[search_position_max]==max){
                        position_max = search_position_max;
                        position_max++;
                    } else {
                        continue;
                    }
                    cout << position_max << " ";
                }

                cout << endl;
        }

        if(num==3){
            break;
        }

    }
}
