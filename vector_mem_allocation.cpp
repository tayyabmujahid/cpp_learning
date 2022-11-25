#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;

/*This module shows how dyanmic memory reallocation for vectors
v1 is a vector with no fixed capacity during instantiation and v2 is fixed with a size
*/ 


 auto vectorMemAlloc(vector<int>& v1){
    auto start = high_resolution_clock::now();
    for (int i=0;i<=80;i++){
    v1.push_back(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration_v1 = duration_cast<microseconds>(stop - start);
    return duration_v1;
    }
 
int main()
{
 
vector<int> v1;
vector<int> v2;
v2.reserve(80);


auto duration_v1  = vectorMemAlloc(v1);
cout << v1.capacity() << " Capacity of v1" <<endl;
cout <<"Duration to append v1 with 80 elements : " << duration_v1.count() << endl;

auto duration_v2 = vectorMemAlloc(v2);
cout << v2.capacity() << " Capacity of v2" <<endl;
cout <<"Duration to append v2 with 80 elements : " << duration_v2.count() << endl;
 
    return 0;
}