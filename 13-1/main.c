//
//  main.c
//  13-1
//
//  Created by MacBook Air on 2023/11/30.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int ID;//학번
    char name[100];//이름
    float score;//학점
};

int main(void){
   //instance 선언
    struct student s1={123, "yerim", 4.3};
    
    //다른값 변경
    s1.ID = 123456;
    s1.name[0] = 'c';
    s1. score = 0.7;
    //출력
    printf("ID : %i\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.score);
    
    strcpy(s1.name, "Bongjun");
    printf("name2 : %s\n");
    return 0;
}
