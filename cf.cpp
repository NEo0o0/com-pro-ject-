#include <iostream>
//#include "MyForm.h"
#include<string>
#include<cmath>
using namespace std;
const string dname[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
const string zyname[] = {"Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig"};
int frnum[7] = {};
int srnum[7] = {};
int trnum[7] = {};
int calThaiYear(int );
string findwday(int ,int ,int );
bool checkly(int );
int findmly(int ,int );
int findmnotly(int ,int );
int calZodiacAnimal(int ,int ,int ,bool );

int main(){
    int dd,mm,yy;
    
    bool ly = checkly;
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
    if(checkly){
        cout << findmly(dd ,mm );
    }else{
        cout << findmnotly(dd ,mm );
    }
    cout << zyname[calZodiacAnimal(dd,mm,yy,ly)];
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
            Atta = 2;
            Hina = 3;
            Tanang = 4;
            Pita = 5;
            Mata = 6;
            Pohka = 7;
            Matchima = 1;
            return dname[0];
        case 1:
            Atta = 3;
            Hina = 4;
            Tanang = 5;
            Pita = 6;
            Mata = 7;
            Pohka = 1;
            Matchima = 2;
            return dname[1];
        case 2:
            Atta     = 4 ;
            Hina     = 5 ;
            Tanang   = 6 ;
            Pita     = 7 ;
            Mata     = 1 ;
            Pohka    = 2 ;
            Matchima = 3 ;
            return dname[2];
        case 3:
            Atta = 5;
            Hina = 6;
            Tanang = 7;
            Pita =1;
            Mata =2;
            Pohka =3;
            Matchima =4;
            return dname[3];
        case 4:
            Atta     = 6 ;
            Hina     = 7 ;
            Tanang   = 1 ;
            Pita     = 2 ;
            Mata     = 3 ;
            Pohka    = 4 ;
            Matchima = 5 ;
            return dname[4];
        case 5:
            Atta     = 7 ;
            Hina     = 1 ;
            Tanang   = 2 ;
            Pita     = 3 ;
            Mata     = 4 ;
            Pohka    = 5 ;
            Matchima = 6 ;
            return dname[5];
        case 6:
            Atta     = 1 ;
            Hina     = 2 ;
            Tanang   = 3 ;
            Pita     = 4 ;
            Mata     = 5 ;
            Pohka    = 6 ;
            Matchima = 7 ;
            return dname[6];
    }
}

bool checkly(int yy){
    if(yy%4 == 0){
        if(yy%100 == 0){
            if(yy%400 == 0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
}

int findmly(int dd,int mm){
    switch(mm){
        case 1:
            if(dd >= 1 && dd <= 15){
                mm = 2;
                Tanu     = 2 ;
                Kadoompa = 3 ;
                Sahutsha = 4 ;
                Puntu    = 5 ;
                Puta     = 6 ;
                Hari     = 7 ;
                Pattani  = 1 ;
            } 
            if(dd > 15) {
                mm = 3;
            }
            
            return mm;
        case 2:
            if(dd >= 1 && dd <= 13){
                mm = 3;
            }
             
            if(dd > 13){
                mm = 4;
            } 
            return mm;
        case 3:
            if(dd >= 1 && dd <= 15){
                mm = 4;
            }
            if(dd > 15){
                mm = 5;
            } 
            return mm;
        case 4:
            if(dd >= 1 && dd <= 13){
                mm = 5;
            } 
            if(dd > 13){
                mm = 6;
            } 
            return mm;
        case 5:
            if(dd >= 1 && dd <= 13) {
                mm = 6;
            }
            if(dd > 13){
                mm = 7;
            } 
            return mm;
        case 6:
            if(dd >= 1 && dd <= 11){
                mm = 7;
            } 
            if(dd > 11){
                mm = 8;
            } 
            return mm;
        case 7:
            mm = 8;
            return mm;
        case 8:
            if(dd >= 1 && dd <= 10){
              mm = 8;  
            } 
            if(dd > 10){
                mm = 9;
            } 
            return mm;
        case 9:
            if(dd >= 1 && dd <= 8) {
                mm = 9;
            }
            if(dd > 8){
                mm = 10;
            } 
            return mm;
        case 10:
            if(dd >= 1 && dd <= 8){
                mm = 10;
            } 
            if(dd > 8){
                mm = 11;
            } 
            return mm;
        case 11:
            if(dd >= 1 && dd <= 6){
                mm = 11;
            } 
            if(dd > 6){
               mm = 12; 
            } 
            return mm;
        case 12:
            if(dd >= 1 && dd <= 6){
               mm = 12; 
            } 
            if(dd > 25){
                mm = 1;
            } 
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

int calZodiacAnimal(int dd,int mm ,int yy,bool ly){
    int xx = yy;
    yy = yy%12;    
    switch(yy){
        case 0:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 1:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 2:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 3:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 4:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 5:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 6:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 7:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 8:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 9:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 10:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    return yy+1;
                }else{
                    return yy;
                }
            }
        case 11:
            ly = checkly(xx);
            if(ly == true){
                findmly(dd,mm);
                if(mm == 1){
                    yy = 0;
                    return yy;
                }else{
                    return yy;
                }
            }else{
                findmnotly(dd,mm);
                if(mm == 1){
                    yy = 0;
                    return yy;
                }else{
                    return yy;
                }
            }
    }
}

int calfnum(int dd,int num[7]){
    switch(dd){
        case 1:
            for(int i = 0;i < 7;i++){
                num[i] = i+1;
            }
            break;
        case 2:
            for(int i = 0;i < 6;i++){
                num[i] = i+2;
            }
            num[6] = 1;
            break;
        case 3:
            for(int i = 0;i < 5;i++){
                num[i] = i+3;
            }
            for(int j = 0;j < 2;j++){
                num[5+j] = j+1;
            }
            break;
        case 4:
            for(int i = 0;i < 4;i++){
                num[i] = i+4;
            }
            for(int j = 0;j < 3;j++){
                num[4+j] = j+1;
            }
            break;
        case 5:
            for(int i = 0;i < 3;i++){
                num[i] = i+5;
            }
            for(int j = 0;j < 4;j++){
                num[3+j] = j+1;
            }
            break;
        case 6:
            for(int i = 0;i < 2;i++){
                num[i] = i+6;
            }
            for(int j = 0;j < 5;j++){
                num[2+j] = j+1;
            }
            break;
        case 7:
            num[0] = 7;
            for(int i = 0;i < 6;i++){
                num[1+i] = i+1;
            }            
    }
}


int calfirstnumber_M(int m){
    if(m == 1 || m == 8){
        Tanu     = 1 ;
        Kadoompa = 2 ;
        Sahutsha = 3 ;
        Puntu    = 4 ;
        Puta     = 5 ;
        Hari     = 6 ;
        Pattani  = 7 ;
    }
    else if(m == 2 || m == 9){
        Tanu     = 2 ;
        Kadoompa = 3 ;
        Sahutsha = 4 ;
        Puntu    = 5 ;
        Puta     = 6 ;
        Hari     = 7 ;
        Pattani  = 1 ;
    }
    else if(m == 3 || m == 10){
        Tanu     = 3 ;
        Kadoompa = 4 ;
        Sahutsha = 5 ;
        Puntu    = 6 ;
        Puta     = 7 ;
        Hari     = 1 ;
        Pattani  = 2 ;
    }
    else if(m == 4 || m == 11){
        Tanu     = 4 ;
        Kadoompa = 5 ;
        Sahutsha = 6 ;
        Puntu    = 7 ;
        Puta     = 1 ;
        Hari     = 2 ;
        Pattani  = 3 ;
    }
    else if(m == 5 || m == 12){
        Tanu     = 5 ;
        Kadoompa = 6 ;
        Sahutsha = 7 ;
        Puntu    = 1 ;
        Puta     = 2 ;
        Hari     = 3 ;
        Pattani  = 4 ;
    }
    else if(m == 6){
        Tanu     = 6 ;
        Kadoompa = 7 ;
        Sahutsha = 1 ;
        Puntu    = 2 ;
        Puta     = 3 ;
        Hari     = 4 ;
        Pattani  = 5 ;
    }
    else if(m == 7){
        Tanu     = 7 ;
        Kadoompa = 1 ;
        Sahutsha = 2 ;
        Puntu    = 3 ;
        Puta     = 4 ;
        Hari     = 5 ;
        Pattani  = 6 ;
    }
}

int calfirstnumber_Y(int y){
    if(y == 0 || y == 7){
        Morrana = 1 ;
        Supa    = 2 ;
        Kumma   = 3 ;
        Rapa    = 4 ;
        Payaya  = 5 ;
        Tasee   = 6 ;
        Tasa    = 7 ;
    }
    else if(y == 1 || y == 8){
        Morrana = 2 ;
        Supa    = 3 ;
        Kumma   = 4 ;
        Rapa    = 5 ;
        Payaya  = 6 ;
        Tasee   = 7 ;
        Tasa    = 1 ;
    }
    else if(y == 2 || y == 9){
        Morrana = 3 ;
        Supa    = 4 ;
        Kumma   = 5 ;
        Rapa    = 6 ;
        Payaya  = 7 ;
        Tasee   = 1 ;
        Tasa    = 2 ;
    }
    else if(y == 2 || y == 10){
        Morrana = 4 ;
        Supa    = 5 ;
        Kumma   = 6 ;
        Rapa    = 7 ;
        Payaya  = 1 ;
        Tasee   = 2 ;
        Tasa    = 3 ;
    }
    else if(y == 3 || y == 11){
        Morrana = 5 ;
        Supa    = 6 ;
        Kumma   = 7 ;
        Rapa    = 1 ;
        Payaya  = 2 ;
        Tasee   = 3 ;
        Tasa    = 4 ;
    }
    else if(y == 5){
        Morrana = 6 ;
        Supa    = 7 ;
        Kumma   = 1 ;
        Rapa    = 2 ;
        Payaya  = 3 ;
        Tasee   = 4 ;
        Tasa    = 5 ;
    }
    else if(y == 6){
        Morrana = 7 ;
        Supa    = 1 ;
        Kumma   = 2 ;
        Rapa    = 3 ;
        Payaya  = 4 ;
        Tasee   = 5 ;
        Tasa    = 6 ;
    }
   
}