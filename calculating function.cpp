#include <iostream>
#include<string>
#include<cmath>
using namespace std;
const string dname[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
const string zyname[] = {"Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig"};
int calThaiYear(int );
string findwday(int ,int ,int );
int findzaniaml(int ,int ,int );
int findthmonth(int );
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

int findzaniaml(int dd,int mm,int yy){
    if(dd == 28 && mm == 11){
        return yy+1;
    }
    else if(dd == 29 && mm == 11){
        return yy+1;
    }
    else if(dd == 30 && mm == 11){
        return yy+1;
    }
    else if(mm == 12){
        return yy+1;
    }
    else{
        return yy;
    }

}

int findthmonth(int mm){
    switch(mm){
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

        case 12:

    }
}

int calZodiacAnimal(int dd,int mm ,int yy){
    yy = yy%12;    
    switch(yy){
        case 0:
            findzaniaml(dd,mm,yy);
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
