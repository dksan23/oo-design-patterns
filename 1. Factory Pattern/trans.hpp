#ifndef __transaction__
#define __transaction__
#include<vector>


using namespace std;


class Transaction
{
public:

virtual string get_timestamps_ascii(<vector<int>>& timestamps) = 0;

};
#endif
