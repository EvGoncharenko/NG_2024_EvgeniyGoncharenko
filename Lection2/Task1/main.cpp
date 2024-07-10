#include <iostream>

using namespace std;

int main(){
    int index[10]={0, 50, 2580, 5824, 86, 2024, 8080, 55, 56985, 10};
    int inum , num = 0, sum;

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
                        if(index[inum] > 0){
                            cout << "Suma snyatia: ";
                            cin >> num;
                            cout << "Vashi denygi snyati, na schetu: ";
                            index[inum] -= num;
                        } else {
                            cout << "Y vas net denyeg: ";
                        }
                        cout << index[inum] << endl << "Hotite polozyt na schet denygi? 1 - net , 2 - da" << endl;
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
                int sum, min = index[0], max = index[0];

                for(int range=0; range<10; range++){
                    sum += index[range];
                    if (index[range] < min){
                        min = index[range];
                    }
                    if (index[range] > max){
                        max = index[range];
                    }
                }

                cout << "Suma schetov: " << sum << endl << "Min: " << min << endl << "Max: " << max << endl;
        }

        if(num==3){
            break;
        }

    }
}
