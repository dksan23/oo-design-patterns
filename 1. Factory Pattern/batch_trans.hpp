#include<string>
#include "trans.hpp"

using namespace std;

class Batch_Transaction : public Transaction
{
    vector<vector<int>> timestamp;
    public:

    Batch_Transaction(vector<vector<int>> & timestamps)
    {
        this->timestamp = timestamps;
    }
    string get_timestamps_ascii() override;
}