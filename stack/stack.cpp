include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(int argc, const char* argv[]){
    int i,n=argc-1;
    stack<int> s;
    for(i=0;i<n;i++)
        s.push(atoi(argv[i]));
    print(s);
    cout<<s.size()<<endl;
    return 0;
}
