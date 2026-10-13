#include <iostream>
using namespace std;

void pyramidStar(int n, int row){
    if (row>n){
        return;
    }

    int space = n-row;

    for(int i=0; i < space; i++){
        cout << " ";
    }

    for (int i=0; i < 2*row-1; i++){
        cout << "*";
    }
    
    cout << endl;

    pyramidStar(n,row+1);
}

int main(){

    int n, row;

    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the starting row: ";
    cin >> row;

    pyramidStar(n,row);
    return 0;
}
