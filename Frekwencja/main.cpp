#include <iostream>

using namespace std;

int tTablica[5][1];



int main() {
	int max = 0;
	for(int i = 0; i < 5; i++){
	do{
	cout << "Wpisz ile uczniow bylo w  " << i + 1 << " dniu szkolnym: " << endl;
	cin >> tTablica[i][1];
	}while(tTablica[i][1] < 0);

}

for(int j = 0;j < 5; ++j)
    {
       if(tTablica[j][1] > max){
        	max = tTablica[j][1]; 
       }
    }
    cout << "Najwieksza wartosc:" << max << endl;
	return 0;
}
