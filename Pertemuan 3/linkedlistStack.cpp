#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;
    int input;

    //input berhenti kerika input bukan angka
    while (cin >> input) {
        s.push(input);
    }

    // mengeluarkan semua dara dari stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s .pop();
}

cout << endl;

return 0;
}