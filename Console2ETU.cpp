#include <iostream>
#include <chrono>
#include <time.h>
#include <algorithm>
//srand(time(NULL));
using namespace std;
using namespace chrono;

int main()
{
    time_point<steady_clock, duration<__int64, ratio<1, 1000000000>>> start, end;
    nanoseconds result;



   
    setlocale(0, "");
    constexpr int arralenght = 100;
    int arra[arralenght];
    int arrastart[arralenght];
    
    
    
    for (int i = 0; i < arralenght; i++) //ввод в массив
        arra[i] = rand() % 199 - 99;
    for (int i = 0; i < arralenght; i++) //второй массив, который явл исходным
        arrastart[i] = arra[i];



    //bubble
    auto start1 = steady_clock::now();
    for (int i = 0; i < arralenght; i++) {          
        for (int j = 0; j < arralenght - 1; j++) {
            if (arra[j] > arra[j + 1])
                swap(arra[j], arra[j + 1]);
        }
    }
    auto end1 = steady_clock::now();
    auto result1 = duration_cast<nanoseconds>(end1 - start1);
    for (int i = 0; i < 100; i++) {
        cout << arra[i] << "\n";
    }
    cout << result1.count()<<"\n \n \n";


    //min max from bubble
    int maxarrasort=arra[0];
    int minarrasort=arra[0];
    auto start2 = steady_clock::now();
    for (int i = 0; i < arralenght; ++i) {
        if (arra[i] > maxarrasort) {
            maxarrasort = arra[i];
        }
        if (arra[i] < minarrasort) {
            minarrasort = arra[i];
        }
    }
    auto end2 = steady_clock::now();
    auto result2 = duration_cast<nanoseconds>(end2 - start2);
    cout <<"\n\n\nВремя поиска после бабла = "<< result2.count() << "\n \n \n";
    
    cout << "\nmin from sort= " << minarrasort;
    cout << "\nmax from sort= " << maxarrasort;



    //min max from not sort
    auto start3 = steady_clock::now();
    int minarrastart = arrastart[0];                                 //min 
    int maxarrastart = arrastart[0];
    for (int i = 0; i < arralenght; ++i) {
        if (arrastart[i] > maxarrastart) {
            maxarrastart = arrastart[i];
        }
        if (arrastart[i] < minarrastart) {
            minarrastart = arrastart[i];
        }
    }




    auto end3 = steady_clock::now();
    auto result3 = duration_cast<nanoseconds>(end3 - start3);
    cout << "\n\n\nВремя поиска несорт = " << result3.count() << "\n \n \n";

    cout << "\nmin from not sort= " << minarrastart;
    cout << "\nmax from not sort= " << maxarrastart;


    //min max~
















    return 0;
}

