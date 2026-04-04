#include <stdio.h>
#include <string.h>

void sort_strings(char* *arr, int size){
    char* tamp;
    for(int i = 0;i<size-1;i++){
        for(int j = 0;j<size-1-i;j++){
            if(strcmp((char*) *(arr+size-2-j-i), (char*) *(arr+size-1-i))>0){
                tamp = *(arr+size-2-j-i);
                *(arr+size-2-j-i) = *(arr+size-1-i);
                *(arr+size-1-i) = tamp;
            }
        }
    }
}

int main(){
    char* words[] = {"apple","ant","banana","cherry"};
    int size = 4;

    sort_strings(words, size);

    for(int i = 0;i<size;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
