#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

class complex{

    public:

    double re,im;
    complex(double reel , double imaginaire);
    double reel();
    double imag();
    complex conj();
    double norm();
    double arg();
    complex polar(double mag , double amgle=0);
    complex operator+(complex c);
    friend complex operator+(double d ,complex c);
    friend complex operator+(complex c ,double d);
    complex operator-(complex c);
    friend complex operator-(double d ,complex c);
    friend complex operator-(complex c ,double d);
    complex operator*(complex c);
    friend complex operator*(double d ,complex c);
    friend complex operator*(complex c ,double d);
    complex operator/(complex c);
    friend complex operator/(double d ,complex c);
    friend complex operator/(complex c ,double d);
    bool operator==(complex c);  
    bool operator!=(complex c);  
    complex operator-();


    
    

   


};


complex::complex(double reel,double imaginaire){
    re=reel;
    im=imaginaire;
}

double complex::reel(){
    return re;
}

double complex::imag(){
    return im;
}

complex complex::conj(){
    return complex(re,-im);
}

double complex::norm(){
    return  sqrt(pow(re,2)+pow(im,2));
}

double complex::arg(){
    if (re==0){
        return 3.14/2;
    }
    else if (im==0){
        return 0;
    }
    else return  atan2(im,re);
}

complex complex::polar(double mag , double angle){
    return complex(mag*cos(angle) , mag*sin(angle));

}
complex complex::operator+(complex c){
    return complex(re+c.re,im+c.im);
}

complex operator+(double d ,complex c){
    return complex(c.re+d,c.im);
}

complex operator+(complex c , double d){
    return complex(c.re,c.im+d);
}

complex complex::operator-(complex c){
    return complex(re-c.re,im-c.im);
}

complex operator-(double d ,complex c){
    return complex(c.re-d,c.im);
}

complex operator-(complex c , double d){
    return complex(c.re,c.im-d);
}

complex complex::operator*(complex c){
    return complex(re*c.re,im*c.im);
}

complex operator*(double d ,complex c){
    return complex(c.re*d,c.im);
}

complex operator*(complex c , double d){
    return complex(c.re,c.im*d);
}
complex complex::operator/(complex c){
    return complex(re/c.re,im/c.im);
}

complex operator/(double d ,complex c){
    return complex(c.re/d,c.im);
}

complex operator/(complex c , double d){
    return complex(c.re,c.im/d);
}

bool complex::operator==(complex c) {
    return (re == c.re) && (im == c.im);  
}

bool complex::operator!=(complex c) {
    return !(*this == c);  
}

complex complex::operator-() {
    return complex(-re, -im);  
}















int main(){
    complex cp1(2,5);
    complex cp2(3,4);
    complex cp3(11,12);
    cp1.norm();
    cout<<"La  notme de cp1 est : " <<cp1.norm()<<endl;
    cp1.operator+(cp2);




  



    return 0;
}
