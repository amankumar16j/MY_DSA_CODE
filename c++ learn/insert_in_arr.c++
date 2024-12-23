// to insert elements in array

#include<iostream>
#include<conio.h>

using namespace std;

struct array{

private:

    int *arr;
    int size;
    int length;

public:
    void create();
    void display();
    void add();
    void insert();
    void delete_it();
    void search();
    void get();
    void set();
    void empty_heap();
    void reverse();

};

void array:: display(){

    cout<<"elements are\n";
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"\n";
    }
}

void array:: create(){

    cout<<"enter the size of array:";
    cin>>size;

    cout<<"enter the no. of element:";
    cin>>length;

    arr=new int[length];

    cout<<"enter the elements in array:\n";
    for(int i=0;i<length;i++){

        cin>>arr[i];
    }
    cout<<"element inserted in array!!\n";

}

void array:: add(){

    int n;
    cout<<"enter the no. of element to enter:";
    cin>>n;

    for(int i=length;i<length+n;i++){
        cin>>arr[i];
    }
    length=length+n;

}

void array:: insert(){

    int index,val;

    cout<<"enter the index to insert:";
    cin>>index;

    cout<<"enter the value to insert:";
    cin>>val;
    int len=length;

    for(int i=len-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=val;
    length++;

}

void array:: delete_it(){

    int index;
    cout<<"enter the index to delete:";
    cin>>index;

    int len=length;

    for(int i=index;i<=len-1;i++){

        arr[i]=arr[i+1];
    }
    length--;
} 

void array:: search(){

    int val,count=0;
    cout<<"enter the value to search:";
    cin>>val;

    for(int i=0;i<length;i++){
        if(arr[i]==val){
            cout<<"element found at index:"<<i<<"\n";
            count=count+1;
            break;
        }  
    }
    if(count==0){
        cout<<"element not found!!";
    }
    
}

void array:: get(){

    int index;
    cout<<"enter the index to get:";
    cin>>index;

    cout<<arr[index];
}

void array::set(){

    int val,index;

    cout<<"enter the index no. to set:";
    cin>>index;

    cout<<"enter the updated value:";
    cin>>val;

    arr[index]=val;
}

void array::empty_heap(){
    delete []arr;

}


void array::reverse(){
    for(int i=0,j=length-1;i<j;i++,j--){

        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    
}

int main(){

    array a1;
    a1.create();
    //a1.add();
    //a1.insert();
    //a1.delete_it();
    //a1.search();
    //a1.get();
    //a1.set();
    a1.reverse();


    a1.display();

    a1.empty_heap();

    
}
