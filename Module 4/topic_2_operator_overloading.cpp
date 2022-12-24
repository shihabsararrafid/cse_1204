#include <iostream>
using namespace std;

// function Overloading

class Circuit
{
private:
    double real, img;

public:
    Circuit(double real = 0, double img = 0)
    {
        this->real = real;
        this->img = img;
    }
    Circuit operator+(Circuit const &obj)
    {
        Circuit result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    Circuit operator-(Circuit const &obj)
    {
        Circuit result;
        result.real = real - obj.real;
        result.img = img - obj.img;
        return result;
    }
    Circuit operator*(Circuit const &obj)
    {
        Circuit result;
        // cout << real << " " << obj.real << " " << img << " " << obj.img << endl;
        result.real = (real * obj.real) - (img * obj.img);
        result.img = (real * obj.img) + (obj.real * img);
        return result;
    }
    Circuit operator/(Circuit const &obj)
    {
        Circuit res;
        Circuit res1;
        Circuit res2;
        Circuit res3;

        // creating affiliate number of denominator

        res3.real = obj.real;
        res3.img = (-1.0) * (obj.img);
        res1.real = real;
        res1.img = img;

        // by multiplying subtract with affiliate of denominator
        res = res1 * res3;
        //  res.print();
        // squaring the affiliate with its root
        double sq = (obj.real * obj.real) + (obj.img * obj.img);
        // double sq = (real * real) + (img * img);
        // cout << sq << endl;
        res2.real = res.real / sq * 1.0;
        res2.img = res.img / sq * 1.0;
        // returning final result
        return res2;
    }
    void print()
    {
        cout << real << " + j" << img << endl;
    }
};

int main(void)
{
    Circuit c1(3, 4), c2(4, -3), c3(0, 6), v(100, 50);
    Circuit c4, c5, c6, c7, c8, c9, c10, c11;
    c4 = c1 * c2;
    c5 = c1 * c3;
    c6 = c2 * c3;
    c7 = c4 + c5;
    c8 = c6 + c7;
    c9 = c4 * c3;
    //  c8.print();
    // // c9 is the equivalent impedence
    c10 = c9 / c8;
     c10.print();

    c11 = v / c10;
    c11.print();
    return 0;
}