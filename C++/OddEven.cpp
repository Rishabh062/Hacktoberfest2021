#include<iostream>
using namespace std;

class Test {
    int num;
public:

    void input() {
        cout << "Enter a number:";
        cin>>num;
    }

    void check() {
        if (num % 2 == 0) {
            cout << "Number is even:" << num;
        } else {
            cout << "Number is odd:" << num;
        }
    }
};

int main() {

    Test tt;

    tt.input();
    tt.check();

    return 0;
}
