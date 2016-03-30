//#include<stdio.h>
//#include<string.h>
//#include<pthread.h>
//#include<stdlib.h>
//#include<unistd.h>
//
//void *trabajo(void *arg);
//int variable_global = 0;
//
//pthread_t tid[2]; //tid es el identificador de hilo (threadID)
//
//int main(void)
//{
//    int i = 0;
//    int err;
//
//    printf("\nHilo pppal, var. global entes de ejecutar hilos es: %d\n", variable_global);	
//
//    while(i < 2)  //Queremos crear 2 hilos
//    {
//        err = pthread_create(&(tid[i]), NULL, trabajo, NULL);
//        if (err != 0)
//            printf("\nError al crear el hilo :[%d]", strerror(err));
//        else
//            printf("\n Hilo creado!\n");
//
//        i++;
//    }
//
//    sleep(5);
//    printf("\nHilo pppal, var. global después ejecutar hilos es: %d\n", variable_global);
//    return 0;
//}
//
//void *trabajo(void *arg)
//{
//    unsigned long i = 0;
//    pthread_t id = pthread_self();
//      
//    printf("\nppio de un hilo, var. global es: %d\n", variable_global);
//    variable_global++;
//    printf("\ntercera de un hilo, var. global es: %d\n", variable_global);
//    
//    if(pthread_equal(id,tid[0]))
//    {
//        printf("\n Estes es el primer hilo\n");
//    	printf("\nprimer hilo, var. global es: %d\n", variable_global);
//    }
//    else
//    {
//        printf("\n Este es el segundo hilo\n");
//        printf("\n Segundo hilo, var. global es: %d\n", variable_global);
//    }
//
//    sleep(5);
//
//    return NULL;
//}
