#include<iostream>
#include<stack>
using namespace std;

class stack{
    queue<int> q;

    public:
    void push(int x){
        queue<int> temp;
        temp.push(x);
        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }
        swap(q.temp);
    }
    void pop(){
        q.pop();
    }
    int peek(){
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};
int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}