/* 計算機概論實務-基本練習作業-作業16*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/27 23:00*/ 
#include <stdio.h> //函示庫 
#include <stdlib.h>//函示庫
#include <string.h>//函示庫

main()
{
    char num[10][3]={"零","壹","貳","參","肆","伍","陸","柒","捌","玖"};//轉換1-9的陣列 
    char ch[3][3]={"仟","佰","拾"};//轉換單位的陣列
    char wan[3][3]={"兆","億","萬"};//轉換單位的陣列
    int i, j, len, group, start, digit, c=0, flag=0;//定義變數
    char n[20];//定義存20個值的陣列
	printf("計算機概論實務-基礎練習作業-作業16\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/04/27 23:00\n");
	printf("-------------------------------------------------\n");  
    printf("請輸入一個整數(此數需要小於16位數)：" );
    scanf("%s",n); //輸入整數 
    len = strlen(n);//strlen計算字元長度 
    if (len>16) //字元大於16個位數,錯誤 
    {
                printf("此整數長度超過16位數, 無法轉換...\n");
                exit(0);
    }
    group=(len-1)/4+1;
    printf("轉換後的結果：");
    for(i=0;i<group;i++)
    {
                        flag=0;
                        if (i==0) start=(4-len%4)%4;
                        else start=0;
                        for (j=start;j<4;j++)
                        {
                            digit=n[c++]-48;
                            if(digit==0) continue; //處理1-9
                            printf("%s",num[digit]);//中文字有3個bytes
                            if(j!=3) //處理單位的陣列 
                             printf("%s",ch[j]); //中文字有3個bytes
                             flag=1;
                        }
                        if (group!=1 && i!=group-1 && flag!=0) //轉換單位的陣列 
                        {
                                     printf("%s",wan[4-group+i]); //文字有3個bytes
                        }
    }
    printf("\n");
    system("pause");
    return 0;
}

