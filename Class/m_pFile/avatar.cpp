#include "Declar.h"
#include <iostream>
#include <windows.h>

/*
void CNMEAReader::GetNextData(){

}
*/

CNMEAReader::CNMEAReader() {
    char ch[100]={0};

    m_strPath.clear();
    m_pFile = nullptr;
    m_bIsCorrectCRC = false;
}


// 1. strpath 파일을 열어서 m_pfile 에 fopen 한다
CNMEAReader::CNMEAReader(string strPath) {

    m_strPath.clear();
    m_pFile = nullptr;
    m_bIsCorrectCRC = false;

    //
    // check isExistFile()

    if ( m_pFile == nullptr )
        printf("[error] fopen error");

    C_ASSERT(m_pFile == nullptr);
}

// 2. m_pFile 을 fclose
CNMEAReader::~CNMEAReader() {   
    cout<<"file close"<<"\n";

    if ( m_pFile != nullptr ) {
        fclose(m_pFile);
        m_pFile = nullptr;
    }

    m_strPath.clear();  
}

// 3. 데이터 읽는 클래스
string* CNMEAReader::GetNextData() {
    // read

    // checksum
    
    
    
}

// 4. 데이터가 끝났는지 확인 클래스
bool CNMEAReader::IsCorrectCRC(string nmeaData) {

}

