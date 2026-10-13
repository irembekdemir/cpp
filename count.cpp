#include <iostream>
using namespace std;

void count(int n){
    if (n==0){
        return;
    }

    cout << n << " ";
    count(n-1);
}

int main() {
    int n;

    cout << "Enter the countdown amount: ";
    cin >> n;

    count(n);
}
