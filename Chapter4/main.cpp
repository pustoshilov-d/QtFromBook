/*Лабораторные работы под номерами 4.10.1, 4.10.2 */



#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <math.h>



using namespace std;
void simplify(int n){
    const int nc=n;
   int i=2;
   while(i<=n)
    {
        if(n%i==0 and i!=nc)
        {
            printf("%d",i);
            n/=i;
            if(n>1)
                printf("*");
        }
        else
            i=i+1;
    }


}

int to10(int n, int r){
    int i=0;
    int result=0;
    while (n>0) {cout<<n<<" "<< i<< endl;
        result += (n%10)*pow(r, i);
        n/=10; i++;}

    return result;
}
    ;
long int from10(const int n, int r){
    if(n)
        return (from10(n/r,r)*10 + n%r);
    else return 0;
}



int main()
{
    int numberTask;
    cout << "Write number of Task" << endl;
    cin >> numberTask;
    switch (numberTask){
    case 1:{
        int n=1;
        while (n!=0) {

        cout<<"Write number\n";
        cin>>n;
        simplify(n); cout<<endl;}


    }
        break;

    case 2:{
        int A, B, C;
        cout<< "Write A,B: ";
        cin>> A>>B;
        C = int(sqrt(to10(A,7)+to10(B,4)));
        cout<<"\n sqrt(A+B)= "<< C << "; ";
              cout<< from10(C,5);

    }
        break;





    default:
        cout << "Error" << endl;
    }
  return 0;
}
