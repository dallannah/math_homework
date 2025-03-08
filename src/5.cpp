#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int x = rand() % 10 + 1;
    int y = rand() % 10 + 1;

    cout << "The values of x and y are: " << x << ", " << y << endl;

    return 0;
}
