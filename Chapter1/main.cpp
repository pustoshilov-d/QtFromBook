#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main(int argc, char *argv[])
{
    int numberTask;
    QCoreApplication a(argc, argv);
    cout << "Write number of Task" << endl;
    cin >> numberTask;
    switch (numberTask){
    case 1:{
        int A, B, C, D;
        cout << "Write ABC" << endl;
        cin >> A >> B>>C;
        D = A; A = B; B = C; C = D;
        cout << "New values:" << endl;
        cout << A<< B<<C << endl;
    }
        break;
    case 2:{
        int N;
        cout << "Write Number" << endl;
        cin >> N;
        N = 100*(N % 10) + N/100 + ((N%100)/10)*10;
        cout << "New number: " << N << endl;
    }
        break;
    case 3:{
        const float PI = 3.4;
        float x, y;
        cout << "Write X" << endl;
        cin >> x;
        y = pow((x+ tan(0)), (2/5)) - ((1- log(fabs(exp(x) + cos(PI/8))))/2);
        cout << "Y= " << y << endl;
    }
    break;
    default:
        cout << "Error" << endl;
    }
    return a.exec();
}
