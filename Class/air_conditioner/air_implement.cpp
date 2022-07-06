#include "air.h"
#include <string>

using namespace std;

void air::initAir() {
    On_Off = false;     // 초기화
    Degree = 0;         // 초기화
}

void air::OnOff() {
    if(On_Off==true){
        On_Off=false;
        cout<<"off"<<"\n";
    }
    else{
        On_Off=true;
        cout<<"on"<<"\n";
    }
}

void air::SetDegree(int num){       // 온도를 입력
    Degree = num;
    cout<<"degree :"<<"num"<<"\n";
}

int air::GetDegree(){
    return Degree;      // 온도를 반환해야되니까 int형으로 함수를 준다.
}

void air::OutDegree() {
    cout<<GetDegree()<<"\n";
}

void air::UpDegree() {
    Degree++;
    cout<<"updegree"<<"\n";
    OutDegree;
}

void air::DownDegree() {
    Degree--;
    cout<<"downdegree"<<"\n";
    OutDegree;
}
