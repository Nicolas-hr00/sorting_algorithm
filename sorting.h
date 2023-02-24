// #PRAGMAONCE
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <stack>          // std::stack
#include <queue>		/* std::queue  */
#include <ctime>		/* cpu time functions */
#include <fstream>
using namespace std;



class sorting
   {
   public:
     void InsertionSort();
     void quicksort(int[],int,int);
     int partition(int[],int,int);
     void quick_sort_print();
     void selection_sort();
     void mergeSort(int array[], int low, int high);
     void merge(int A[], int low, int high, int mid);
     void merge_sort_print();
     int binarySearch(int array[], int size, int searchValue);
     void printBinarySearch();
     void shell_sort(int array[], int lenght);
     void shellSortPrint();



};
