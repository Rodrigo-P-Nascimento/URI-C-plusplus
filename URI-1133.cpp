#include <iostream>

using namespace std;

int main(){

    int num1, num2, temp, i;

    cin >> num1 >> num2;

    if(num1 > num2){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for(i = num1+1; i < num2; i++){
        if((i%5) == 2 || (i%5) == 3){
            cout << i << endl;
        }
    }

    return 0;
}
