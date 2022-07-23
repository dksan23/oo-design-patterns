#include "batch_trans.hpp"
#include<bits/stdc++.h>
using namespace std;

bool overlap(vector<int>& a , vector<int>& b)
{
    return b[0]<=a[1];

}
void merge_timestamps(vector<vector<int>>& ts)
{
    if(ts.size()  == 0) return {{}};
    
    int n = ts.size();
    int size = 1;
    for(int it = 1 ; it < n ;it ++)
    {
        auto current  = ts[it];
        auto prev     = ts[size-1];
        if(overlap(prev ,  current))
        {
            prev[0] = min(prev[0] , current[0]);
            prev[1] = max(prev[1] , current[1]);
        }
        else
        {
            ts[size] = current;
            size++;
        }

    }
    while(ts.size() > size)
    {
            ts.pop_back();
    }
}

string Batch_Transaction::get_timestamps_ascii()
{
    string res = "";
    merge_timestamps(this->timestamps);
    for(auto time : this->timestamp)
    {
        res += to_string(time[0]) + ":" + to_string(time[1]);
        res += ";";
    }
}
