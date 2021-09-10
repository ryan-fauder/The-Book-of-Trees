#ifndef __HEAP_VECTOR_HPP__
#define __HEAP_VECTOR_HPP__

#include <iostream>
#include <vector>

template <typename PRIMARY_TYPE>
class VHeap
{

public:
  // Public Methods
  VHeap();
  int size();
  void push(PRIMARY_TYPE element);
  PRIMARY_TYPE pop(PRIMARY_TYPE element);
  PRIMARY_TYPE get(PRIMARY_TYPE element);

private:
  // Private Properties
  std::vector<PRIMARY_TYPE> data;
  int size;

  // Private Methods
  void reHeapDown(PRIMARY_TYPE element);
  void reHeapUp(PRIMARY_TYPE element);

};
#endif // __HEAP_VECTOR_HPP__