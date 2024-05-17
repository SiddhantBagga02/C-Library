// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class sidd{
    private:
    int a,b,c;
    public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout <<"the value of a is "<< a<< endl;
        cout <<"the value of b is "<< b<< endl;
        cout <<"the value of c is "<< c<< endl;
        cout <<"the value of d is "<< d<< endl;
        cout <<"the value of e is "<< e<< endl;
    }
};
void sidd :: setData(int a1, int b1, int c1){
    a = a1;
    b= b1;
    c=c1;
}
int main() {
    sidd harry;
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
   return 0;
}