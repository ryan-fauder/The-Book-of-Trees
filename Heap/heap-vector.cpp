#include <iostream>
#include <vector>
#include "heap-vector.hpp"

#define this VHeap<PRIMARY_TYPE>

int size();

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::push(PRIMARY_TYPE element){
  this::data.push_back(element);
  this::ReHeapDown(this::size);
  this::size += 1;
}

template <typename PRIMARY_TYPE>
PRIMARY_TYPE VHeap<PRIMARY_TYPE>::pop(PRIMARY_TYPE element){

}

template <typename PRIMARY_TYPE>
PRIMARY_TYPE VHeap<PRIMARY_TYPE>::get(PRIMARY_TYPE element){

}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::reHeapDown(PRIMARY_TYPE element){

}

template <typename PRIMARY_TYPE>
void VHeap<PRIMARY_TYPE>::reHeapUp(PRIMARY_TYPE element){
  
}

template <typename PRIMARY_TYPE>
VHeap<PRIMARY_TYPE>::VHeap(){
  VHeap<PRIMARY_TYPE>::size = 0;
}