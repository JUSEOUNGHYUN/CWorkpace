/*
- 리눅스에서컴파일
Makefile

class CNMEAReader;
- CNMEAReader(std::string strPath) 
- std::string GetNextData() // 호출 
- bool IsCorrectCRC(std::string nmeaData)   nmeaData를 불러와서 확인

class 클래스 이름{
접근 제어 지시자:
    멤버변수:
    멤버함수
};

*/

#include <iostream>
#include <string>

using namespace std;

class CNMEAReader
{
    
public:
    CNMEAReader();
    CNMEAReader(string strPath); // open file handle 생성자 오버로딩
    ~CNMEAReader(); // close file handle
    string* GetNextData();

protected:
    bool IsCorrectCRC(string nmeaData);
    string m_strPath;
    FILE* m_pFile;
    bool m_bIsCorrectCRC;
};

