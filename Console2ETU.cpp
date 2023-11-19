﻿#include <iostream>
#include <chrono>
#include <time.h>
#include <algorithm>
//srand(time(NULL));
using namespace std;
using namespace chrono;

int main()
{
    time_point<steady_clock, duration<__int64, ratio<1, 1000000000>>> start, end;
    



    setlocale(0, "");
    constexpr int arralenght = 100;
    int arra[arralenght];
    int arrastart[arralenght];
    int choosetype, maxarrasort, minarrasort;
   
   
    auto result = duration_cast<nanoseconds>(end - start);


    do {
        cout << "\nВыберите номер(общая функция)\n"; 
        cin >> choosetype;
        switch (choosetype)
        {
            //1
        case 1: {
            for (int i = 0; i < arralenght; i++) //ввод в массив
                arra[i] = rand() % 199 - 99;
            for (int i = 0; i < arralenght; i++) //второй массив, который явл исходным
                arrastart[i] = arra[i];
            cout << "Массив создан и отсортирован \n";


            //bubble
            auto start = steady_clock::now();
            for (int i = 0; i < arralenght; i++) {
                for (int j = 0; j < arralenght - 1; j++) {
                    if (arra[j] > arra[j + 1])
                        swap(arra[j], arra[j + 1]);
                }
            }
            auto end = steady_clock::now();
            auto result = duration_cast<nanoseconds>(end - start);

            cout << "Время сортировки = " << result.count() << "\n \n \n";
            int choosetypearra;
            cout << "Выберите что сделать с массивом\n" << "Показать not sort arra - 1\n" << "Показать sort arra - 2\n" << "Выход - 0\n";
            do {
                cin >> choosetypearra;
                switch (choosetypearra)
                {

                case 1: {
                    cout << "Not sort arra\n";
                    for (int i = 0; i < arralenght; i++)
                    {
                        cout << arrastart[i] << "   ";
                    }
                    cout << "\nВыберите что сделать с массивом\n" << "Показать not sort arra - 1\n" << "Показать sort arra - 2\n" << "Выход - 0\n";
                    break;

                }
                case 2: {
                    cout << "Sort arra\n";
                    for (int i = 0; i < arralenght; i++) {
                        cout << arra[i] << "   ";
                    }
                    cout << "\nВыберите что сделать с массивом\n" << "Показать not sort arra - 1\n" << "Показать sort arra - 2\n" << "Выход - 0\n";
                    break;
                }
                } //switchEND
            } while (choosetypearra);
            break;
        }
        // 3
        case 2: {
            auto start = steady_clock::now();
            int minarrastart = arrastart[0];
            int maxarrastart = arrastart[0];
            for (int i = 0; i < arralenght; ++i) {
                if (arrastart[i] > maxarrastart) {
                    maxarrastart = arrastart[i];
                }
                if (arrastart[i] < minarrastart) {
                    minarrastart = arrastart[i];
                }
            }




            auto end = steady_clock::now();
            auto result = duration_cast<nanoseconds>(end - start);
            cout << "\n\n\nВремя поиска несорт = " << result.count() << "\n";

            cout << "\nmin from not sort= " << minarrastart;
            cout << "\nmax from not sort= " << maxarrastart << "\n\n";
            //min max from bubble
            int maxarrasort = arra[0];
            int minarrasort = arra[0];
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
            cout << "\n\n\nВремя поиска после бабла = " << result.count() << "\n";

            cout << "\nmin from sort= " << minarrasort;
            cout << "\nmax from sort= " << maxarrasort<<"\n\n";

            break; }
        case 4: {
            //min max~/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                //min max from bubble(4)
            int maxarrasortn = arra[0];
            int minarrasortn = arra[0];
            int averagesort;
            auto start = steady_clock::now();
            for (int i = 0; i < arralenght; ++i) {
                if (arra[i] > maxarrasortn) {
                    maxarrasortn = arra[i];
                }
                if (arra[i] < minarrasortn) {
                    minarrasortn = arra[i];
                }
            }
            averagesort = (minarrasortn + minarrasortn)/2;
            auto end = steady_clock::now();
            auto result = duration_cast<nanoseconds>(end - start);
            cout << "\n\n\nВремя поиска среднего после бабла = " << result.count() << "\n \n \n";

            cout << "\naverage from sort= " << averagesort;
            break; }
        case 5: {

            //min max from not sort
            auto start5 = steady_clock::now();
            int minarrastartn = arrastart[0];                                 //min 
            int maxarrastartn = arrastart[0];
            int averagenotsort;
            for (int i = 0; i < arralenght; ++i) {
                if (arrastart[i] > maxarrastartn) {
                    maxarrastartn = arrastart[i];
                }
                if (arrastart[i] < minarrastartn) {
                    minarrastartn = arrastart[i];
                }
            }
            averagenotsort = (minarrastartn + maxarrastartn)/2;




            auto end = steady_clock::now();
            auto result = duration_cast<nanoseconds>(end - start);
            cout << "\n\n\nВремя поиска среднего несорт = " << result.count() << "\n \n \n";

            cout << "\naverage from not sort= " << averagenotsort;



            break;
        }
        }
    }
        while (choosetype);
    
    return 0;
}

