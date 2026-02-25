#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    // create a (max heap)
    priority_queue<pair<int,int>> pq;
    // priority_queue<pair<int,int>> orders by the first element of the pair by default. If there is a tie, the 2nd element is the tiebreacker

    vector<int> nums = {1,2,2,3,4,5}; // init vector
    map<int,int> freq_map; // init map

    for(int num : nums){ // create frequency map
        freq_map[num]++;
    }

    // print out freq map
    cout << "FREQUENCY MAP:\n------\n";
    for (const auto& i : freq_map){
        cout << i.first << ": " << i.second << endl;
    }
    cout << "------\n";
    


    pq.push({1,2});
    pq.push({2,5});
    pq.push({3,6});

    cout << "PRIORITY QUEUE:\n------\n";
    while(!pq.empty()){
        cout << pq.top().first << ": " << pq.top().second << endl;
        pq.pop();
    }
    cout << endl;


    return 0;
}