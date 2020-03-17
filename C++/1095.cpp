#include <iostream>

using namespace std;

int main(){
    int I, J;
    I = 1;
    J = 60;
    while (J >= 0){
      cout << "I=" << I << " J=" << J << "\n";
      I = I + 3;
      J = J - 5;
    }
}
