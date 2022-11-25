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


class Solution{
    public:
    bool isPalindrome1(int x){
        string s = to_string(x);
        string s1=s;
        reverse(s.begin(),s.end());
        // if (s1==s){
            return s1==s;
        // } else{
            // return false;
        // }
    }

    bool isPalindrome2(int x){
        int reversed=0;
        int remainder;
        int original=x;
        if(x<0){
            return false;
        }else{
            cout << reversed << endl;
            while(x!=0){

            remainder=x%10;
            reversed=reversed*10+remainder;
            x/=10;
            }
        cout << reversed << endl;
        if(reversed == original){
            return true;
        }else{return false;}
        }
    }
};
 
int main()
{
 
 Solution sol;

 bool result = sol.isPalindrome2(12221);
 cout<<"The srest" <<result;

}