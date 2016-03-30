////
////  Ejercicio4.c
////  SistemasOperativos
////
////  Created by Daniel Lago Aguado on 27/3/16.
////  Copyright © 2016 Daniel Lago Aguado. All rights reserved.
////
//
//#include <stdio.h>
//#include <fcntl.h>
//#include <unistd.h>
//
//#define BLOCK 4096
//
//char buf[BLOCK] = "xxxxxxx…xxxxx";
//
//void copia_bloque(int fdo, int fdd)
//{
//    read(fdo,buf,BLOCK);
//    write(fdd,buf,BLOCK);
//}
//
//void main()
//{
//     pid_t pid;
//     int fdo,fdd;
//     fdo = open("origen",O_RDONLY);
//     fdd = open("destino",O_RDWR|O_CREAT|
//                  O_TRUNC,0666);
//     for (int i=0; i < 4; i++) {
//         lseek(fdo,i*BLOCK, SEEK_SET);
//         lseek(fdd,2*i*BLOCK,SEEK_SET);
//         pid = fork();
//         if (pid==0)
//         {
//             copia_bloque(fdo,fdd);
//             exit(0);
//             }
//         }
//     while (wait(NULL)!=-1) { };
//     read(fdd,buf,BLOCK);
//     lseek(fdd,0,SEEK_SET);
//     read(fdd, buf,BLOCK);
//}
