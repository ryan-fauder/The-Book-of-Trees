#include <iostream>
#include "heap-vector.hpp"
#include "heap-queue.hpp"
using namespace std;

int main(){
  VHeap<int> heap;
  HeapMax<int> heap1;
  HeapMin<int> heap2;
  cout << heap.getsize();
  cout << heap.get();
  //cout << heap.pop();
  
  heap1.pop();
  heap1.top();

  heap.push(15);
  heap.push(20);
  heap.push(25);
  heap.push(10);
  heap.print();

  cout << heap.getsize() << " ";
  cout << heap.get() << " ";
  cout << heap.pop() << " ";
  return 0;
}
