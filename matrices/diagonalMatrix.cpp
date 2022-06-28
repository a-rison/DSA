#include<iostream>
using namespace std;

class Diagonal {
    private:
    int n;
    int *A;
    public:
    Diagonal() {
        n = 2;
        A = new int[2];
    }
    Diagonal(int n) {
        this->n = n;
        A = new int[n];
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void Display();
    ~Diagonal(){
        delete []A;
    };
};

void Diagonal::set(int i, int j, int x) {
    if(i==j)
        A[i-1]=x;
}
void Diagonal:: Display() {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;++j){
            if(i==j)
                cout << A[j] << " ";
            else
                cout << "0 ";
        } cout << endl;
    }
}



int main(){

    Diagonal d(4);

    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,9);
    d.set(4,4,12);

    d.Display();

    return 0;
}