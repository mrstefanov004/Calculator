#include <iostream>

using namespace std;

int main()
{
     int a, b;
    char op;

    cout << "enter 1st number: ";
    cin >> a;
    cout << "enter operator: ";
    cin >> op;
    cout << "enter 2nd number: ";
    cin >> b;
    int result;
    if(op == '+'){
        result = a + b;
    }

    else if(op == '-'){
        result = a - b;
    }

    else if(op == '*'){
        result = a * b;
    }

    else if(op == '/'){
        result = a / b;
    }

    else {
        cout << "invalid oeprator";
    }
        cout << result;
    return 0;
}
