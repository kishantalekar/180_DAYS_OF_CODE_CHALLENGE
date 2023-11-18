// Stack class.
class Stack {
    private :
    int *arr;
    int pos;
    int size;
public:
    
    Stack(int capacity) {
        // Write your code here.
        this->size = capacity;
        arr = new int[size];
        pos = -1;
    }

    void push(int num) {
        // Write your code here.
        if(!isFull()){
            pos++;
            arr[pos] = num;
        }else{
            return;
        }
    }

    int pop() {
        // Write your code here.
        if(!isEmpty()){
            int x = arr[pos];
            pos--;
            return x;
        }else{
            return -1;
        }
        
    }
    
    int top() {
        // Write your code here.
        if(!isEmpty()){
            return arr[pos];
        }else{
            return -1;
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(pos == -1){
            return 1;
        }else{
            return 0;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(pos == size-1 ){
            return 1;
        }else{
            return 0;
        }

    }
    
};
