#include <stdio.h>
#include "part.h"

void show_memu()
{
    printf("\n===== Spare parts Management System =====\n");
    printf("1.Add part / 添加备件\n");
    printf("2.Search Part / 查询备件\n");
    printf("3.Update Stock / 修改库存\n");
    printf("4.Delete Part / 删除备件\n");
    printf("5.Low-stock List / 低库存列表\n");
    printf("6.Purchase Suggestion / 采购建议\n");
    printf("7.Save to CSV / 保存\n");
    printf("8.Load from CSV / 加载\n");
    printf("9.Statistics / 统计\n");
    printf("0.Exit / 退出\n");
    printf("===================================================\n");
    printf("Please enter your choice:");
}

int main()
{
    int choice;
    while(1)
    {
        show_menu();
        if(scanf("%d",&choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while(getchar() != '\n')
            {
                continue;
            }
        }
        switch(choice)
        {
            case 1:printf(">>Function:1.Add part (to be implemented)\n");
            break;
            case 2:printf(">>Function:2.Search Part (to be implemented)\n");
            break;
            case 3:printf(">>Function:3.Update Stock (to be implemented)\n");
            break;
            case 4:printf(">>Function:4.Delete Part (to be implemented)\n");
            break;                
            case 5:printf(">>Function:5.Low-stock List (to be implemented)\n");
            break;
            case 6:printf(">>Function:6.Purchase Suggestion (to be implemented)\n");
            break;
            case 7:printf(">>Function:7.Save to CSV (to be implemented)\n");
            break;
            case 8:printf(">>Function:8.Load from CSV (to be implemented)\n");
            break;
            case 9:printf(">>Function:9.Statistics (to be implemented)\n");
            break;
            case 0:printf("Exit...Goodbey\n");
            return 0;
            default:pritnt("Invalid choice! Try again.\n");
        }
    }
    return 0;
}