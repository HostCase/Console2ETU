﻿//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ
//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ
//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ//////ПЕРЕВЕСТИ НА АНГЛ
#include <iostream>
#include <chrono>
#include <time.h>
#include <algorithm>


using namespace std;
using namespace chrono;

int main()
{
    time_point<steady_clock, duration<__int64, ratio<1, 1000000000>>> start, end;
    nanoseconds result;



    setlocale(0, "");
    constexpr int arralenght = 100;
    int arra[arralenght], arrastart[arralenght], choosetype, maxarrasort, minarrasort;
    ////создание массива 
        for (int i = 0; i < arralenght; i++) { //ввод в массив
            arra[i] = rand() % 199 - 99;
            arrastart[i] = arra[i];
        }
        cout << "Массив создан и отсортирован автоматически\n";


        //bubble
        start = steady_clock::now();
        for (int i = 0; i < arralenght; i++) {
            for (int j = 0; j < arralenght - 1; j++) {
                if (arra[j] > arra[j + 1])
                    swap(arra[j], arra[j + 1]);
            }
        }
        end = steady_clock::now();
        result = duration_cast<nanoseconds>(end - start);

        cout << "Время сортировки = " << result.count() << "\n \n \n";
    do {
        cout << "\nВыберите номер(общая функция)\n";
        cin >> choosetype;
        switch (choosetype)
        {
            //1
        case 1: {
            int choosetypearra;
            cout << "Выберите что сделать с массивом\n"<<"Создать новый массив - 1\n" << "Показать not sort arra - 2\n" << "Показать sort arra - 3\n" << "Выход - 0\n";
            do {
                cin >> choosetypearra;
                switch (choosetypearra)
                {
                case 1: {
                    for (int i = 0; i < arralenght; i++) { //ввод в массив
                        arra[i] = rand() % 199 - 99;
                        arrastart[i] = arra[i];
                    }
                    cout << "Новый массив создан и отсортирован\n";


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
                    cout << "\nВыберите что сделать с массивом\n" << "Создать новый массив - 1\n" << "Показать not sort arra - 2\n" << "Показать sort arra - 3\n" << "Выход - 0\n";
                    break;
                }

                case 2: {
                    cout << "Not sort arra\n";
                    for (int i = 0; i < arralenght; i++)
                    {
                        cout << arrastart[i] << "   ";
                    }
                    cout << "\nВыберите что сделать с массивом\n" << "Создать новый массив - 1\n" << "Показать not sort arra - 2\n" << "Показать sort arra - 3\n" << "Выход - 0\n";
                    break;

                }
                case 3: {
                    cout << "Sort arra\n";
                    for (int i = 0; i < arralenght; i++) {
                        cout << arra[i] << "   ";
                    }
                    cout << "\nВыберите что сделать с массивом\n" << "Создать новый массив - 1\n" << "Показать not sort arra - 2\n" << "Показать sort arra - 3\n" << "Выход - 0\n";
                    break;
                }
                } //switchEND
            } while (choosetypearra);
            break;
        }
              // 3
        case 2: {

            int minarrastart = arrastart[0], maxarrastart = arrastart[0];
            auto start = steady_clock::now();
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
            int maxarrasort = arra[0], minarrasort = arra[0];
            auto start1 = steady_clock::now();
            for (int i = 0; i < arralenght; ++i) {
                if (arra[i] > maxarrasort) {
                    maxarrasort = arra[i];
                }
                if (arra[i] < minarrasort) {
                    minarrasort = arra[i];
                }
            }
            auto end1 = steady_clock::now();
            auto result1 = duration_cast<nanoseconds>(end1 - start1);
            cout << "\n\n\nВремя поиска после бабла = " << result1.count() << "\n";

            cout << "\nmin from sort= " << minarrasort;
            cout << "\nmax from sort= " << maxarrasort << "\n\n";

            break; }




        //Среднее not sort

        case 3: {
            int minarrastartn = arrastart[0], maxarrastartn = arrastart[0], averagenotsort;
            auto start = steady_clock::now();
            for (int i = 0; i < arralenght; ++i) {
                if (arrastart[i] > maxarrastartn) {
                    maxarrastartn = arrastart[i];
                }
                if (arrastart[i] < minarrastartn) {
                    minarrastartn = arrastart[i];
                }
            }
            auto end = steady_clock::now();
            auto result = duration_cast<nanoseconds>(end - start);
            cout << "\n\n\nВремя поиска среднего несорт = " << result.count() << "\n \n \n";
            averagenotsort = (minarrastartn + maxarrastartn) / 2;

            cout << "\naverage from not sort= " << averagenotsort;



            break;
        }



        // Среднее sort
        case 4: {
            int maxarrasortn = arra[0], minarrasortn = arra[0], averagesort;
            auto start = steady_clock::now();
            for (int i = 0; i < arralenght; ++i) {
                if (arra[i] > maxarrasortn) {
                    maxarrasortn = arra[i];
                }
                if (arra[i] < minarrasortn) {
                    minarrasortn = arra[i];
                }
            }
            auto end = steady_clock::now();
            auto result = duration_cast<nanoseconds>(end - start);
            cout << "\n\n\nВремя поиска среднего после бабла = " << result.count() << "\n \n \n";
            averagesort = (minarrasortn + maxarrasortn) / 2;
            cout << "\naverage from sort= " << averagesort;
            break; }
        }

        //Выводит индексы всех элементов, которые равны этому значению, и их количество. Подсчитайте время поиска.
        


    } while (choosetype);

    return 0;
}
