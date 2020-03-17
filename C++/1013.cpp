#include <iostream>

using namespace std;

int main(){
    int a, b, c, MAIOR;
    cin >> a >> b >> c;

    MAIOR = (a + b + abs(a - b))/2;
    MAIOR = (MAIOR + c + abs(MAIOR - c))/2;
    cout << MAIOR << " eh o maior" << "\n";
}
