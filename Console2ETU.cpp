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
    auto start2 = steady_clock::now();
    int minarrasort=arra[0];                                 //min from bubble
    for (int i = 0; i < arralenght; i++) {
        for (int j = 0; j < arralenght - 1; j++) {
            if ((arra[j] < arra[j + 1]) && (minarrasort > arra[j])){
                minarrasort = arra[j];
        }
        }
    }
    
    int maxarrasort=arra[0];                                 //max from bubble
    for (int i = 0; i < arralenght; i++) {
        for (int j = 0; j < arralenght - 1; j++) {
            if ((arra[j] < arra[j + 1]) && (maxarrasort < arra[j + 1])) {
                maxarrasort = arra[j + 1];
            }
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
                                            for (int i = 0; i < arralenght; i++) {
                                                for (int j = 0; j < arralenght - 1; j++) {
                                                    if ((arrastart[j] < arrastart[j + 1]) && (minarrastart > arrastart[j])) {
                                                        minarrastart = arrastart[j];
                                                    }
                                                }
                                            }

                                            int maxarrastart = arrastart[0];                                 //max 
                                            for (int i = 0; i < arralenght; i++) {
                                                for (int j = 0; j < arralenght - 1; j++) {
                                                    if ((arrastart[j] < arrastart[j + 1]) && (maxarrastart < arrastart[j + 1])) {
                                                        maxarrastart = arrastart[j + 1];
                                                    else;
                                                    }
                                                }
                                            }
        for (int i = 0; i < arralenght; ++i) {
            if (arra[i] > maxarrastart) {
                maxarrastart = arra[i];
            }
            if (arra[i] < minarrastart) {
                minarrasort=arra[i]
            }




}







    auto end3 = steady_clock::now();
    auto result3 = duration_cast<nanoseconds>(end3 - start3);
    cout << "\n\n\nВремя поиска несорт = " << result3.count() << "\n \n \n";

    cout << "\nmin from not sort= " << minarrastart;
    cout << "\nmax from not sort= " << maxarrastart;

    return 0;
}

