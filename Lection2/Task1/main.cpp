#include <iostream>

using namespace std;

int main(){
    int index[10]={57, 50, 2580, 5824, 20, 2024, 8080, 55, 56985, 10};
    int inum , num;

    cout << "Operazyi s schetami - 1" << endl << "Informazia o schetah - 2" << endl;
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
                    cin >> num;

                    index[inum] += num;
                    cout << "Vash schet popolnen na sumu: " << num << endl;
                    cout << "Vash balance: " << index[inum];
                    break;
            }
            break;

        case 2:
            int sum, min = index[0], max = index[0];

            for(int i=0; i<10; i++){
                sum += index[i];
                if (index[i] < min){
                    min = index[i];
                }
                if (index[i] > max){
                    max = index[i];
                }
            }

            cout << "Suma schetov: " << sum << endl << "Min: " << min << endl << "Max: " << max << endl;
    }
}
