#ifndef PART_H
#define PART_H

typedef struct
{
    char part_id[20];
    char name[50];
    char spec[100];
    char category[30];
    int stock;
    int safey_stock;
    char suppliner[50]
    char location[30];
    char remark[100];
}part;

#endif