#include <iostream>
#include <array>
#include <vector>
using namespace std;

template <typename T>
array<T,10> sortArr(array<T,5>& fArr, array<T,5>& sArr){
    array<T,10> newArr;
    auto itArr = newArr.begin();
    auto it = fArr.begin();
    auto itSecond = sArr.begin();
    while(it!=fArr.end()){
        if(*it<*itSecond){
            *itArr = *it;
            cout<<*itArr<<" ";
            itArr++;
            it++;
        }else{
            *itArr = *itSecond;
            cout<<*itArr<<" ";
            itArr++;
            itSecond++;
        }
    }
    cout<<endl;
    return newArr;
};

template <typename T>
vector<T> divideVector(vector<T> &vec){
    vector<T> finalVec = {};
    for(auto itVec = vec.begin();itVec!=vec.end();++itVec){
        if(*itVec % 2 == 0){
            finalVec.insert(finalVec.begin() , *itVec);
        }else{
            finalVec.push_back(*itVec);

        }
    }
    auto it = finalVec.begin();
    while(it!=finalVec.end()){
        cout<<*it<<" ";
        ++it;
    }
    return finalVec;
}
int main() {

//    Task 1
    array<int,5> firstArr = {1,4,6,9,10};
    array<int,5> secondArr = {0,2,4,7,8};
    array<int,10> finalArr = sortArr(firstArr,secondArr);

//  Task 2
    vector<int> myVec = {0,1,2,3,4,5,6,7,8,9,10};
    vector<int> finalVec = divideVector(myVec);

// Task 3


    return 0;
}
