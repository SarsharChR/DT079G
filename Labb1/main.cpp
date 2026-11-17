
// Created by 1998s on 2/16/2026.

#include "intbuffer.h"
#include "int_sorted.h"
#include <iostream>
#include <ctime>
#include <chrono>


//Swap function
void swap(int *xp, int *yp);

void selectionSort(int arr[], int n);

//Function to print an array
void printArray(int arr[], int size);

void print(int_buffer a);
int_buffer f(int_buffer buf);
int_buffer L(int_buffer buf);
int main() {
 //int source[]={1,2,3,4,5};
    //int_buffer a(source,5);
    //int_buffer b(5);
    //b = a;
    //int_buffer c(std::move(b));
    //std::cout << "c: ";
    //print(c);
    //int source2[]={5,6,7,8};
    //int_buffer d(source2,4);
    int source3[]={2,1,3,4};
    int_buffer e(source3,4);
    //d = std::move(e);
    //std::cout << std::endl << "d: ";
    //print(d);
    //int_buffer x(10);
    //int_buffer y = L(x);
   //y = L(x);


    //int_sorted sd(d.begin(),d.size());
    int_sorted se(e.begin(),e.size());
    //int_sorted merged = sd.merge(se);
    //int_buffer c(merged.begin(),merged.size());
    //L(c);
    //int arr[] = {5, 1, 8, 3, 2, 9, 4};
    //size_t n = sizeof(arr) / sizeof(arr[0]);

    //int_sorted s = sort(arr, arr + n);

    //for (auto p = s.begin(); p != s.end(); ++p)
    //    std::cout << *p << " ";
    //std::cout << "\n";
    const int N = 400000;
    const int RUNS = 3;

    srand((unsigned)time(nullptr));

    for (int run = 1; run <= RUNS; ++run) {
        int* arr_merge = new int[N];
        int* arr_select = new int[N];
        int* arr_std = new int[N];


        for (int i = 0; i < N; ++i) {
            int r = rand();
            arr_merge[i]  = r;
            arr_select[i] = r;
            arr_std[i]    = r;
        }

        // 1) int_sorted (merge-sort)
        auto t1 = std::chrono::steady_clock::now();
        int_sorted s = sort(arr_merge, arr_merge + N);
        auto t2 = std::chrono::steady_clock::now();
        std::cout << "[Run " << run << "] int_sorted merge-sort: "
                  << std::chrono::duration<double>(t2 - t1).count()
                  << " s\n";
        // 2) selection sort
        auto t3 = std::chrono::steady_clock::now();
        selectionSort(arr_select, N);
        auto t4 = std::chrono::steady_clock::now();
        std::cout << "[Run " << run << "] selection sort:       "
                  << std::chrono::duration<double>(t4 - t3).count()
                  << " s\n";
        // 3) std::sort
        auto t5 = std::chrono::steady_clock::now();
        std::sort(arr_std, arr_std + N);
        auto t6 = std::chrono::steady_clock::now();
        std::cout << "[Run " << run << "] std::sort:            "
                  << std::chrono::duration<double>(t6 - t5).count()
                  << " s\n";

        std::cout << "-----------------------------\n";

        delete[] arr_merge;
        delete[] arr_select;
        delete[] arr_std;
    }



    return 0;
}


   void print(int_buffer a) {
    for (auto &e : a) {
        std::cout << e << ", ";
    }
};

//int_buffer f(int_buffer buf) {
//    int v = 1;
//    for (int * i = buf.begin(); i != buf.end(); ++i)
//        *i = v++;
//    for (int * i = buf.begin(); i != buf.end(); ++i)
//        std::cout << *i << "\n";
//    return buf;
//};
//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
//Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


int_buffer L(int_buffer buf) {
    int v = 1;
    for (auto& e : buf) {
        e = v++;
    }
    for (auto e : buf) {
        std::cout << e << "\n";
    }
    return buf;
}
