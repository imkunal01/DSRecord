    #include <iostream>
    using namespace std;
    class Stack{
        public:
            int *arr;
            int size;
            int top;
            Stack(int s){
                size = s;
                top = -1;
                arr = new int[s];
            }
            void push(int value){
                if(top == size-1){
                    cout<<"OverFlow"<<endl;
                    return;
                }
                else{
                    top++;
                    arr[top] = value;
                    cout<<arr[top]<<" ";
                }
            }
            void pop(){
                if(top == -1){
                    cout<<"UnderFlow"<<endl;
                }
                else{
                    cout<<"Popped element is "<< arr[top] <<endl;
                    top--;
                }
            }
            int peek(){
                if(top==-1){
                    cout<<"Empty"<<endl;
                    return -1;
                }
                else{
                    cout<<"Peek element is ";
                    return arr[top];
                }

            }
            bool isEmpty(){

                return top==-1;
            }
            int IsSize(){
                cout<<"Size of stack is "; 
                return top+1;
            }
    };
    int main() {
        Stack s(5);
        // s.push(5);
        // s.push(6);
        // s.push(8);
        // cout<<endl;
        // cout<<s.IsSize()<<endl;
        // s.pop();
        // cout<<s.peek()<<endl;
        // s.pop();
        // cout<<s.peek()<<endl;
        // s.pop();
        cout<<s.isEmpty();
        // Negative Number
        return 0;
    }