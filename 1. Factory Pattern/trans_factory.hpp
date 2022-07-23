#include "batch_trans.hpp"
#include "atomic_trans.hpp"

class Trans_Factory
{
    public:

    static Transaction* get_Transaction(vector<vector<int>& timestamps);
}