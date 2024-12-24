#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;



int main() {
   
    
    int t;
    cin >> t;
    
    while (t--) {
        int a,b;
        cin >> a>>b;
        int i=1;
        int count=1;
        while(a+i<=b){
            count++;
            a=a+i;
            i++;
        }
       
       cout<<count<<endl;
    }
    
    return 0;
}