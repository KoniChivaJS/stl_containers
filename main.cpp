#include <iostream>
#include <array>
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
    return newArr;
};

int main() {

//    Task 1
    array<int,5> firstArr = {1,4,6,9,10};
    array<int,5> secondArr = {0,2,4,7,8};
    array<int,10> finalArr = sortArr(firstArr,secondArr);



    return 0;
}
