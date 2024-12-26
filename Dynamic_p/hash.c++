#include<iostream>
using namespace std;

class MinHeapNode{
    public:
        char data;
        int freq;
        MinHeapNode *left,*right;

        MinHeapNode(int data,int freq){
            this->data=data;
            left=right=NULL;
            this->freq=freq;
        }
};

class MinHeap{
    public:
        int size;
        int capacity;
        MinHeapNode **array;

        MinHeap(int capacity){
            size=0;
            this->capacity=capacity;
            array=new MinHeapNode*[capacity];
        }
};

MinHeapNode *newNode(char data,int freq){
    MinHeapNode* temp=new MinHeapNode(data,freq);
    return temp;
}

MinHeap *createMinHeap(int capacity){
    MinHeap *minHeap=new MinHeap(capacity);
    return minHeap;
}


int main(){

}