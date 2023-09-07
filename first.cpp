#include<iostream>
using namespace std;
class base{
    int a;
    int b;
    public:
    void fun(int a,int b){
        this->a=a;
        this->b=b;

    }
    void display(){
    cout<<this->a<<this->b;
    }
};
int main(){
base c1;
c1.fun(3,6);
c1.display();
return 0;
}