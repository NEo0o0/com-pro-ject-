#include <iostream>
#include<string>
#include<cmath>
using namespace std;
const string dname[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
const string zyname[] = {"Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig"};
int calThaiYear(int );
string findwday(int ,int ,int );
int findmly(int ,int );
int findmnotly(int ,int );
int calZodiacAnimal(int ,int ,int );
string findZYear(int ,int );

int main(){
    int dd,mm,yy;
    cout << "What is your date of birth ?"<< " ";
    cout << "(Answer day, month and year in AD)\n";
    cout << "Day: ";
    cin >> dd;
    cout << "Month: ";
    cin >> mm;
    cout << "Year: ";
    cin >> yy;
    calThaiYear(yy);
    cout << findwday(dd,mm,yy);
}

int calThaiYear(int yy){
    yy += 543;
    return yy;
}

string findwday(int dd,int mm,int yy){
    int weekd = dd + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5)
    + (365 * (yy + 4800 - ((14 - mm) / 12)))
    + ((yy + 4800 - ((14 - mm) / 12)) / 4)
    - ((yy + 4800 - ((14 - mm) / 12)) / 100)
    + ((yy + 4800 - ((14 - mm) / 12)) / 400)
    - 32045;
    weekd = (weekd) %7;
    switch(weekd){
        case 0:
            return dname[0];
        case 1:
            return dname[1];
        case 2:
            return dname[2];
        case 3:
            return dname[3];
        case 4:
            return dname[4];
        case 5:
            return dname[5];
        case 6:
            return dname[6];
    }
}

int findmly(int dd,int mm){
    switch(mm){
        case 1:
            if(dd >= 1 && dd <= 15) mm = 2;
            if(dd > 15) mm = 3;
            return mm;
        case 2:
            if(dd >= 1 && dd <= 13) mm = 3;
            if(dd > 13) mm = 4;
            return mm;
        case 3:
            if(dd >= 1 && dd <= 15) mm = 4;
            if(dd > 15) mm = 5;
            return mm;
        case 4:
            if(dd >= 1 && dd <= 13) mm = 5;
            if(dd > 13) mm = 6;
            return mm;
        case 5:
            if(dd >= 1 && dd <= 13) mm = 6;
            if(dd > 13) mm = 7;
            return mm;
        case 6:
            if(dd >= 1 && dd <= 11) mm = 7;
            if(dd > 11) mm = 8;
            return mm;
        case 7:
            mm = 8;
            return mm;
        case 8:
            if(dd >= 1 && dd <= 10) mm = 8;
            if(dd > 10) mm = 9;
            return mm;
        case 9:
            if(dd >= 1 && dd <= 8) mm = 9;
            if(dd > 8) mm = 10;
            return mm;
        case 10:
            if(dd >= 1 && dd <= 8) mm = 10;
            if(dd > 8) mm = 11;
            return mm;
        case 11:
            if(dd >= 1 && dd <= 6) mm = 11;
            if(dd > 6) mm = 12;
            return mm;
        case 12:
            if(dd >= 1 && dd <= 6) mm = 12;
            if(dd > 25) mm = 1;
            return mm;
    }
}

int findmnotly(int dd,int mm){
    switch(mm){
        case 1:
            if(dd >= 1 && dd <= 25) mm = 2;
            if(dd > 25) mm = 3;
            return mm;
        case 2:
            if(dd >= 1 && dd <= 23) mm = 3;
            if(dd > 23) mm = 4;
            return mm;
        case 3:
            if(dd >= 1 && dd <= 25) mm = 4;
            if(dd > 25) mm = 5;
            return mm;
        case 4:
            if(dd >= 1 && dd <= 23) mm = 5;
            if(dd > 23) mm = 6;
            return mm;
        case 5:
            if(dd >= 1 && dd <= 23) mm = 6;
            if(dd > 23) mm = 7;
            return mm;
        case 6:
            if(dd >= 1 && dd <= 22) mm = 7;
            if(dd > 22) mm = 8;
            return mm;
        case 7:
            if(dd >= 1 && dd <= 23) mm = 8;
            if(dd > 23) mm = 9;
            return mm;
        case 8:
            if(dd >= 1 && dd <= 22) mm = 9;
            if(dd > 22) mm = 10;
            return mm;
        case 9:
            if(dd >= 1 && dd <= 20) mm = 10;
            if(dd > 20) mm = 11;
            return mm;
        case 10:
            if(dd >= 1 && dd <= 19) mm = 11;
            if(dd > 19) mm = 12;
            return mm;
        case 11:
            if(dd >= 1 && dd <= 18) mm = 1;
            if(dd > 18) mm = 12;
            return mm;
        case 12:
            if(dd >= 1 && dd <15) mm = 1;
            if(dd > 15) mm = 2;
            return mm;
    }
}

int calZodiacAnimal(int dd,int mm ,int yy){
    yy = yy%12;    
    switch(yy){
        case 0:
            
        case 1:
            
        case 2:

        case 3:

        case 4:

        case 5:

        case 6:

        case 7:

        case 8:

        case 9:

        case 10:

        case 11:

    }
}
