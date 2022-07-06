#include <iostream>
#include <string>

using namespace std;

class air{

    private:
        int Degree;
        bool On_Off;
    public:
        void initAir();          // 에어컨
        void OnOff();            // 전원 on/off   
        void SetDegree(int num); // 온도를 입력
        int GetDegree();        // 온도를 반환
        void OutDegree();        // 현재 온도 출력
        void UpDegree();         // 온도 증가
        void DownDegree();       // 온도 감소
};