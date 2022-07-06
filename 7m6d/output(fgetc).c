#include <stdio.h>
#include <Windows.h>    // Sleep함수를 쓰기위한 헤더파일

int main() {

    FILE *fp;
    int pinter;

    for(int i=0; i<2; i++){
        fp = fopen("C:\\test\\output.nmea", "r"); // 파일 절대 경로 포인터에 저장

        while(1){
            pinter = fgetc(fp);
            if(pinter == '\n'){
                Sleep(50);
            }
            if(feof(fp)){
                break;
            }

            printf("%c", pinter);
        }
    }
    fclose(fp);

    return 0;
}