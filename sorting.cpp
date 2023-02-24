// #PRAGMA ONCE
#include "sorting.h"

//Insertion Sort
/*
It compares each element to each other and places the elemnt into the correct position
*/
void sorting::InsertionSort()//sirve
{

	int array[5]= {4,1,9,6,10};	//an array of size 5 in order to test it out
	int i, key;
	do
	 {
		 for(i =0; i<5;i++)
			{
				key = array[i+1];   			//the
			if(array[i+1] < array[i])			//if the array is 1 is less than the actual array it becomes true
				{
					 array[i+1] = array[i];			//we pass the actuall array into the index 1
					 array[i] = key;						//and we pass the key into the actual array
				 }
			 }
	 }while(array[0] > array[1]);			//it will finish it reaches the end of the array

	 for(i =0; i<5;i++)
		{
			cout << array[i] << endl;
		}

//	return 0;
}
//================================================================================================================================================
//QUICK SORT
//int will print the sorted elements given
 void sorting::quick_sort_print()
 {
	 int array[30],n,i;
    cout << "enter the number of data element to be sorted: ";
    cin >> n;

    cout << "Enter array elements: " << endl;

    for (i=0;i < n;i++)
    // {
      cin >> array[i];
      quicksort(array,0,n-1); 		//quick sort function being called with 3 parameters, the actual
      cout << "Sorted Data: ";
      for (i =0; i <n;i++)
        // {
         cout << " -----> " << array[i];
        // }
    // }


}

/*the partition function will be called here calling the sorted elements and saving
them into the array */
 void sorting::quicksort(int array[],int low, int high)
  {
    int j;
    if(low<high)
     {
        j = partition(array,low,high);
        quicksort(array,low,j-1);
        quicksort(array,j+1,high);
     }
  }


/*it divides teh array into two partitions based on a chosen pivot element. The partition will reaarrange the array so that the
elements that are smaller than the pivot are placed to the left of it, and the elements larger than the pivot are placed to the right of it.
this will happen until the end of the array and once it gets sorted */

  int sorting::partition(int array[],int low ,int high)
    {
     int pivot,i,j,temp;
     pivot = array[low];
     i=low;
     j= high+1;
     do{
         do
          i++;
        while(array[i]<pivot && i <=high);
        do
				{
          j--;
        }while(pivot<array[j]);
          if (i<j)
            {
              temp = array[i];
              array[i] = array[j];
              array[j] = temp;
            }
        }while(i<j);
        array[low] = array[j];
        array[j] = pivot;

        return (j);

  }


//=============================================================================================================================================================

// //SELECTION SORT
void sorting::selection_sort()
{
	/*
		It is a sorting algoritm that sorts an array by finding the minimum
		the element from the unsorted part of the array and moving it tot the beginning of
		the sorted pat of thee array
	*/
   int array[] = {4,5,2,1,6,7,2,1,10,11};

    for (int i =0; i < 10; i++)
    {
      cout << array[i] << ",";
    }
    cout << endl << endl;;

    for (int i=0; i < 10; i++)
     {
        int smallest = array[i];
        int smallestIndex = i;

        for (int m=i; m < 10; m++)
        {
            if(array[m] < smallest)
            {
              smallest = array[m];
              smallestIndex = m;
            }
        }
        swap(array[i], array[smallestIndex]);
      }

      for (int i =0; i < 10; i++)
        {
        cout << array[i] << ",";
        }
        cout << endl << endl;
//return 0;
}
//==================================================================================================================

void sorting::mergeSort(int array[], int low, int high)
 {
	 /* it calls the merge function so that it could sort alll the elements and be saved.

	 */
    if (low < high)
     {
       int mid;

       mid = (low + high) /2;

       mergeSort(array, low,mid);
       mergeSort(array, mid+1, high);
       merge(array,low,high,mid);
     }

//     return;


 }

void sorting::merge(int A[], int low, int high, int mid)
{
	/*
		 the function first checks if the lenght of the list is less than or queal to 1
		 in whichcase the list is alreay sorted and can be returned as it is.
		 Otherwise, the funcntion divides the list into two halves, sorts each half recursively and the merges the sorted halves back
		 together.
	*/
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            c[k] = A[i];
            k++;
            i++;
        }
        else
        {
            c[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = A[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        A[i] = c[i];
    }
}

void sorting::merge_sort_print()
{
 int arraySize = 7;
  int array[7] = {38,27,43,3,9,82,10};

  int low =0;
  int high = arraySize-1;

  mergeSort(array,low,high);

  for (int i=0; i < 7; i++)
   {
     cout << array[i] << endl;
   }
}
// ====================================================================================================================

/*
	The parameter is sorted to search and the target parameters is the value to find. It is going to se two pointers
	left and right to first and last indexes of the array. the function will computer the middleindex of the current
	subarray and will compare to the target value. if the middle element is equal to the target the function will return
	its index if the middle element is less than the target the function updates the left pointer to the search.
*/
int sorting::binarySearch(int array[], int size, int searchValue)
{
 int low=0;
 int high = size -1;

 int mid;

while(low <= high)												//checks if the low value is less or equal than the high
 	{

    mid = (low + high) /2;								//it will add the highers and the lowest and dives the both values by 2

    if (searchValue == array[mid])				//the value being search checks with the middle value and returns it if true
     {
       return mid;
     }
     else if (searchValue >= array[mid]) 	//Otherwise the value search is >= than the middle value it adds 1 to the middle and store it on the low
      {
        low = mid + 1;
      }
      else
       {
         high = mid - 1;                  //if the first 2 conditions fail, the the middle value gets subtracted by 1 and gets stored on high
       }
 	 }
}

 void sorting::printBinarySearch()
  {
		int array[] = {12, 22, 34, 47, 55, 67, 82, 98};					//array  of values given

		int userValue;

		cout << "Enter an integer: " << endl;										//users input to be searched
		cin >> userValue;

		int result = binarySearch(array, 8, userValue);					//calling the binary search function with size 8 in order to find the value

		if (result >= 0)
		 {
			 cout << "The number "<< array[result] << " was found at the element with index " << result << endl;
		 }
		 else
			{
				cout << "The number " << userValue << " was not found" <<endl;
			}
	}







	// ==================================================================================================================

	void sorting::shell_sort(int array[], int lenght)
	{
		/*
			it sets the value of the lenght of the arrya divided by 2    - lenght/2 where lenght will be the size of the array
			then the function will be repeatedly divides de array into the subarrrays of the lenght. It sorts each subarray using insertion sort reducing the gap
			value by a factor of 2 until the lenght is 1.

			It works as follow, and it inserts each subsequent element into its  correct position among the already sorted elements and this is done by comparing each
			element to the element gap. 
		*/
	  int gap = lenght / 2; //gap of 2

	  while(gap > 0)
	   {
	     int j=0;

	     for (int i =gap; i < lenght; i++)
	      {
	        int temp = array[i];

	        for (j=i; j >= gap && array[j-gap] > temp; j-=gap)
	         {
	           array[j] = array[j-gap];
	         }
	        array[j] = temp;
	      }

	     gap = gap /2;
	   }
	}

	void sorting::shellSortPrint()
	 {
		 int array[] = {12,34,54,2,3};

		 int lenght = 5;


		 shell_sort(array,lenght);

		 for (int i= 0; i < lenght; i++)
			{
				 cout << array[i] << "      ";
			}
	 }
