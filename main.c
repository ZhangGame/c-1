#include <stdio.h>

int main(int argc,char*argv[])
{
    int qian=0;
    printf("进入存钱系统\n ");
    while(1){
        int a=0;
        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额\n");
        printf("4--退出\n");


        printf("请输入功能编号\n");
        scanf("%d,&a");

        if(a==1){
            char x;
            int cun;
            printf("进入存钱功能，请输入要存入的金额\n");

            scanf("%d,&cun");
            qian=qian+cun;
            printf("存入成功，点击回车继续\n");
            scanf("%c",&x);
            scanf("%c",&x);
        }
    }
    return 0;

}