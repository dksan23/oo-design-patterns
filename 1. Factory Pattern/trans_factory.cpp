#include "trans_factory.hpp"

Transaction* Trans_Factory::get_Transaction(vector<vector<int>>& timestamp)
{

if(timestamp.size() <= 1)
return new Atomic_Transaction(timestamp);

return new Batch_Transaction(timestamp);

}