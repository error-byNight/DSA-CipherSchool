#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int i = size;
        arr[i]= val;

        while(i > 1){
            int parent = i/2;
            if(arr[parent] <arr[i]){
                swap(arr[parent], arr[i]);
                i = parent;
            }
            else return;
        }
    }

void print(){
    for (int i = 0; i <= size; i++){
        cout<< arr[i]<<" ";
    }
}
void deletion(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<size){

            int left = 2*i;
            int right = 2*i+1;

            if(left < size && arr[i] < arr[left]){
                swap(arr[i], arr[left]);
                i = left;
            }
            else if(right < size && arr[i] < arr[right]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }
};

int main(){
    heap h;
    h.insert(20);
    h.insert(10);
    h.insert(8);
    h.insert(5);
    h.insert(7);
    h.insert(11);
    h.insert(50);

    h.print();
    h.deletion();
    cout << "After deletion: ";
    h.print();

    return 0;

}