#include <iostream>
using namespace std;

void fun(int* ptr) {
    *ptr = 30;
}

int main() {
    int x = 3;
    fun(&x);
    cout << "Expect x = 30" << endl;
    cout << "x = " << x << endl;
}
