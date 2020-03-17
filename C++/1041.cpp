#include<bits/stdc++.h>
using namespace std;

int main(){

    int time, h1, h2;
    
    cin >> h1 >> h2;
    if (h2 > h1){
        time = h2 - h1;
    }
    else{
        time = (h2 + 24) - h1;
    }
    cout << "O JOGO DUROU "<< time <<" HORA(S)\n";
    return 0;
}