#include <iostream>
#include <chrono>
#include <time.h>
#include <algorithm>
//srand(time(NULL));
using namespace std;
using namespace chrono;

int main()
{
    setlocale(0, "");
    constexpr int arralenght = 100;
    int arra[100];
    for (int i = 0; i < arralenght; i++)
        arra[i] = rand() % 199 - 99;
    for (int i = 0; i < arralenght; i++) {
        for (int j = 0; j < arralenght - 1; j++) {
            if (arra[j] > arra[j + 1])
                swap(arra[j], arra[j + 1]);
        }
    }
    for (int i = 0; i < arralenght; i++)
        cout << arra[i] << " ";

    time_point<steady_clock, duration<__int64, ratio<1, 1000000000>>> start, end;
    nanoseconds result;

    start = steady_clock::now();
    cout << endl;
    end = steady_clock::now();
    result = duration_cast<nanoseconds>(end - start);
    cout << result.count();

    auto start1 = steady_clock::now();
    cout << endl;
    auto end1 = steady_clock::now();
    auto result1 = duration_cast<nanoseconds>(end1 - start1);
    cout << result1.count();
    return 0;
}

