#include <iostream>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

void testStack() {
                    //栈
    stack<int> stack1; //step 1
    cout << stack1.empty() << endl;
    stack1.push(1); //依次入栈
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5); //先进后出 输出结果为54321。

    while (!stack1.empty()) { //判断stack里是否为空 如果不为空的话执行以下内容
        cout << stack1.top() << endl; //输出栈顶的值
        stack1.pop(); //出栈
    }
}

void testQueue(){
                    //队列
    queue<char> queue1;
    queue1.push('a');
    queue1.push('b');
    queue1.push('c');
    queue1.push('d');
    queue1.push('e');

    while (!queue1.empty()){
        cout<<"front of the queue is "<<queue1.front()<<endl;
        cout<<"back of the queue is "<<queue1.back()<<endl;
        queue1.pop();
    } //先到先出
}

void testDeque(){
                    //双端队列
     deque<int> deque1;
     deque1.push_front(1);
     deque1.push_front(2);
     deque1.push_front(3);
     deque1.push_back(4);
     deque1.push_back(5);
     deque1.push_back(6); //654321

     while (!deque1.empty()){
         cout<<"front of the deque is " <<deque1.front()<<endl;
         deque1.pop_front();
         cout<<"back of the deque is " <<deque1.back()<<endl;
         deque1.pop_back();
     }

}
int main() {
    testDeque();
}