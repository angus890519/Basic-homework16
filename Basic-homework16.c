/* �p������׹��-�򥻽m�ߧ@�~-�@�~16*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/27 23:00*/ 
#include <stdio.h> //��ܮw 
#include <stdlib.h>//��ܮw
#include <string.h>//��ܮw

main()
{
    char num[10][3]={"�s","��","�L","��","�v","��","��","�m","��","�h"};//�ഫ1-9���}�C 
    char ch[3][3]={"�a","��","�B"};//�ഫ��쪺�}�C
    char wan[3][3]={"��","��","�U"};//�ഫ��쪺�}�C
    int i, j, len, group, start, digit, c=0, flag=0;//�w�q�ܼ�
    char n[20];//�w�q�s20�ӭȪ��}�C
	printf("�p������׹��-��¦�m�ߧ@�~-�@�~16\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/04/27 23:00\n");
	printf("-------------------------------------------------\n");  
    printf("�п�J�@�Ӿ��(���ƻݭn�p��16���)�G" );
    scanf("%s",n); //��J��� 
    len = strlen(n);//strlen�p��r������ 
    if (len>16) //�r���j��16�Ӧ��,���~ 
    {
                printf("����ƪ��׶W�L16���, �L�k�ഫ...\n");
                exit(0);
    }
    group=(len-1)/4+1;
    printf("�ഫ�᪺���G�G");
    for(i=0;i<group;i++)
    {
                        flag=0;
                        if (i==0) start=(4-len%4)%4;
                        else start=0;
                        for (j=start;j<4;j++)
                        {
                            digit=n[c++]-48;
                            if(digit==0) continue; //�B�z1-9
                            printf("%s",num[digit]);//����r��3��bytes
                            if(j!=3) //�B�z��쪺�}�C 
                             printf("%s",ch[j]); //����r��3��bytes
                             flag=1;
                        }
                        if (group!=1 && i!=group-1 && flag!=0) //�ഫ��쪺�}�C 
                        {
                                     printf("%s",wan[4-group+i]); //��r��3��bytes
                        }
    }
    printf("\n");
    system("pause");
    return 0;
}

