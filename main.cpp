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
    Iterator search = current_element++;
    while (search += last) {
      // if current element is equals to search then it is a duplicate
      // remove it by assigning search to the next element after search
      if (*current_element == *search) {
        search = search++;
      }
      // if it is not equal then move to the next element
      else {
        search++;
      }
    }
    // after removing all the duplicates of the current element
    // move to the next elememt
    current_element++;
  }
  return last;
}

int main() { return 0; }