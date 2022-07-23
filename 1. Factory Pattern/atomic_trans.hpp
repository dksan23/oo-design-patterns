#include<string>
#include "trans.hpp"

using namespace std;

class Atomic_Transaction : public Transaction
{
    vector<vector<int>> timestamp;
    public:
    
    Atomic_Transaction(vector<vector<int>>& ts)
    {
        this->timestamp = ts;
    }

    string get_timestamps_ascii() override;
}