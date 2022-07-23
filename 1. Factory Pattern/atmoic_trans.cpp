#include "atomic_trans.hpp"
#include<bits/stdc++.h>
using namespace std;

string Atomic_Transaction::get_timestamps_ascii()
{
    string res = "";
    if(this->timestamp.size() == 0) return "";
    vector<int>& time = this->timestamp[0];
    res += to_string(time[0]) + ":" +to_string(time[1]);
    return res;
}