#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void InputText()
{
    ifstream Autta;
    Autta.open("text1.txt");

    string text,A[100];
    int a = 0;
    while(getline(Autta, text))
    {
        A[a]=text;
        a++;
    }
    Autta.close();
}

float NUMBER(float A,float B){
    return A+B;
}