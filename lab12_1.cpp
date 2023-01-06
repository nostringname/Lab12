#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    string x;
    string y;
    srand(time(0));
    int i = rand()%9;

    switch(i) {
        case 0: x = "A"; break;
        case 1: x = "B+"; break;
        case 2: x = "B"; break;
        case 3: x = "C+"; break;
        case 4: x = "C"; break;
        case 5: x = "D+"; break;
        case 6: x = "D"; break;
        case 7: x = "F"; break;
        case 8: x = "W"; break;
    }

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << x <<" in this 261102.";
    return 0;
    }

