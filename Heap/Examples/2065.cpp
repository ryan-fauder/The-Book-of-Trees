#include <iostream>
#include <vector>
#include <queue>
#define breakl "\n"
using namespace std;


struct Order
{
    bool operator() (std::pair<int, int> const &a,  std::pair<int,int> &b) {
      if(a.first == b.first){
        if(a.second <= b.second) return false;
      }
      else if(a.first <= b.first) return false;
      return true;
    }
};

typedef 
std::priority_queue<pair<int, int>, std::vector<pair<int, int>>, Order> 
HeapMin;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);

  int amount_cashiers, amount_clients;
  vector<int> cashiers;
  HeapMin heap;
  int best = 0;

  cin >> amount_cashiers >> amount_clients;

  for (int i = 0, cashier; i < amount_cashiers; i++){
    cin >> cashier;
    cashiers.push_back(cashier);
    heap.push({0, i});
  }

  for (int i = 0, client; i < amount_clients; i++){
    cin >> client;
    int index = heap.top().second;
    int cashier = cashiers[index];
    int total_cashier = heap.top().first;
    heap.pop();
    heap.push({total_cashier + (client * cashier), index});
  }
  // O maior sera aquele que sera o ultimo a terminar de atender todos.
  while(!heap.empty()){
    best = max(best, heap.top().first);
    heap.pop();
  }
  cout << best << breakl;
  return 0;
}