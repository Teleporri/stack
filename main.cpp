#include <iostream>
#include <stack>
using namespace std;

int main() {

     //栈
     stack<int> stack1; //step 1
     cout<< stack1.empty() <<endl;
     stack1.push(1); //依次入栈
     stack1.push(2);
     stack1.push(3);
     stack1.push(4);
     stack1.push(5); //先进后出 输出结果为54321。

     while (!stack1.empty()){ //判断stack里是否为空 如果不为空的话执行以下内容
          cout<< stack1.top() <<endl; //输出栈顶的值
          stack1.pop(); //出栈
     }
}