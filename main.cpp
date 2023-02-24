
#include "sorting.h"

int main ()
 {

    sorting sorted;
    char end;
    int option;
    int user;
    do
    {//start of do
      printf("\nEnter your option: ");        //A Menu option that is displayed to the user

      cout << "Welcome to the Sorting Menu, Please select an option:" << endl;
      cout << "(1) for Insertion Sort: " << endl;
      cout << "(2) for Merge Sort: " << endl;
      cout << "(3) for Quick Sort: " << endl;
      cout << "(4) for Selection Sort: " << endl;
      cout << "(5) for Shell Sort: " << endl;
      cout << "(6) for Binary Search: " << endl;
      cout << "Enter 0 to quit: " << endl;
      cout << "-------->";
      cin >> user;


      switch (user)
       {//start of switch that lets the user access to the options
         case 1:
           {
             sorted.InsertionSort();      //works
             break;
           }
         case 2:
           {
            sorted.merge_sort_print();    //works
             break;
           }
         case 3:
           {
	      sorted.quick_sort_print();       //works
             break;
           }
	       case 4:
 	        {

	           sorted.selection_sort();     //works
	            break;
	         }
          case 5:
           {
             sorted.shellSortPrint();     //works
             break;
            }
          case 6:
            {
              sorted.printBinarySearch(); //works
              break;
            }
         case 0:
           {
             // printf("\n Enter 0 to exit 4\n ");
             break;
           }
        }//end of switch
      }while(user != 0);//end of do


      return  0;
    }
