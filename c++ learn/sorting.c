// program to sort a array;

int main(){

    int arr[10]={71,14,54,84,2,5,19,9,1,23};
    int temp;

    for(int i=0;i<9;i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
}