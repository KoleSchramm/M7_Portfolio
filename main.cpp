#include <iostream>
#include <thread>

using namespace std;

int counter = 0;

void countUp() {
    for (int i = 0; i < 20; i++) {
        counter++;
    };
}

void countDown() {
    for (int i = 0; i < 20; i++) {
        counter--;
    };
}

int main() {
    thread th1(countUp);
    th1.join();

    cout << counter << endl;

    thread th2(countDown);
    th2.join();

    cout << counter << endl;
}