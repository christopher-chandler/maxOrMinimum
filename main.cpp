#include <iostream>
#include "maxOrMinimum.hpp"

int main (int argc, char** argv){
    
    string mainArg(argv[1]);
     
    if (mainArg == "--array"){
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        //Create the array with the size the user input
        int *array = new int[size];

        cout << "Enter the numbers that should be placed in the array";
        for(int i = 0; i < size; ++i)
            {
                int n; 
                cin >> n;
                array[i] = n;
            }

    int maxNumber = biggestNumber(array);
    int minNumber = smallestNumber(array);

    cout << "The biggest number is " << maxNumber<<endl;
    cout << "the smallest number is " << minNumber<<endl;
  
    } 
}

     
