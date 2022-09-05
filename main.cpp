#include <iostream>

using namespace std;

// Iterator is a class wrapper for the iterator object found in the <iterator> class
// return the last iterator element
Iterator unique(Iterator first, Iterator last) {
  // check if it's not empty
  if (first == last)
    return last;

  // more of a sort algorthm
  // remove duplicates by assigning the duplicate to the next element
  Iterator current_element = first;
  while (current_element != last) {
    // go through the list and remove duplicates
    // starts to check from the second element from the current one
    //remove all the consecutive duplicates
    Iterator search = current_element++;
    while (search ! = last && *current_element == *search) {
      //if they are equal - duplicates
      //remove them by assinging the item that follows current to the next item after search
      current_element++ = search++;
    }
    // after removing all the duplicates of the current element
    // move to the next elememt
    current_element++;
  }

  //current_element is the new last element
  return current_element;
}

int main() { return 0; }