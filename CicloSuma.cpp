#include <iostream>
using namespace std;
int main() {
    int extNum, sumDigit = 1, numEntero;
    
    while(numEntero != 0) {
        sumDigit += sumDigit;
    }
    cout << "La suma de los digitos es: " << sumDigit << endl;
    return 0;
}
