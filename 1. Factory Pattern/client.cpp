#include "trans_factory.hpp"

int main()
{
    vector<vector<int>> timestamps_a = {{1,2},{3,4}};
    Transaction* first  = Trans_Factory::get_Transaction(timestamps);
    vector<vector<int>> timestamps_b  = {{1,2}};

    Transaction* second = Trans_Factory::get_Transaction(timestamps);

    string res = first->get_timestamps_ascii(); // should be a batch transaction with overallaping trans combined
    string res_b = second->get_timestamps_ascii(); // should be an atomic transaction
}