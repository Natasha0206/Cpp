#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
        int l, b, h;
    public:
        Box(int l = 0, int b = 0, int h = 0){
            this->l = l;
            this->b = b;
            this->h = h;
        }
        Box(Box &box){
            l = box.l;
            b = box.b;
            h = box.h;
        }
        int getLength(){ return l; }
        int getBreadth(){ return b; }
        int getHeight(){ return h; }

        long CalculateVolume(){ return (long)b*l*h; };

        friend bool operator<(Box &b1, Box &b2);

        friend ostream& operator<<(ostream &out, Box &box);
};

bool operator<(Box &A, Box &B){
    if(A.l < B.l || (A.l == B.l && A.b < B.b) || (A.l == B.l && A.b == B.b && A.h < B.h))
        return true;
    return false;
}

ostream& operator<<(ostream &out, Box &box){
    out << box.l << " " << box.b << " " << box.h;
    return out;
}