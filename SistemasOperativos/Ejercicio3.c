////
////  main.c
////  SistemasOperativos
////
////  Created by Daniel Lago Aguado on 27/3/16.
////  Copyright © 2016 Daniel Lago Aguado. All rights reserved.
////
//
//#include <stdio.h>
//#include <unistd.h>
//int varGlobal;
//
//int main(int argc, const char * argv[])
//{
//    int a = 3;
//    int b=2;
//    int i;
//    pid_t p;
//    
//    for (i=0;i<4;i++)
//    {
//        p=fork();
//        
//        if (p==0)
//        {
//            b++;
//            //execlp("ls", "ls", (char *)NULL);
//            a++;
//        }
//        else
//        {
//            wait(NULL);
//            a++;
//            b--;
//        }
//        //printf("Soy %d y mi padre es %d\nValor a = %d , valor de b = %d\n", getpid(),getppid(),a,b);
//        //printf("Soy %d y mi padre es %d\n",getpid(),getppid());
//    }
//        printf("Valor FINAL a = %d , valor de b = %d\n",a,b);
//    
//    return 0;
//}
