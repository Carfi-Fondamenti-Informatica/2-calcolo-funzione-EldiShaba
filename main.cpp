#include <iostream>
using namespace std;
int main() {
    int x=0, y=0, a=0, b=0;
    cin>> a >> b >> x >> y;
    if(x<0, y>0){
      cout <<(a * x - b * y)<< endl;
    }
    else if(x>=0, y<=0){
        cout<<(a*(b*b)-b*y)<< endl;
    }
    else
        cout<< (a*x+b*(y*y));
    return 0;
    }
