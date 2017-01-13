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
        float x, y;
        cout << "Write X" << endl;
        cin >> x;
        if (x<-2) {
            y = -x;
        }
        else if (x>0){
            y = -2*x/3 + 5;
        }
        else {
            y = 3*x/2 + 5;
        }
        cout << "Y= " << y<< endl;

    }
        break;


    case 2:{
        double x,y;
        bool flag;
        cout << "Write x,y" << endl;
        cin >> x >> y;
        flag = ((x-2)*(x-2) + (y-2)*(y-2) <= 4 ) || ((x-6)*(x-6) + (y-2)*(y-2) <= 4 );
        cout << flag << endl;
    }
        break;


    case 3:{
        int k, n;
        int i, j;
        float max,cur;
        cout << "Write Number of combinations and Number of elements in each combination: ";
        cin >> k >> n;
        cout << endl;
        for (i = 0; i<k; i++){
            cout << "Write " << i+1<<"'th combination: ";
            cin >> max;
            for (j=1; j<n; j++){
                cin >> cur;
                cur > max ? max = cur : cur = 0;
            }

        cout << "Max element is " << max << endl;
        cout << endl;

        }

    }
    break;


    default:
        cout << "Error" << endl;
    }
    return a.exec();
}
