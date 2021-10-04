#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;

    marksMap["Sai"] = 10;
    marksMap["Len"] = 20;
    marksMap["Dra"] = 30;

    marksMap.insert({{"Kazi", 100}, {"Quiz", 200}});

    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<< (*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<< "The size is: "<<marksMap.size()<<endl;
    cout<< "The MaxSize is: "<<marksMap.max_size()<<endl;

    return 0;
}