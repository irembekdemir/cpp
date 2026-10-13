#include <iostream>


using namespace std;

int COMPARE(int a, int b)
{
    if(a > b) return 1;
    else if (a < b) return -1;
    else return 0;
}

int binarySearch(int list[], int searchnum, int left, int right)
{
    int middle, val; //index

    while(left<=right){
        middle = (left+right)/2;
        val = COMPARE(list[middle],searchnum); 
        switch(val)
        {
            case -1 : left = middle + 1; break;
            case 0 : return middle;
            case 1: right = middle -1;
        }
    }
    return -1;
}

int main() 
{

    int n, searchnum, left, right;

    cout << "How many integers: ";
    cin >> n;

    if(n<=0) {
        cout << "Invalid list size.\n";
        return 1;
    }

    int list[100];

    if(n>100){
        cout << "Maximum 100 integers allowed.\n";
        return 1;
    }

    cout << "Enter " << n 
         << " integers in ascending order: ";

    for (int i = 0; i < n; i++){
        if (! (cin >> list[i])) {
            cout << "Invalid input. Must be an integer!!!";
            return 1; 
        }
    }

    cout << "Enter the number you want to search for: ";
    //cin >> searchnum;

    if (!(cin >> searchnum)) {
        cout << "Invalid integer input.\n";
        return 1;
    }

    int result = binarySearch(list, searchnum, 0, n - 1);

    if (result != -1)
        cout << "Found at index " << result << '\n'; 

    else 
        cout << "Number not found.";

    return 0;
}
