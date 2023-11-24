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
    int arra[arralenght], arrastart[arralenght], choosetype, maxarrasort, minarrasort;

        for (int i = 0; i < arralenght; i++) {
            arra[i] = rand() % 199 - 99;
            arrastart[i] = arra[i];
        }
        cout << "Array created and sorted\n";


        start = steady_clock::now();
        for (int i = 0; i < arralenght; i++) {
            for (int j = 0; j < arralenght - 1; j++) {
                if (arra[j] > arra[j + 1])
                    swap(arra[j], arra[j + 1]);
            }
        }
        end = steady_clock::now();
        result = duration_cast<nanoseconds>(end - start);

        cout << "Sorting time = " << result.count() << "\n\n";

        cout << "Create new array/Show not sorted array/Show sorted array - 1\n";
        cout << "Min/Max from not sorted and sorted array - 2\n";
        cout << "Index, average from not sorted array - 3\n";
        cout << "Index, average from sorted array - 4\n";
        cout << "Amount of numbers(in sort) that <A - 5\n";
        cout << "Amount of numbers(in sort) that >B - 6\n";
        cout << "Swap elements - 7\n";
        cout << "IDZ 1 - 8\n";
        cout << "Exit - 0\n\n";


        do {
            cout << "Choose what you want(Show choices - 9)\n";
            cin >> choosetype;
            switch (choosetype)
            {
            case 1: {
                int choosetypearra;
                do {
                    cout << "Choose what you want(func 1)\n" << "Create new array - 1\n" << "Show not sorted array - 2\n" << "Show sorted array - 3\n" << "Exit from func - 0\n";
                    cin >> choosetypearra;
                    switch (choosetypearra)
                    {
                    case 1: {
                        for (int i = 0; i < arralenght; i++) { 
                            arra[i] = rand() % 199 - 99;
                            arrastart[i] = arra[i];
                        }
                        cout << "New array created and sorted\n";

                        auto start = steady_clock::now();
                        for (int i = 0; i < arralenght; i++) {
                            for (int j = 0; j < arralenght - 1; j++) {
                                if (arra[j] > arra[j + 1])
                                    swap(arra[j], arra[j + 1]);
                            }
                        }
                        auto end = steady_clock::now();
                        auto result = duration_cast<nanoseconds>(end - start);
                        cout << "Sorting time = " << result.count() << "\n";

                        break;
                    }

                    case 2: {
                        cout << "Not sorted array\n";
                        for (int i = 0; i < arralenght; i++)
                        {
                            cout << arrastart[i] << "   ";
                        }
                        cout << "\n";
                        break;

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

