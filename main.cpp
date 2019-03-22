#include <iostream>

using namespace std;

//«Ê· ﬂ·«” «‰‘« Â ›Ì Õ»« Ì    --   this is the first class in my life

class trn{

public:
    string type;
    int base;
    int height;
    int t1;
    int t2;
    int a;
    int p;
    int area(){
    a = (base*height)/2;
    return a;
    }
    int pr(){
    p=base+t1+t2;
    return p;
    }

};



int main()
{
    //«Ê· ﬂ«∆‰ «‰‘« Â ›Ì ÕÌ« Ì    --   this is the first object in my life
trn x;
x.type="triangle of legs";
x.t1=3;
x.t2=3;
x.base=5;
x.height=20;
x.area();
x.pr();
cout<<"area is: --------"<<x.a<<"--------"<<endl;
cout<<"paramiter is: ---------"<<x.p<<"---------";
return 0;
}
//ﬂ«‰ ⁄„—Ì 15 ”‰…  -- i was 15 old year
