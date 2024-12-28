// #include<iostream>
// using namespace std;
// #include<vector>

// int main(){


//     // vector<int> v1(10);
//     // v1.at(7)=10;
//     // v1.at(8)=8;
//     // vector<int>::iterator it;


//     // for(it=v1.begin();it!=v1.end();it++){
//     //     if((*it) == ((*it)+1)){
//     //         v1.erase(it+1);
//     //     }
//     // }

//     // for(it=v1.begin();it!=v1.end();it++){
//     //     cout<<*it<<" ";
//     // }



//     std::vector<int> v1(10);
//     v1.at(7) = 10;
//     v1.at(8) = 8;

//     for (auto it = v1.begin(); it != v1.end(); ) {
//         if ((*it) == ((*it) + 1)) {
//             it = v1.erase(it + 1);  // Adjust iterator after erasing
//         } else {
//             ++it;
//         }
//     }

//     for (auto it = v1.begin(); it != v1.end(); ++it) {
//         std::cout << *it << " ";
//     }

//     return 0;
// }



#include<iostream>
#include<vector>

int main() {
    std::vector<int> v1(10);
    v1.at(7) = 10;
    v1.at(8) = 9;  // To make the condition true for elements 8 and 9

    for (auto it = v1.begin(); it != v1.end(); ) {
        if (it != v1.end() - 1 && (*it) == ((*it) + 1)) {
            it = v1.erase(it + 1);  // Adjust iterator after erasing
        } else {
            ++it;
        }
    }

    for (auto it = v1.begin(); it != v1.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}

    
