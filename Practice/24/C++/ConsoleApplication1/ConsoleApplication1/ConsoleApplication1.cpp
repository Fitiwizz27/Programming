#include <iostream>
#include "json.hpp"
#include <fstream>
#include <iomanip>

using namespace nlohmann;
using namespace std;

int main()
{
    json j;
    ifstream input("in.json");
    input >> j;

    json o;
    ofstream output("out.json");

    for (auto& x : j)
    {
        int  userId = x["userId"];
        bool completed = x["completed"];

        json a;
        json* user = &a;

        for (auto& element : o)
        {
            if (element["userId"] == userId)
            {
                user = &element;
                break;
            }
        }

        if (user->empty())
        {
            o.push_back({ {"userId", userId}, {"task_completed", 0} });
        }

        user = &o[o.size() - 1];

        if (completed)
        {
            (*user)["task_completed"] = static_cast<int>((*user)["task_completed"]) + 1;
        }
    }

    output << setw(4) << o << endl;
    return(0);
}