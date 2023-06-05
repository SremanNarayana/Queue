#include<iostream>
using namespace std;

class queue{

    private:
    int arr[5];
        int rear;
        int front ;
    
    public:
        queue(){
            rear =-1;
            front =-1;
            for(int i =0 ;i<5;i++){
                arr[i] =0;
            }
        }

       bool isEmpty(){
        if(rear == -1 && front ==-1 ){
            return true;
        }
        else{
            return false;
        }
        }

        bool isFull(){
            if(rear == 4){
                return true;
            }
            else{
                return false;
            }
        }

        int enqueue(int e){
            if(isFull()){
                cout<<"queue is full"<<endl;
            }
            else if(isEmpty()){
                arr[0] = e;
                rear=front=0;
                
            }
            else{
                rear ++;
                arr[rear] = e;
                
            }
            return 0;
        }

        void dequeue(){
            int r =0;
            if(isEmpty()){
                cout<<"queue is emepty"<<endl;
            }
            else if(rear == front){
                arr[front] = 0;
                rear = front = -1;
            }
            else{
                arr[front] = 0;
                front ++;
            }
        }

        void display(){
            for(int i =0;i<5;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    queue q1;
    q1.enqueue(1);
     q1.enqueue(2);
     q1.enqueue(3);
     q1.enqueue(4);
 q1.enqueue(5);

 q1.dequeue();
 q1.dequeue();
 
 q1.enqueue(71);
    q1.display();
    
}