## Sorting Algorithms Menu 

This repository contains an implementation of different kinds of sorting algorithms in C++

## Table of Contents 

1. [Description] (#description)
2. [Program Output] (#output)
3. [Compile and Execution) (#exe)
4. [Function Headers] (#function)
5. [Classes] (#class)
6. [Resources] (#resources)

## Description <a name= "description"></a>

Insertion Sort: The insertion sort algorithm begins by assumin gthat the first elment of the array is already sorted. Then, it will iterate through the unsorted portion of the array comparing each element to the sorted portion of the array. Inserting it into its correct position the process will continue until all elements in the array are sorted. 
 
Insertion sort is a versatile and efficient sorting algorithm that can be used in a variety of aplications. 
 
The time complexity as follow: 

-Worse case scenario: O(n^2)
 
-Average case scenario: O(n^2)

-Best-case scenearion: O(n)

Quick Sort: Quick sort has been described as a "divide and conquer" algorithm. It will split problems into smaller subproblems. Then, sorting these subproblems the algoritm will use two arrays to hold elements less than an greater than or they could be equal. These are arrays are broken up into sub arrays to be sorted and eventually reconstructed together to create the final sorted array 

The time complexity as follow:

-Worse case scenario: O(nlogn)

-Average case scenario: O(n^2)

-Best-case scenearion: O(nlogn)

Selection Sort: Selection sort is a simple and intuive sorting algorithm that works by selecting the mimimum element from the unsorted portion of an input arraay by swpping it with the first element in the unsorted portion. This process is repeted until the entire array is sorted. One of the main advantages of selection sort is its simplicity and easy implementation. The algorithm is easy to understanad and it only requires a few lines of code.

The time complexity as follow: 

-Worse case scenario: O(n^2)

-Average case scenario: O(n^2)

-Best-case scenearion:  O(n^2)

Merge Sort: Merge sort is a popular and efficient sorting algrithm that works by dividing an input array into smaller subarrays, sorting each subarray recursively, and then merging the sorted subarrays back together to create a fully sorted array. The biggest advantage of Merge sort is its efficient use of memory. 

The time complexity as follow: 

-Worse case scenario: O(nlog n)

-Average case scenario:O(nlog n)

-Best-case scenearion:  O(nlog n)

Binary Search: 	The parameter is sorted to search and the target parameters is the value to find. It is going to se two pointers left and right to first and last indexes of the array. The function will computer the middle index of the current subarray and will compare to the target value. If the middle element is equal to the target the function will return its index if the middle element is less than the target the function updates the left pointer to the search.

The time complexity as follow: 

-Worse case scenario: O(log n)

-Average case scenario:O(log n)

-Best-case scenearion: O(1)

Shell Sort: Shell sort is a variation of insertion sort that works by sorting elements that are far apart from each other. Then, it will gradually decrease the gap between elements to be sorted until the entire array is sorted. One of the biggest advantages from Shell sort is its time complexity which can be faster than other sorting algorithms even on its worse run time O(n^2).

The time complexity as follow: 

-Worse case scenario: O(n^2)

-Average case scenario:O(n^2)

-Best-case scenearion: O(n log n)

## Program Output <a name="Output"></a>

