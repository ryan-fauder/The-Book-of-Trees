#include <iostream>
#include "heap-vector.hpp"
#include "heap-queue.hpp"
using namespace std;

void testing_heap(VHeap<int> heap){
  cout << heap.getsize() << endl;

  heap.push(15);
  heap.push(20);
  heap.push(25);
  heap.push(10);
  heap.print();

  cout << heap.getsize() << " ";
  cout << heap.get() << " ";
  cout << heap.pop() << " ";
  cout << endl;
}

void testing_heap(HeapMax<int> heap){
  cout << heap.size() << endl;

  heap.push(15);
  heap.push(20);
  heap.push(25);
  heap.push(10);

  cout << heap.size() << " ";
  cout << heap.top() << " ";
  heap.pop();
  cout << heap.top();
  cout << endl;
}

void testing_heap(HeapMin<int> heap){
  cout << heap.size() << endl;

  heap.push(15);
  heap.push(20);
  heap.push(25);
  heap.push(10);

  cout << heap.size() << " ";
  cout << heap.top() << " ";
  heap.pop();
  cout << heap.top();
  cout << endl;
}

int main(){
  VHeap<int> heap;
  HeapMax<int> heap1;
  HeapMin<int> heap2;

  cout << "Testing Vector Heap" << endl;
  testing_heap(heap);
  cout << "----" << endl;
  cout << "Testing Queue Max Heap" << endl;
  testing_heap(heap1);
  cout << "----" << endl;
  cout << "Testing Queue Min Heap" << endl;
  testing_heap(heap2);
  cout << "----" << endl;
  return 0;
}
