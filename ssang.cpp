#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main() {    

    FILE* fp;
    char ch[100]={0};

    fp = fopen("C:\\test\\output.nema", "r");

    while(fgets(ch, 100, fp)!=NULL){
        string str = ch;
        int len = str.length();

        if(str[len-1]=='\n'){
            Sleep(50);
        }

        printf("%s\n", str);
    }

    
    fclose(fp);

    return 0;
}