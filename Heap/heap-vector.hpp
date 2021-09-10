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
  int getsize();
  void push(const PRIMARY_TYPE element);
  PRIMARY_TYPE pop();
  PRIMARY_TYPE get();

private:
  // Private Properties
  std::vector<PRIMARY_TYPE> data;
  int size;

  // Private Methods
  void reHeapDown(int index);
  void reHeapUp(int index);

};
#endif // __HEAP_VECTOR_HPP__