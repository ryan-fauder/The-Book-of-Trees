#ifndef __HEAP_QUEUE_HPP__
#define __HEAP_QUEUE_HPP__
#include <queue>
#include <vector>

template<typename TYPE>
using HeapMax = std::priority_queue<TYPE, std::vector<TYPE>>;

template<typename TYPE>
using HeapMin = std::priority_queue<TYPE, std::vector<TYPE>, std::greater<TYPE>>;

#endif //__HEAP_QUEUE_HPP__