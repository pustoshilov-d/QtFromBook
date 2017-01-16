/* Лабораторная работа 5.7.2*/
#include <QCoreApplication>
#include <stdlib.h>
#include <iostream>
#include <math.h>

void oper(int* mass,int* massN,int* massM, unsigned int *s,int N,int M){
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++) if (*(massN + i)==*(massM+j)) {
            ++*s; mass = static_cast<int*>( realloc(mass, *s*sizeof(int)));
            *(mass+*s-1)=*(massM+j);
        }
    }

void sort(int* mass, unsigned int s){
    if (s>0) {    for (unsigned int i=0; i<s-1; i++)
        for (unsigned int j=0; j<s-i-1;j++) {
            if (mass[j]>mass[j+1]) {
                int temp = mass[j]; mass[j] = mass[j+1]; mass[j+1] = temp;
            }
    }}
}

void deleteM(int *mass, unsigned int *s){
        unsigned int i;
                for (i=0; i<*s-1; *(mass+i)=*(mass+i+1),i++);
        *s-=2; mass = static_cast<int*>(realloc(mass, *s*sizeof(int)));

}

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
const int N=6, M=12;
int massN[N] = {2,1,7,3,4,16}, massM[M]= {1,2,3,4,5,6,7,8,9,10,11,12};
unsigned int s=0;
int *mass = new int[s];
oper(mass, massN, massM,&s, N, M);
sort(mass, s);
deleteM(mass, &s);

for (unsigned int i = 0; i<s; i++) cout<<mass[i]<<" ";

    return a.exec();
}
