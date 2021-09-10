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
  void print();
private:
  // Private Properties
  std::vector<PRIMARY_TYPE> data;
  int size;

  // Private Methods
  void reHeapDown(int index);
  void reHeapUp(int index);

};

template <typename PRIMARY_TYPE>
int VHeap<PRIMARY_TYPE>::getsize(){
  return VHeap<PRIMARY_TYPE>::size;
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::push(const PRIMARY_TYPE element){
  VHeap<PRIMARY_TYPE>::data.push_back(element);
  VHeap<PRIMARY_TYPE>::reHeapUp(VHeap<PRIMARY_TYPE>::size);
  VHeap<PRIMARY_TYPE>::size += 1;
}

template <typename PRIMARY_TYPE>
PRIMARY_TYPE VHeap<PRIMARY_TYPE>::pop(){
  PRIMARY_TYPE value = VHeap<PRIMARY_TYPE>::data[0];
  std::swap(VHeap<PRIMARY_TYPE>::data[VHeap<PRIMARY_TYPE>::size], VHeap<PRIMARY_TYPE>::data[0]);
  
  VHeap<PRIMARY_TYPE>::data.pop_back();
  VHeap<PRIMARY_TYPE>::reHeapDown(0);

  VHeap<PRIMARY_TYPE>::size -= 1;
  return value;
}

template <typename PRIMARY_TYPE>
PRIMARY_TYPE VHeap<PRIMARY_TYPE>::get(){
  return VHeap<PRIMARY_TYPE>::data[0];
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::reHeapDown(int index){
  int left_child = 2 * index + 1;
  int right_child;
  int swap_index;
  while (left_child < VHeap<PRIMARY_TYPE>::size)
  {
    right_child = left_child + 1;
    swap_index = right_child;
    
    if(right_child < VHeap<PRIMARY_TYPE>::size && VHeap<PRIMARY_TYPE>::data[right_child] < VHeap<PRIMARY_TYPE>::data[left_child]){
      swap_index = left_child;  
    }

    if(VHeap<PRIMARY_TYPE>::data[index] > VHeap<PRIMARY_TYPE>::data[swap_index]) break;
    
    std::swap(VHeap<PRIMARY_TYPE>::data[index], VHeap<PRIMARY_TYPE>::data[swap_index]);
    index = swap_index;
    left_child = 2 * index + 1;
  }
 
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::print(){
  using namespace std;
  for (int i = 0; i < VHeap<PRIMARY_TYPE>::size; i++)
  {
    cout << VHeap<PRIMARY_TYPE>::data[i] << " ";
  }
  cout << "\n";
}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::reHeapUp(int index){
  int parent = (index - 1) / 2;
  while(VHeap<PRIMARY_TYPE>::data[index] > VHeap<PRIMARY_TYPE>::data[parent] && index > 0){
    std::swap(VHeap<PRIMARY_TYPE>::data[index], VHeap<PRIMARY_TYPE>::data[(index - 1) / 2]);

    index = parent;
    parent = (index - 1) / 2;
  }
}

template <typename PRIMARY_TYPE>
VHeap<PRIMARY_TYPE>::VHeap(){
  VHeap<PRIMARY_TYPE>::size = 0;
}



#endif // __HEAP_VECTOR_HPP__