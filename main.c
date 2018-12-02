//
//  main.c
//  BadApple_Test_1
//
//  Created by Craft_Kevin on 2018/12/2.
//  Copyright © 2018年 Craft_Kevin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//#pragma comment(lib,"Winmm.lib")
//#include<iostream>
//#include <vector>
//void itoa(int i,char* string)
//{
//    int power,j;
//    j=i;
//    for(power=1;j>=10;j/=10)
//        power*=10;
//    for(;power>0;power/=10)
//    {
//        *string++='0'+i/power;
//        i%=power;
//    }
//    *string='\0';
//}
int main(int argc, const char * argv[]) {
    // insert code here...
//    FILE *isOpen = NULL;
//    char filePrefix[30] = "BadApple/";
//    char fileBody[3];
//    char fileSuffix[5] = ".txt";
//    char *fileName[40];
    char data[40][82];
//    for(int i=1;i<=1;i++)
//    {
//        itoa(i,fileBody);
//        printf("%s\n",fileBody);
//        strcat(filePrefix,fileBody);
//        strcat(filePrefix,fileSuffix);
//        *fileName = filePrefix;
//        if((isOpen=fopen(*fileName, "r")) == NULL)
//        {
//            printf("It's NULL!");
//            break;
//        }
//        for(int j=0;j<40;j++)
//        {
////            isOpen=fopen(*fileName, "r");
//            freopen("BadApple/11.txt","r",stdin);
//            scanf("%s",data[j]);
////            fclose(isOpen);
//        }
//        for(int j=0;j<40;j++)
//        {
//            printf("%s\n",data[j]);
//        }
//    }
    int i;
    char fileName[20];
//    FILE *isOpen = NULL;
    for (i = 1; i <= 440; i++) {
        sprintf(fileName, "BadApple/%d.txt", i);
//        FILE *isOpen=fopen(fileName,"r");
        freopen(fileName,"r",stdin);
        for(int j=0;j<40;j++)
        {
            gets(data[j]);
//            scanf("%s",data[j]);
        }
        for(int j=0;j<40;j++)
        {
            puts(data[j]);
//            printf("\n");
        }
//        fclose(isOpen);
//        printf("%s\n", fileName);
        sleep(1);
    }
//    freopen("BadApple/1.txt","r",stdin);
//    for(int j=0;j<40;j++)
//    {
//        gets(data[j]);
//    }
//    for(int j=0;j<40;j++)
//    {
//        puts(data[j]);
////        printf("\n");
//    }
//    sleep(1);
//        FILE *txt=fopen( "BadApple/"i".txt","r");
//        fclose("BadApple/i.txt");
    
//    FILE *txt=fopen( "BadApple/1.txt","r");
//    printf("Hello, World!\n");
    return 0;
}
