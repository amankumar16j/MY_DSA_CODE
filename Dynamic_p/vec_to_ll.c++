#include<iostream>
#include<vector>

using namespace std;

class list{
    public:
    int val;
    list*next;

    list(){
        next=NULL;
    }

}*head=NULL;

list* create(vector<int> vec){

    list* last;
    last=head;


    for(int i=0;i<vec.size();i++){

        list* temp=new list();
        temp->val=vec[i];
        temp->next=NULL;

        last->next=temp;
        last=temp;
    }

    return head;
}

void prt(list* ll){

    if(ll){
        cout<<ll->val<<" ";
        ll=ll->next;
    }
}



int main(){

    vector<int> vec={1,2,3,4,5,6};
    head=create(vec);  prt(head);
}