#include <iostream>
#include <vector>
#include "heap-vector.hpp"

#define this VHeap<PRIMARY_TYPE>

template <typename PRIMARY_TYPE>
int VHeap<PRIMARY_TYPE>::getsize(){
  return this::size;
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::push(const PRIMARY_TYPE element){
  this::data.push_back(element);
  this::ReHeapDown(this::size);
  this::size += 1;
}

template <typename PRIMARY_TYPE>
PRIMARY_TYPE VHeap<PRIMARY_TYPE>::pop(){
  PRIMARY_TYPE value;
  std::swap(this::data.end(), this::data.begin());
  
  this::data.pop_back();
  this::reHeapDown(0);

  this::size -= 1;
  return value;
}

template <typename PRIMARY_TYPE>
PRIMARY_TYPE VHeap<PRIMARY_TYPE>::get(){
  return this::data[0];
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::reHeapDown(int index){
  int left_child = 2 * index + 1;
  int right_child;
  int swap_index;
  while (left_child < this::size)
  {
    right_child = left_child + 1;
    swap_index = right_child;
    
    if(right_child < this::size && this::data[right_child] < this::data[left_child]){
      swap_index = left_child;  
    }

    if(this::data[index] > this::data[swap_index]) break;
    
    std::swap(this::data[index], this::data[swap_index]);
    index = swap_index;
    left_child = 2 * index + 1;
  }
 
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::reHeapUp(int index){
  int parent = (index - 1) / 2;
  while(this::data[index] > this::data[parent] && index > 0){
    std::swap(this::data[index], this::data[(index - 1) / 2]);

    index = parent;
    parent = (index - 1) / 2;
  }
}

template <typename PRIMARY_TYPE>
VHeap<PRIMARY_TYPE>::VHeap(){
  VHeap<PRIMARY_TYPE>::size = 0;
}