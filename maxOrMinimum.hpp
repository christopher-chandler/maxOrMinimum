#include <iostream>
using namespace std;

int biggestNumber(int listOfNumbers[]) {

    int maxElement = 0; 

    int range = sizeof(*listOfNumbers)/sizeof(listOfNumbers[0]);

    for (int i = 0; i < range; i++) {
        int element = listOfNumbers[i];
         
    if (element > maxElement) {
        maxElement = element; 
        }
    }

      // if all elemnents in the list are the same
    if (maxElement == 0) {
        maxElement = listOfNumbers[1];
    }
 

    return maxElement;
}

 int smallestNumber(int listOfNumbers[]) {
    
 
    int maxElement = biggestNumber(listOfNumbers); 
    int minElement = 0;

    int range = sizeof(*listOfNumbers)/sizeof(listOfNumbers[0]);
 
    
    for (int i = 0; i < range; i++) {
            int element = listOfNumbers[i];
        if (element < maxElement) {
            maxElement = element;
            minElement = element; 
            }

        }

    // if all elemnents in the list are the same
    if (minElement == 0) {
        minElement = listOfNumbers[1];
    }
 
    return minElement;
}
