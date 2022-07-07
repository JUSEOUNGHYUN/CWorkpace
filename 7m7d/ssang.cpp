#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <algorithm>
#include <cstring>
#include <windows.h>
#include <sstream>

using namespace std;

string intToString(int n);
FILE *fp == nullptr;

string GetNextNumber_open(string strPath)
{
    //fp = fopen("C:\\test\\output.nmea", "r");
    fp = fopen(strPath.c_str(), "r");
    
}
string GetNextNumber_nextData(){  // FILE open
    string nmea_data;
    nmea_data.clear();

    if ( fp != nullptr) {
        char Char_data[1000]={0};
        data = Char_data;
        data = fgets(Char_data, 1000, fp);
        int len = data.length();

        if(data[len-1]=='\n'){
            Sleep(50);
        }

        nmea_data = data;
    }
    return nmea_data;
}

void GetNextNuber_close(){      // FILE close
    cout<<"file close"<<"\n";
    if(fp!=nullptr){
        fclose(fp);
        fp = nullptr;
    }

}

string intToString(int n){  //to_string 함수 구현
    stringstream s;
    s<<n;
    return s.str();
}

string Data_Finish_Number(string File_data){   // 데이터 마지막 숫자 리턴

    string Finish_num;  // 데이터 마지막 숫자

    int pos = File_data.rfind('*');
    Finish_num = File_data.substr(pos+1);

    return Finish_num;
}

string Exclusive_num(string str){   // exclusive한 숫자 리턴 (string)

    int slen = str.length();

    int num = 0;

    for(int i=0; i<slen; i++){
        char value = str.at(i);
        if(value=='$'){
            continue;
        }
        else if(value=='*'){
            break;
        }
        else{
            num ^= value;
        }
    }

    string ife = intToString(num);

    return ife;
}

int main(void) {

    // 파일을 불러올 문자열
    // strPath
    string str;
    string str1 = GetNextNumber_open(str);
    
    // 한줄씩 읽어올 문자열
    // nmea_data
    string f_nmea_data;
    GetNextNumber_nextData(f_nmea_data);
Aasdf 
    while(f_nmea_data!=NULL){
        printf("%s", f_nmea_data);
    }














    /*
    string data = "$GPGGA,215255.800,4730.185,N,01902.315,E,1,12,1.0,0.0,M,0.0,M,,*63";

    string Exclu_num;
    string sc_secnd;

    sc_secnd = Data_Finish_Number(data);
    Exclu_num = Exclusive_num(data);

    cout<<Exclu_num<<" "<<sc_secnd;
    */
    return 0;
} 


